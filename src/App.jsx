import React, { useState, useEffect, useCallback, useRef, useMemo } from 'react'
import { Tree } from 'react-arborist'
import { getDocument, GlobalWorkerOptions } from 'pdfjs-dist/legacy/build/pdf'
import pdfjsWorkerUrl from 'pdfjs-dist/legacy/build/pdf.worker.mjs?url'
import { parseTxtToTree } from './parser.js'
import './App.css'

GlobalWorkerOptions.workerSrc = pdfjsWorkerUrl

// ─── file manifest (auto: public/data/manifest.json preferred) ─────────
const FALLBACK_FILE_LIST = ['e2.txt', 'ric.txt']
const MANIFEST_URL = './data/manifest.json'
const PDF_FILE_LIST = ['E2AP-V8.pdf', 'E2SM-CCC.pdf', 'E2SM-KPM.pdf', 'E2SM-LLC.pdf', 'E2SM-NI.pdf', 'E2SM-RC.pdf', 'E2SM.pdf']
const PDF_BASE_URL = './pdf'
const OTHER_BASE_URL = './other'
const OTHER_MANIFEST_URL = `${OTHER_BASE_URL}/manifest.json`

// ─── Node renderer ────────────────────────────────────────────────────────────
function Node({ node, style, dragHandle, selected, comment, onSelect, showAllComments, displayMode, rowIndex, nodeKey, isMatched, matchedName, matchedComment }) {
  const isLeaf = !node.data.children?.length
  const hasChildren = !isLeaf
  const summary = comment?.summary?.trim()
  const rawStructType = String(node.data?.structType || node.structType || '').trim()
  const rawType = String(node.data?.type || node.type || '').trim()
  const badgeSource = rawStructType || rawType
  const badgeLabel = badgeSource ? abbreviateType(badgeSource) : ''
  const badgeStyle = badgeSource ? getTypeStyle(badgeSource) : {}
  
  // Display name based on mode
  let displayName = node.data.name
  if (displayMode === 'type' && node.data.presence) {
    displayName = `${node.data.type || '?'} [${node.data.presence}]`
  }

  return (
    <div
      id={`node-${String(nodeKey).replace(/[:\/\s]/g, '-')}`}
      ref={dragHandle}
      style={style}
      className={`tree-node level-${node.level + 1} ${selected ? 'selected' : ''} ${isLeaf ? 'leaf' : 'folder'} ${isMatched ? 'matched' : ''} ${matchedName ? 'matched-name' : ''} ${matchedComment ? 'matched-comment' : ''} ${matchedName && matchedComment ? 'matched-both' : ''}`}
      onClick={() => {
        if (hasChildren) node.toggle()
        onSelect(node.data.id, node.data.name)
      }}
    >
      <button
        className="comment-open"
        type="button"
        onClick={e => {
          e.stopPropagation()
          onSelect(node.data.id, node.data.name)
        }}
        title="View comment details"
      >
        View
      </button>
      <span className="indent-guide" style={{ width: node.level * 24 }} />

      <span className="node-toggle">
        {hasChildren ? (node.isOpen ? '▾' : '▸') : '·'}
      </span>

      <span className={`node-icon ${isLeaf ? 'icon-leaf' : node.isOpen ? 'icon-open' : 'icon-closed'}`}>
        {isLeaf ? '◆' : node.isOpen ? '◻' : '◼'}
      </span>

      <span className="node-index">#{rowIndex}</span>
      <span className="node-name">{displayName}</span>
      {badgeLabel && (
        <span className="node-struct-badge" style={badgeStyle} title={badgeSource}>
          {badgeLabel}
        </span>
      )}
      <span className="node-badge" title={`Level ${node.level + 1}`}>
        L{node.level + 1}
      </span>
    </div>
  )
}

// ─── API Endpoints ────────────────────────────────────────────────────────────
const COMMENTS_API = import.meta.env.VITE_COMMENTS_API || (typeof window !== 'undefined' && !window.location.hostname.includes('localhost') ? 'https://asntreeweb.nguyendung010803.workers.dev/api/comments' : '/api/comments')

const STRUCT_TYPE_PALETTE = [
  { color: '#22c55e', background: 'rgba(34,197,94,0.12)', border: 'rgba(34,197,94,0.2)' },
  { color: '#0ea5e9', background: 'rgba(14,165,233,0.12)', border: 'rgba(14,165,233,0.2)' },
  { color: '#f97316', background: 'rgba(249,115,22,0.12)', border: 'rgba(249,115,22,0.2)' },
  { color: '#a855f7', background: 'rgba(168,85,247,0.12)', border: 'rgba(168,85,247,0.2)' },
  { color: '#ec4899', background: 'rgba(236,72,153,0.12)', border: 'rgba(236,72,153,0.2)' },
  { color: '#16a34a', background: 'rgba(22,163,74,0.12)', border: 'rgba(22,163,74,0.2)' },
  { color: '#facc15', background: 'rgba(250,204,21,0.12)', border: 'rgba(250,204,21,0.2)' },
]

const STRUCT_TYPE_COLORS = {
  RECURSIVE: STRUCT_TYPE_PALETTE[0],
  SEQUENCE: STRUCT_TYPE_PALETTE[2],
  SEQUENCEOFITEM: STRUCT_TYPE_PALETTE[5],
  SEQUENCEOFSTRUCTURE: STRUCT_TYPE_PALETTE[3],
  CHOICE: STRUCT_TYPE_PALETTE[1],
  SET: STRUCT_TYPE_PALETTE[4],
  INTEGER: STRUCT_TYPE_PALETTE[6],
  BOOLEAN: STRUCT_TYPE_PALETTE[1],
  ENUMERATED: STRUCT_TYPE_PALETTE[3],
  OCTETSTRING: STRUCT_TYPE_PALETTE[5],
  IA5STRING: STRUCT_TYPE_PALETTE[0],
}

function getTypeStyle(type) {
  const normalized = String(type || '').trim().toUpperCase()
  if (!normalized) return {}
  if (STRUCT_TYPE_COLORS[normalized]) return STRUCT_TYPE_COLORS[normalized]
  const hash = Array.from(normalized).reduce((acc, ch) => ((acc * 31 + ch.charCodeAt(0)) >>> 0), 0)
  return STRUCT_TYPE_PALETTE[hash % STRUCT_TYPE_PALETTE.length]
}

function abbreviateType(type) {
  const raw = String(type || '').trim().toUpperCase()
  if (!raw) return ''
  const words = raw
    .replace(/([A-Z])(?=[A-Z][a-z])/g, '$1 ')
    .replace(/OF/g, ' OF ')
    .split(/[^A-Z0-9]+/)
    .filter(Boolean)

  if (words.length <= 1) {
    return raw.slice(0, 3)
  }

  return words.map(w => w[0]).join('').slice(0, 3)
}

// Load comments from Cloudflare KV
async function loadCommentsFromAPI() {
  const res = await fetch(COMMENTS_API)
  if (!res.ok) throw new Error(`HTTP ${res.status}`)
  return await res.json()
}

// Save comments to Cloudflare KV
async function saveCommentsToAPI(comments) {
  const res = await fetch(COMMENTS_API, {
    method: 'POST',
    headers: { 'Content-Type': 'application/json' },
    body: JSON.stringify(comments),
  })
  if (!res.ok) throw new Error(`HTTP ${res.status}`)
  localStorage.setItem('asn_comments', JSON.stringify(comments))
  return true
}

// Clear all comments from API
async function clearCommentsFromAPI() {
  const res = await fetch(COMMENTS_API, { method: 'DELETE' })
  if (!res.ok) throw new Error(`HTTP ${res.status}`)
  localStorage.removeItem('asn_comments')
  return true
}

// ─── Note storage helpers ───────────────────────────────────────────────────
function loadStoredNotes() {
  try {
    const stored = localStorage.getItem('asn_notes')
    if (!stored) return []
    const parsed = JSON.parse(stored)
    if (!Array.isArray(parsed)) return []
    return parsed.map(note => ({
      ...note,
      type: 'note',
      content: note.content ?? '',
    }))
  } catch {
    return []
  }
}

function saveNotesToStorage(notes) {
  try {
    localStorage.setItem('asn_notes', JSON.stringify(notes))
  } catch {
    // ignore storage failures
  }
}

function createNoteFile(name) {
  const safeName = String(name || 'Untitled')
    .trim()
    .replace(/[\\/:*?"<>|]/g, '_')
    .replace(/\s+/g, ' ')
    .trim() || 'Untitled'
  const id = `${Date.now()}`
  return {
    id,
    name: safeName,
    fname: `${safeName.replace(/\s+/g, '_')}-${id}.txt`,
    type: 'note',
    content: '',
  }
}

// ─── Normalization helpers ───────────────────────────────────────────────────
function normalizeString(value) {
  return String(value || '')
    .toLowerCase()
    .normalize('NFD')
    .replace(/\p{Diacritic}/gu, '')
    .replace(/[_\s]+/g, ' ')
    .trim()
}

// ─── Search highlight (default) ───────────────────────────────────────────────
function searchMatch(node, term) {
  const normalizedNode = normalizeString(node.data.name)
  const normalizedTerm = normalizeString(term)
  return normalizedNode.includes(normalizedTerm)
}

// ─── File search match ────────────────────────────────────────────────────────
function fileSearchMatch(fileName, term) {
  const normalizedFile = normalizeString(fileName)
  const normalizedTerm = normalizeString(term)
  return normalizedFile.includes(normalizedTerm)
}

// ─── Main App ─────────────────────────────────────────────────────────────────
export default function App() {
  const [files, setFiles] = useState([])          // { name, tree }[]
  const [activeFile, setActiveFile] = useState(null)
  const [search, setSearch] = useState('')
  const [fileSearch, setFileSearch] = useState('')  // File search input
  const [loading, setLoading] = useState(true)
  const [treeHeight, setTreeHeight] = useState(600)
  const [totalNodes, setTotalNodes] = useState(0)
  const [selectedNodeId, setSelectedNodeId] = useState(null)
  const [selectedNodeName, setSelectedNodeName] = useState('')
  const [comments, setComments] = useState({})
  const [searchComment, setSearchComment] = useState('')
  const [showAllComments, setShowAllComments] = useState(true)
  const [compactComments, setCompactComments] = useState(true)
  const [fileViewMode, setFileViewMode] = useState('tree')
  const [fileListTab, setFileListTab] = useState('txt')
  const [notes, setNotes] = useState([])
  const [lastSelectedFiles, setLastSelectedFiles] = useState({ txt: '', pdf: '', notes: '', other: '' })
  const [pdfSearch, setPdfSearch] = useState('')
  const [pdfPage, setPdfPage] = useState(1)
  const [pdfMarkPage, setPdfMarkPage] = useState('')
  const [pdfLine, setPdfLine] = useState('')
  const [pdfMarkLine, setPdfMarkLine] = useState('')
  const [pdfMarkNote, setPdfMarkNote] = useState('')
  const [pdfMarks, setPdfMarks] = useState({})
  const [otherFileContent, setOtherFileContent] = useState('')
  const [otherLoading, setOtherLoading] = useState(false)
  const [otherSearch, setOtherSearch] = useState('')
  const [otherSearchResults, setOtherSearchResults] = useState({ total: 0, lines: [] })
  const [otherMatchIndex, setOtherMatchIndex] = useState(-1)
  const [otherSearchHistory, setOtherSearchHistory] = useState([])
  const [otherHistoryIndex, setOtherHistoryIndex] = useState(-1)
  const [otherSearchTab, setOtherSearchTab] = useState('search')
  const [otherMarkLine, setOtherMarkLine] = useState('')
  const [otherMarkNote, setOtherMarkNote] = useState('')
  const lastClickedOtherLineRef = useRef(null)

  // Very small C syntax highlighter (best-effort)
  const highlightC = (code) => {
    if (!code) return ''
    const esc = (s) => s.replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;')
    let out = esc(code)

    // comments (/* */ and //)
    out = out.replace(/(\/\*[\s\S]*?\*\/)/g, '<span class="code-comment">$1</span>')
    out = out.replace(/(\/\/.*?$)/gmu, '<span class="code-comment">$1</span>')

    // strings
    out = out.replace(/(\"(?:\\\"|[^\"])*\"|\'(?:\\'|[^'])*\')/g, '<span class="code-string">$1</span>')

    // numbers
    out = out.replace(/\b(0x[0-9a-fA-F]+|\d+(?:\.\d+)?)\b/g, '<span class="code-number">$1</span>')

    // keywords
    const keywords = ['int','char','void','return','if','else','for','while','do','switch','case','break','continue','default','struct','union','typedef','static','const','sizeof','enum','unsigned','signed','long','short']
    const kwRegex = new RegExp('\\\b(' + keywords.join('|') + ')\\\b', 'g')
    out = out.replace(kwRegex, '<span class="code-keyword">$1</span>')

    // common types
    const types = ['size_t','uint32_t','uint16_t','uint8_t','int32_t','int64_t']
    const tRegex = new RegExp('\\\b(' + types.join('|') + ')\\\b', 'g')
    out = out.replace(tRegex, '<span class="code-type">$1</span>')

    return out
  }

  const highlightLine = (line) => {
    if (!line) return ''
    const esc = (s) => s.replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;')
    let out = esc(line)
    out = out.replace(/(\/\*[\s\S]*?\*\/)/g, '<span class="code-comment">$1</span>')
    out = out.replace(/(\/\/.*?$)/gmu, '<span class="code-comment">$1</span>')
    out = out.replace(/(\"(?:\\\"|[^"])*\"|\'(?:\\'|[^'])*\')/g, '<span class="code-string">$1</span>')
    out = out.replace(/\b(0x[0-9a-fA-F]+|\d+(?:\.\d+)?)\b/g, '<span class="code-number">$1</span>')
    const keywords = ['int','char','void','return','if','else','for','while','do','switch','case','break','continue','default','struct','union','typedef','static','const','sizeof','enum','unsigned','signed','long','short']
    const kwRegex = new RegExp('\\\b(' + keywords.join('|') + ')\\\b', 'g')
    out = out.replace(kwRegex, '<span class="code-keyword">$1</span>')
    const types = ['size_t','uint32_t','uint16_t','uint8_t','int32_t','int64_t']
    const tRegex = new RegExp('\\\b(' + types.join('|') + ')\\\b', 'g')
    out = out.replace(tRegex, '<span class="code-type">$1</span>')
    return out
  }

  useEffect(() => {
    let canceled = false
    async function loadOtherFile() {
      if (!activeFile || activeFile.type !== 'other') {
        setOtherFileContent('')
        return
      }
      setOtherLoading(true)
      try {
        const res = await fetch(activeFile.fileUrl)
        if (!res.ok) throw new Error(`HTTP ${res.status}`)
        const text = await res.text()
        if (canceled) return
        setOtherFileContent(text)
      } catch (e) {
        console.warn('Could not load other file:', e)
        if (!canceled) setOtherFileContent(`Could not load file: ${e.message}`)
      } finally {
        if (!canceled) setOtherLoading(false)
      }
    }
    loadOtherFile()
    return () => { canceled = true }
  }, [activeFile])
  const [pdfSearchHistory, setPdfSearchHistory] = useState([])
  const [pdfHistoryIndex, setPdfHistoryIndex] = useState(-1)
  const [pdfSearchTab, setPdfSearchTab] = useState('search')
  const [pdfDoc, setPdfDoc] = useState(null)
  const [pdfTotalPages, setPdfTotalPages] = useState(0)
  const [pdfScale, setPdfScale] = useState(1.0)
  const [pdfPageViewports, setPdfPageViewports] = useState({})
  const [pdfTextPages, setPdfTextPages] = useState([])
  const [pdfSearchResults, setPdfSearchResults] = useState({ total: 0, pages: [] })
  const [pdfMatchIndex, setPdfMatchIndex] = useState(-1)
  const [panelWidth, setPanelWidth] = useState(320)
  const pdfCanvasRef = useRef(null)
  const pdfTextLayerRef = useRef(null)
  const [isDraggingPanel, setIsDraggingPanel] = useState(false)
  const [sidebarWidth, setSidebarWidth] = useState(264)
  const pdfCanvasRefs = useRef({})
  const pdfPageRefs = useRef({})
  const scrollToPdfPage = useCallback((pageNum) => {
    const target = pdfPageRefs.current[pageNum]
    if (target && typeof target.scrollIntoView === 'function') {
      target.scrollIntoView({ behavior: 'smooth', block: 'start' })
    }
  }, [])
  const [isDraggingSidebar, setIsDraggingSidebar] = useState(false)
  const [displayMode, setDisplayMode] = useState('varname') // 'varname' or 'type'
  const [overlayWidth, setOverlayWidth] = useState(220)
  const [isDraggingOverlay, setIsDraggingOverlay] = useState(false)
  const [syncStatus, setSyncStatus] = useState('idle') // 'idle', 'saving', 'synced', 'error'
  const [syncError, setSyncError] = useState('')
  const containerRef = useRef(null)
  const treeRef = useRef(null)
  const panelRef = useRef(null)
  const saveTimeoutRef = useRef(null)

  useEffect(() => {
    try {
      const storedTab = sessionStorage.getItem('asn_file_list_tab')
      const storedFiles = sessionStorage.getItem('asn_last_selected_files')
      if (['pdf','txt','notes','other'].includes(storedTab)) {
        setFileListTab(storedTab)
      }
      if (storedFiles) {
        const parsed = JSON.parse(storedFiles)
        if (parsed && typeof parsed === 'object') {
          setLastSelectedFiles({
            txt: parsed.txt || '',
            pdf: parsed.pdf || '',
          })
        }
      }
    } catch (e) {
      // ignore session storage errors
    }
  }, [])

  useEffect(() => {
    try {
      sessionStorage.setItem('asn_file_list_tab', fileListTab)
    } catch (e) {
      // ignore
    }
  }, [fileListTab])

  useEffect(() => {
    try {
      sessionStorage.setItem('asn_last_selected_files', JSON.stringify(lastSelectedFiles))
    } catch (e) {
      // ignore
    }
  }, [lastSelectedFiles])

  const updateLastSelectedFile = (file) => {
    if (!file) return
    setLastSelectedFiles(prev => {
      if (prev[file.type] === file.fname) return prev
      return { ...prev, [file.type]: file.fname }
    })
  }

  const handleSelectNode = (nodeId, nodeName) => {
    setSelectedNodeId(nodeId)
    setSelectedNodeName(nodeName)

    const rawId = String(nodeId).split(':')[1]
    if (treeRef.current && rawId) {
      try {
        treeRef.current.scrollTo(rawId, 'center')
      } catch (e) {
        // fallback if tree API isn't available yet
      }
    }
  }

  useEffect(() => {
    if (!activeFile) return
    updateLastSelectedFile(activeFile)
  }, [activeFile])

  const updateCommentField = (nodeId, field, value) => {
    setComments(prev => {
      const updated = {
        ...prev,
        [nodeId]: {
          ...(prev[nodeId] ?? { summary: '', main: '' }),
          [field]: value,
        },
      }
      // Auto-save with debounce
      setSyncStatus('saving')
      if (saveTimeoutRef.current) clearTimeout(saveTimeoutRef.current)
      saveTimeoutRef.current = setTimeout(() => {
        saveCommentsToAPI(updated).then(() => setSyncStatus('synced'))
      }, 1000)
      return updated
    })
  }

  // Detect if current file is structured protocol format
  const isStructuredFile = useMemo(() => {
    if (activeFile?.type !== 'txt') return false
    if (!activeFile?.tree?.length) return false
    return activeFile.tree.some(n => n.type || n.structType || n.presence || n.path)
  }, [activeFile])

  // Handle panel drag to resize
  useEffect(() => {
    if (!isDraggingPanel) return

    const handleMouseMove = (e) => {
      const mainContent = document.querySelector('.main-content')
      if (!mainContent) return
      const newWidth = mainContent.clientWidth - e.clientX
      if (newWidth >= 200 && newWidth <= 600) {
        setPanelWidth(newWidth)
      }
    }

    const handleMouseUp = () => {
      setIsDraggingPanel(false)
    }

    document.addEventListener('mousemove', handleMouseMove)
    document.addEventListener('mouseup', handleMouseUp)
    return () => {
      document.removeEventListener('mousemove', handleMouseMove)
      document.removeEventListener('mouseup', handleMouseUp)
    }
  }, [isDraggingPanel])

  // Handle overlay drag to resize
  useEffect(() => {
    if (!isDraggingOverlay) return

    const handleMouseMove = (e) => {
      const treeArea = document.querySelector('.tree-area')
      if (!treeArea) return
      const rect = treeArea.getBoundingClientRect()
      const newWidth = rect.right - e.clientX
      if (newWidth >= 120 && newWidth <= 400) {
        setOverlayWidth(newWidth)
      }
    }

    const handleMouseUp = () => {
      setIsDraggingOverlay(false)
    }

    document.addEventListener('mousemove', handleMouseMove)
    document.addEventListener('mouseup', handleMouseUp)
    return () => {
      document.removeEventListener('mousemove', handleMouseMove)
      document.removeEventListener('mouseup', handleMouseUp)
    }
  }, [isDraggingOverlay])

  // Handle sidebar drag to resize file panel
  useEffect(() => {
    if (!isDraggingSidebar) return

    const handleMouseMove = (e) => {
      const app = document.querySelector('.app')
      if (!app) return
      const newWidth = e.clientX
      if (newWidth >= 220 && newWidth <= 420) {
        setSidebarWidth(newWidth)
      }
    }

    const handleMouseUp = () => {
      setIsDraggingSidebar(false)
    }

    document.addEventListener('mousemove', handleMouseMove)
    document.addEventListener('mouseup', handleMouseUp)
    return () => {
      document.removeEventListener('mousemove', handleMouseMove)
      document.removeEventListener('mouseup', handleMouseUp)
    }
  }, [isDraggingSidebar])

  const selectedComment = selectedNodeId ? comments[selectedNodeId] : null
  const [copyMessage, setCopyMessage] = useState('')
  const copyTimeoutRef = useRef(null)

  const copyText = (text, label) => {
    if (!text) return
    const doNotify = () => {
      setCopyMessage(label ? `${label} copied` : 'Copied')
      if (copyTimeoutRef.current) clearTimeout(copyTimeoutRef.current)
      copyTimeoutRef.current = setTimeout(() => setCopyMessage(''), 1400)
    }

    if (navigator.clipboard && navigator.clipboard.writeText) {
      navigator.clipboard.writeText(text).then(doNotify).catch(() => doNotify())
    } else {
      const ta = document.createElement('textarea')
      ta.value = text
      ta.style.position = 'fixed'
      ta.style.left = '-9999px'
      document.body.appendChild(ta)
      ta.select()
      try { document.execCommand('copy') } catch (e) {}
      ta.remove()
      doNotify()
    }
  }

  // Get the currently selected node for its metadata
  const getSelectedNodeMetadata = useCallback(() => {
    if (!selectedNodeId || !activeFile) return {}
    const nodeId = selectedNodeId.split(':')[1]
    
    let foundNode = null
    function search(nodes) {
      for (const n of nodes) {
        if (n.id === nodeId) {
          foundNode = n
          return
        }
        if (n.children?.length) search(n.children)
      }
    }
    search(activeFile.tree)
    
    return foundNode ? {
      type: foundNode.type || '',
      structType: foundNode.structType || '',
      presence: foundNode.presence || '',
      path: foundNode.path || '',
    } : {}
  }, [selectedNodeId, activeFile])

  const selectedNodeMetadata = getSelectedNodeMetadata()
  const mergedComment = selectedComment ? { ...selectedNodeMetadata, ...selectedComment } : selectedNodeMetadata

  // Load all txt files (reads public/data/manifest.json when available)
  useEffect(() => {
    async function loadFiles() {
      setLoading(true)
      const loaded = []
      const storedNotes = loadStoredNotes()
      setNotes(storedNotes)

      // try to read manifest.json first, fall back to hardcoded list
      let fileList = FALLBACK_FILE_LIST
      try {
        const mres = await fetch(MANIFEST_URL)
        if (mres.ok) {
          const mf = await mres.json()
          if (Array.isArray(mf) && mf.length) fileList = mf
        }
      } catch (e) {
        // ignore, we'll use fallback
      }

      for (const fname of fileList) {
        try {
          const res = await fetch(`./data/${fname}`)
          const text = await res.text()
          const tree = parseTxtToTree(text)
          loaded.push({ name: fname.replace('.txt', ''), fname, type: 'txt', tree })
        } catch (e) {
          console.warn(`Could not load ${fname}:`, e)
        }
      }

      if (PDF_FILE_LIST.length) {
        for (const fname of PDF_FILE_LIST) {
          loaded.push({
            name: fname.replace(/\.pdf$/i, ''),
            fname,
            type: 'pdf',
            pdfUrl: `${PDF_BASE_URL}/${fname}`,
          })
        }
      }

      // try to load files under public/other via a manifest
      try {
        const ores = await fetch(OTHER_MANIFEST_URL)
        if (ores.ok) {
          const of = await ores.json()
          if (Array.isArray(of) && of.length) {
            for (const fname of of) {
              loaded.push({ name: fname, fname, type: 'other', fileUrl: `${OTHER_BASE_URL}/${fname}` })
            }
          }
        }
      } catch (e) {
        // ignore missing other manifest
      }

      setFiles(loaded)
      if (loaded.length || storedNotes.length) {
        let preferred
        if (fileListTab === 'notes' && lastSelectedFiles.notes) {
          preferred = storedNotes.find(f => f.fname === lastSelectedFiles.notes)
        }
        if (!preferred && (fileListTab === 'txt' || fileListTab === 'pdf')) {
          preferred = loaded.find(f => f.type === fileListTab && f.fname === lastSelectedFiles[fileListTab])
        }
        if (!preferred) {
          if (fileListTab === 'notes') preferred = storedNotes[0]
          else preferred = loaded.find(f => f.type === fileListTab)
        }
        if (!preferred) preferred = loaded[0] || storedNotes[0]
        setActiveFile(preferred)
      }
      setLoading(false)
      
      // Load comments from API
      try {
        const loadedComments = await loadCommentsFromAPI()
        setComments(loadedComments)
        setSyncStatus('synced')
        setSyncError('')
      } catch (e) {
        console.warn('Failed to load comments from API:', e)
        setSyncError(`Could not load comments from backend: ${e.message}`)
        setSyncStatus('error')
        try {
          const stored = localStorage.getItem('asn_comments')
          const saved = stored ? JSON.parse(stored) : {}
          setComments(saved)
        } catch {
          setComments({})
        }
      }
    }
    loadFiles()
  }, [])

  // Auto-save comments when they change (with debounce)
  useEffect(() => {
    if (Object.keys(comments).length === 0) return
    setSyncStatus('saving')
    if (saveTimeoutRef.current) clearTimeout(saveTimeoutRef.current)
    saveTimeoutRef.current = setTimeout(async () => {
      try {
        await saveCommentsToAPI(comments)
        setSyncStatus('synced')
        setSyncError('')
      } catch (e) {
        console.warn('Failed to save comments to API:', e)
        setSyncError(`Could not save comments to backend: ${e.message}`)
        setSyncStatus('error')
        localStorage.setItem('asn_comments', JSON.stringify(comments))
      }
    }, 2000)
    
    return () => {
      if (saveTimeoutRef.current) clearTimeout(saveTimeoutRef.current)
    }
  }, [comments])
  useEffect(() => {
    function measure() {
      if (containerRef.current) {
        setTreeHeight(containerRef.current.clientHeight)
      }
    }
    measure()
    const ro = new ResizeObserver(measure)
    if (containerRef.current) ro.observe(containerRef.current)
    return () => ro.disconnect()
  }, [])

  // Count nodes
  useEffect(() => {
    if (!activeFile || activeFile.type !== 'txt') {
      setTotalNodes(0)
      return
    }
    let count = 0
    function walk(nodes) { for (const n of nodes) { count++; if (n.children) walk(n.children) } }
    walk(activeFile.tree)
    setTotalNodes(count)
  }, [activeFile])

  useEffect(() => {
    if (!activeFile) return
    setFileViewMode(activeFile.type === 'pdf' ? 'pdf' : 'tree')
    if (activeFile.type === 'pdf') {
      setPdfSearch('')
      setPdfPage(1)
      setPdfLine('')
      setPdfHistoryIndex(-1)
      setPdfSearchTab('search')
    }
  }, [activeFile])

  const addPdfHistoryTerm = (term) => {
    const normalized = String(term || '').trim()
    if (!normalized) return
    setPdfSearchHistory(prev => {
      const existing = prev.filter(item => item !== normalized)
      return [normalized, ...existing].slice(0, 20)
    })
    setPdfHistoryIndex(0)
  }

  const handlePdfSearchSubmit = () => {
    const term = String(pdfSearch || '').trim()
    if (!term) return
    setPdfSearch(term)
    setPdfPage(1)
    addPdfHistoryTerm(term)
  }

  const handlePdfSearchKeyDown = (e) => {
    if (e.key !== 'Enter') return
    e.preventDefault()
    if (e.shiftKey) {
      prevPdfMatch()
    } else {
      nextPdfMatch()
    }
  }

  const handlePdfHistorySelect = (index) => {
    const term = pdfSearchHistory[index]
    if (!term) return
    setPdfSearch(term)
    setPdfHistoryIndex(index)
  }

  const handlePdfHistoryPrev = () => {
    if (pdfSearchHistory.length === 0) return
    const nextIndex = pdfHistoryIndex > 0 ? pdfHistoryIndex - 1 : pdfSearchHistory.length - 1
    handlePdfHistorySelect(nextIndex)
  }

  const handlePdfHistoryNext = () => {
    if (pdfSearchHistory.length === 0) return
    const nextIndex = pdfHistoryIndex < 0 || pdfHistoryIndex === pdfSearchHistory.length - 1 ? 0 : pdfHistoryIndex + 1
    handlePdfHistorySelect(nextIndex)
  }

  const handleClearPdfHistory = () => {
    setPdfSearchHistory([])
    setPdfHistoryIndex(-1)
  }

  const createNewNote = () => {
    const name = window.prompt('New note name', `Note ${notes.length + 1}`)
    if (!name || !name.trim()) return
    const note = createNoteFile(name)
    const nextNotes = [...notes, note]
    setNotes(nextNotes)
    saveNotesToStorage(nextNotes)
    setFileListTab('notes')
    setActiveFile(note)
    setSearch('')
    setSearchComment('')
    setSelectedNodeId(null)
    setSelectedNodeName('')
    updateLastSelectedFile(note)
  }

  const renameNote = (note) => {
    if (!note) return
    const newName = window.prompt('Rename note', note.name)
    if (!newName || !newName.trim() || newName.trim() === note.name) return
    const updatedNote = {
      ...note,
      name: newName.trim(),
      fname: `${newName.trim().replace(/\s+/g, '_')}-${note.id}.txt`,
    }
    setNotes(prev => {
      const next = prev.map(n => n.id === note.id ? updatedNote : n)
      saveNotesToStorage(next)
      return next
    })
    if (activeFile?.type === 'note' && activeFile.id === note.id) {
      setActiveFile(updatedNote)
    }
    updateLastSelectedFile(updatedNote)
  }

  const deleteNote = (note) => {
    if (!note) return
    if (!window.confirm(`Delete note "${note.name}"? This cannot be undone.`)) return
    setNotes(prev => {
      const next = prev.filter(n => n.id !== note.id)
      saveNotesToStorage(next)
      return next
    })
    if (activeFile?.type === 'note' && activeFile.id === note.id) {
      const nextNote = notes.find(n => n.id !== note.id)
      if (nextNote) {
        setActiveFile(nextNote)
        updateLastSelectedFile(nextNote)
      } else {
        const nextFile = files.find(f => f.type === 'txt') || files[0] || null
        setActiveFile(nextFile)
      }
    }
  }

  const updateNoteContent = (content) => {
    if (!activeFile || activeFile.type !== 'note') return
    setNotes(prev => {
      const next = prev.map(note => note.id === activeFile.id ? { ...note, content } : note)
      saveNotesToStorage(next)
      return next
    })
    setActiveFile(prev => prev && prev.type === 'note' ? { ...prev, content } : prev)
  }

  const handleExpandAll = () => treeRef.current?.openAll()
  const handleCollapseAll = () => treeRef.current?.closeAll()

  const activeTree = useMemo(() => {
    if (!activeFile || activeFile.type !== 'txt') return []
    return activeFile.tree ?? []
  }, [activeFile])

  const currentFileMarks = useMemo(() => {
    if (!activeFile) return []
    return pdfMarks[activeFile.fname] || []
  }, [activeFile, pdfMarks])

  const pdfViewerUrl = useMemo(() => {
    if (!activeFile || activeFile.type !== 'pdf') return ''
    const baseUrl = activeFile.pdfUrl || ''
    const params = []
    if (pdfPage && Number(pdfPage) > 0) {
      params.push(`page=${encodeURIComponent(Number(pdfPage))}`)
    }
    if (pdfSearch.trim()) {
      params.push(`search=${encodeURIComponent(pdfSearch.trim())}`)
    }
    return params.length ? `${baseUrl}#${params.join('&')}` : baseUrl
  }, [activeFile, pdfSearch, pdfPage])

  useEffect(() => {
    if (!activeFile || activeFile.type !== 'pdf') {
      setPdfDoc(null)
      setPdfTextPages([])
      setPdfSearchResults({ total: 0, pages: [] })
      setPdfMatchIndex(-1)
      setPdfPageViewports({})
      return
    }

    let cancelled = false
    async function loadPdfTextPages() {
      try {
        const loadingTask = getDocument(activeFile.pdfUrl)
        const pdf = await loadingTask.promise
        if (cancelled) {
          pdf.destroy?.()
          return
        }
        const pages = []
        for (let pageNum = 1; pageNum <= pdf.numPages; pageNum += 1) {
          const page = await pdf.getPage(pageNum)
          const content = await page.getTextContent()
          const text = content.items.map(item => item.str).join(' ')
          pages.push({ page: pageNum, text, items: content.items })
        }
        if (cancelled) {
          pdf.destroy?.()
          return
        }
        setPdfDoc(pdf)
        setPdfTotalPages(pdf.numPages)
        setPdfTextPages(pages)
      } catch (e) {
        console.warn('Could not load PDF text for search:', e)
        if (!cancelled) {
          setPdfDoc(null)
          setPdfTextPages([])
          setPdfSearchResults({ total: 0, pages: [] })
          setPdfMatchIndex(-1)
          setPdfPageViewports({})
        }
      }
    }

    loadPdfTextPages()
    return () => {
      cancelled = true
    }
  }, [activeFile])

  useEffect(() => {
    if (!activeFile || activeFile.type !== 'pdf' || !pdfSearch.trim() || pdfTextPages.length === 0) {
      setPdfSearchResults({ total: 0, pages: [] })
      setPdfMatchIndex(-1)
      return
    }

    const term = pdfSearch.trim().toLowerCase()
    const pages = []
    let total = 0

    pdfTextPages.forEach((pageInfo) => {
      const normalized = pageInfo.text.toLowerCase()
      let count = 0
      let pos = normalized.indexOf(term)
      while (pos !== -1) {
        count += 1
        pos = normalized.indexOf(term, pos + term.length)
      }
      if (count > 0) {
        pages.push({ page: pageInfo.page, count })
        total += count
      }
    })

    setPdfSearchResults({ total, pages })
    setPdfMatchIndex(total > 0 ? 0 : -1)
  }, [activeFile, pdfSearch, pdfTextPages])

  const getPdfMatchPage = (matchIndex) => {
    if (!pdfSearchResults.total || matchIndex < 0) return pdfPage
    let cumulative = 0
    for (const page of pdfSearchResults.pages) {
      if (matchIndex < cumulative + page.count) {
        return page.page
      }
      cumulative += page.count
    }
    return pdfSearchResults.pages[0]?.page || pdfPage
  }

  const getPdfMatchIndexOnPage = (globalMatchIndex) => {
    if (!pdfSearchResults.total || globalMatchIndex < 0) return -1
    let cumulative = 0
    for (const page of pdfSearchResults.pages) {
      if (globalMatchIndex < cumulative + page.count) {
        return globalMatchIndex - cumulative
      }
      cumulative += page.count
    }
    return -1
  }

  const goToPdfMatch = (delta) => {
    if (!pdfSearchResults.total) return
    const nextIndex = (pdfMatchIndex + delta + pdfSearchResults.total) % pdfSearchResults.total
    const targetPage = getPdfMatchPage(nextIndex)
    setPdfMatchIndex(nextIndex)
    setPdfPage(targetPage)
  }

  const prevPdfMatch = () => goToPdfMatch(-1)
  const nextPdfMatch = () => goToPdfMatch(1)

  const goPdfPage = (delta) => {
    if (!pdfDoc) return
    const current = Number(pdfPage) || 1
    const total = pdfTotalPages || pdfDoc.numPages || 1
    const next = Math.max(1, Math.min(total, current + delta))
    if (next !== current) {
      setPdfPage(next)
    }
  }

  const prevPdfPage = () => goPdfPage(-1)
  const nextPdfPage = () => goPdfPage(1)

  const currentPdfMatchPage = pdfMatchIndex >= 0 ? getPdfMatchPage(pdfMatchIndex) : null

  const pdfPageHighlights = useMemo(() => {
    if (!pdfSearch.trim() || !pdfTextPages.length) return {}
    const term = pdfSearch.trim().toLowerCase()
    return pdfTextPages.reduce((map, pageInfo) => {
      const viewport = pdfPageViewports[pageInfo.page]
      if (!viewport) return map
      const matches = pageInfo.items.reduce((matchesForPage, item, index) => {
        const text = String(item.str || '')
        const normalized = text.toLowerCase()
        if (!normalized.includes(term)) return matchesForPage
        const x = item.transform?.[4] || 0
        const y = item.transform?.[5] || 0
        const width = item.width || 0
        const height = item.height || 0
        const rect = viewport.convertToViewportRectangle([x, y, x + width, y + height])
        const left = Math.min(rect[0], rect[2])
        const top = Math.min(rect[1], rect[3])
        const w = Math.abs(rect[2] - rect[0])
        const h = Math.abs(rect[3] - rect[1])
        if (w <= 0 || h <= 0) return matchesForPage
        matchesForPage.push({ left, top, width: w, height: h, key: `${pageInfo.page}-${index}` })
        return matchesForPage
      }, [])
      if (matches.length) {
        map[pageInfo.page] = matches
      }
      return map
    }, {})
  }, [pdfSearch, pdfPageViewports, pdfTextPages])

  useEffect(() => {
    if (pdfMatchIndex >= 0 && pdfSearchResults.total > 0) {
      const page = getPdfMatchPage(pdfMatchIndex)
      setPdfPage(page)
    }
  }, [pdfMatchIndex, pdfSearchResults])

  useEffect(() => {
    if (!pdfDoc || !activeFile || activeFile.type !== 'pdf') return
    const pageNumber = Number(pdfPage) || 1
    if (pageNumber >= 1 && pageNumber <= (pdfTotalPages || pdfDoc.numPages)) {
      scrollToPdfPage(pageNumber)
    }
  }, [pdfPage, pdfDoc, pdfTotalPages, activeFile, scrollToPdfPage])

  useEffect(() => {
    if (!pdfDoc || !activeFile || activeFile.type !== 'pdf') {
      return
    }

    let cancelled = false
    async function renderPdfPages() {
      try {
        const viewports = {}
        const renderTasks = []
        const total = pdfTotalPages || pdfDoc.numPages

        for (let pageNum = 1; pageNum <= total; pageNum += 1) {
          const page = await pdfDoc.getPage(pageNum)
          const viewport = page.getViewport({ scale: pdfScale })
          viewports[pageNum] = viewport

          const canvas = pdfCanvasRefs.current[pageNum]
          if (!canvas) continue

          const context = canvas.getContext('2d')
          const devicePixelRatio = window.devicePixelRatio || 1
          canvas.width = Math.floor(viewport.width * devicePixelRatio)
          canvas.height = Math.floor(viewport.height * devicePixelRatio)
          canvas.style.width = `${viewport.width}px`
          canvas.style.height = `${viewport.height}px`
          context.setTransform(devicePixelRatio, 0, 0, devicePixelRatio, 0, 0)
          
          renderTasks.push(page.render({ canvasContext: context, viewport }).promise)
        }

        await Promise.all(renderTasks)
        if (cancelled) return
        setPdfPageViewports(viewports)
      } catch (e) {
        console.warn('Failed to render PDF pages:', e)
      }
    }

    renderPdfPages()
    return () => {
      cancelled = true
    }
  }, [pdfDoc, pdfScale, pdfTotalPages, activeFile])

  const handleAddPdfMark = () => {
    if (!activeFile || activeFile.type !== 'pdf') return
    const pageNumber = Number(pdfMarkPage) || Number(pdfPage) || 1
    if (pageNumber < 1 || pageNumber > (pdfTotalPages || 1)) return
    const mark = {
      id: `${Date.now()}`,
      page: pageNumber,
      line: pdfMarkLine.trim(),
      note: pdfMarkNote.trim(),
      created: new Date().toLocaleString(),
    }
    setPdfMarks(prev => ({
      ...prev,
      [activeFile.fname]: [...(prev[activeFile.fname] || []), mark],
    }))
    setPdfMarkPage('')
    setPdfMarkLine('')
    setPdfMarkNote('')
  }

  const handleRemovePdfMark = markId => {
    if (!activeFile || activeFile.type !== 'pdf') return
    setPdfMarks(prev => ({
      ...prev,
      [activeFile.fname]: (prev[activeFile.fname] || []).filter(mark => mark.id !== markId),
    }))
  }

  const handleGoToPdfMark = (markPage) => {
    setPdfPage(markPage)
    setTimeout(() => scrollToPdfPage(markPage), 50)
  }

  // Filter files based on file search
  const filteredFiles = useMemo(() => {
    if (fileListTab === 'notes') {
      const list = notes
      if (!fileSearch.trim()) return list
      return list.filter(f => fileSearchMatch(f.name, fileSearch))
    }
    const list = files.filter(f => f.type === fileListTab)
    if (!fileSearch.trim()) return list
    return list.filter(f => fileSearchMatch(f.name, fileSearch))
  }, [files, notes, fileSearch, fileListTab])

  const handleFileListTabChange = (tab) => {
    if (!['txt','pdf','notes','other'].includes(tab)) return
    setFileListTab(tab)
    if (activeFile?.type !== tab) {
      let preferred = null
      if (tab === 'notes') {
        preferred = notes.find(f => f.fname === lastSelectedFiles.notes) || notes[0]
      } else {
        preferred = files.find(f => f.type === tab && f.fname === lastSelectedFiles[tab]) || files.find(f => f.type === tab)
      }
      if (preferred) {
        setActiveFile(preferred)
        setSearch('')
        setSearchComment('')
        setSelectedNodeId(null)
        setSelectedNodeName('')
        if (tab === 'txt') setFileViewMode('tree')
        if (tab === 'pdf') setFileViewMode('pdf')
      }
    }
  }

  // Build a flat list of all nodes with their tree indices for positioning
  const flatNodeList = useMemo(() => {
    const result = []
    function walk(nodes, depth = 0) {
      for (const node of nodes) {
        result.push({ node, depth, index: result.length })
        if (node.children?.length) walk(node.children, depth + 1)
      }
    }
    walk(activeTree)
    return result
  }, [activeTree])

  const commentItems = useMemo(() => {
    if (!activeFile) return []
    const items = []
    for (const { node, depth, index } of flatNodeList) {
      const key = `${activeFile.fname}:${node.id}`
      const summary = comments[key]?.summary?.trim()
      if (summary) items.push({ node, depth, index, key, summary })
    }
    return items
  }, [activeFile, flatNodeList, comments])

  // Tree search match that supports name/type/structType and comment (summary+main)
  const treeSearchMatch = useCallback((node, term) => {
    const parts = String(term || '').split('||')
    const nameTerm = normalizeString(parts[0] || '').trim()
    const commentTerm = normalizeString(parts[1] || '').trim()

    if (commentTerm && activeFile) {
      const nodeKey = `${activeFile.fname}:${node.data.id}`
      const c = comments[nodeKey]
      const text = `${c?.summary ?? ''} ${c?.main ?? ''}`
      if (normalizeString(text).includes(commentTerm)) return true
    }

    if (nameTerm) {
      if (normalizeString(node.data.name).includes(nameTerm)) return true
      if (normalizeString(node.data.type || '').includes(nameTerm)) return true
      if (normalizeString(node.data.structType || '').includes(nameTerm)) return true
    }

    return false
  }, [comments, activeFile])

  // Matches for search navigation (name or comment search)
  const [matchCursor, setMatchCursor] = useState(0)
  const matchedNodes = useMemo(() => {
    if (!activeFile) return []
    const results = []
    const termName = normalizeString(search).trim()
    const termComment = normalizeString(searchComment).trim()
    for (const { node } of flatNodeList) {
      const nodeKey = `${activeFile.fname}:${node.id}`
      if (termComment) {
        const c = comments[nodeKey]
        const text = `${c?.summary ?? ''} ${c?.main ?? ''}`
        if (normalizeString(text).includes(termComment)) results.push(nodeKey)
      } else if (termName) {
        if (normalizeString(node.name).includes(termName)) results.push(nodeKey)
      }
    }
    return results
  }, [activeFile, flatNodeList, comments, search, searchComment])

  // explicit sets for highlighting: name matches and comment matches
  const matchedNameSet = useMemo(() => {
    const s = new Set()
    const term = normalizeString(search || '').trim()
    if (!term) return s
    for (const { node } of flatNodeList) {
      const key = `${activeFile?.fname}:${node.id}`
      if (normalizeString(node.name).includes(term) || normalizeString(node.type || '').includes(term) || normalizeString(node.structType || '').includes(term)) s.add(key)
    }
    return s
  }, [flatNodeList, search, activeFile])

  const matchedCommentSet = useMemo(() => {
    const s = new Set()
    const term = normalizeString(searchComment || '').trim()
    if (!term) return s
    for (const { node } of flatNodeList) {
      const key = `${activeFile?.fname}:${node.id}`
      const c = comments[key]
      const text = `${c?.summary ?? ''} ${c?.main ?? ''}`
      if (normalizeString(text).includes(term)) s.add(key)
    }
    return s
  }, [flatNodeList, searchComment, comments, activeFile])

  const scrollSelectedIntoView = useCallback(() => {
    if (!selectedNodeId) return
    const nodeId = `node-${String(selectedNodeId).replace(/[:\/\s]/g, '-')}`
    const el = document.getElementById(nodeId)
    if (el) {
      const treeContainer = document.querySelector('.tree-container')
      if (treeContainer) {
        const rect = el.getBoundingClientRect()
        const crect = treeContainer.getBoundingClientRect()
        const offset = rect.top - crect.top - (crect.height / 2) + (rect.height / 2)
        treeContainer.scrollBy({ top: offset, behavior: 'smooth' })
      } else {
        el.scrollIntoView({ block: 'center', behavior: 'smooth' })
      }
    }

    const overlay = document.querySelector('.comment-overlay')
    const selectedOverlayItem = overlay?.querySelector('.comment-overlay-item.overlay-selected')
    if (overlay && selectedOverlayItem) {
      const rect = selectedOverlayItem.getBoundingClientRect()
      const crect = overlay.getBoundingClientRect()
      const offset = rect.top - crect.top - (crect.height / 2) + (rect.height / 2)
      overlay.scrollBy({ top: offset, behavior: 'smooth' })
    }
  }, [selectedNodeId])

  useEffect(() => {
    if (!selectedNodeId) return
    const timer = window.setTimeout(scrollSelectedIntoView, 20)
    return () => window.clearTimeout(timer)
  }, [selectedNodeId, scrollSelectedIntoView])

  const goToMatch = (idx) => {
    if (!matchedNodes.length) return
    const i = ((idx % matchedNodes.length) + matchedNodes.length) % matchedNodes.length
    setMatchCursor(i)
    const nodeKey = matchedNodes[i]
    setSelectedNodeId(nodeKey)
    setSelectedNodeName(comments[nodeKey]?.summary ?? '')
  }

  const nextMatch = () => goToMatch(matchCursor + 1)
  const prevMatch = () => goToMatch(matchCursor - 1)

  // --- Other (text) search & mark utilities ---
  const addOtherHistoryTerm = (term) => {
    const normalized = String(term || '').trim()
    if (!normalized) return
    setOtherSearchHistory(prev => {
      const existing = prev.filter(item => item !== normalized)
      const next = [normalized, ...existing].slice(0, 20)
      try { sessionStorage.setItem('asn_other_search_history', JSON.stringify(next)) } catch (e) {}
      return next
    })
    setOtherHistoryIndex(0)
  }

  // load persisted other search history on mount
  useEffect(() => {
    try {
      const raw = sessionStorage.getItem('asn_other_search_history')
      if (raw) {
        const parsed = JSON.parse(raw)
        if (Array.isArray(parsed) && parsed.length) {
          setOtherSearchHistory(parsed.slice(0, 20))
          setOtherHistoryIndex(0)
        }
      }
    } catch (e) {
      // ignore
    }
  }, [])

  const handleOtherSearchSubmit = () => {
    const term = String(otherSearch || '').trim()
    if (!term) return
    setOtherSearch(term)
    addOtherHistoryTerm(term)
  }

  useEffect(() => {
    if (!otherFileContent || !otherSearch.trim()) {
      setOtherSearchResults({ total: 0, lines: [] })
      setOtherMatchIndex(-1)
      return
    }
    const term = otherSearch.trim().toLowerCase()
    const lines = otherFileContent.split(/\r?\n/)
    const resLines = []
    let total = 0
    lines.forEach((ln, idx) => {
      const normalized = ln.toLowerCase()
      let count = 0
      let pos = normalized.indexOf(term)
      while (pos !== -1) {
        count += 1
        pos = normalized.indexOf(term, pos + term.length)
      }
      if (count > 0) {
        resLines.push({ line: idx + 1, count, text: ln })
        total += count
      }
    })
    setOtherSearchResults({ total, lines: resLines })
    setOtherMatchIndex(total > 0 ? 0 : -1)
  }, [otherFileContent, otherSearch])

  const getOtherMatchLine = (matchIndex) => {
    if (!otherSearchResults.total || matchIndex < 0) return 1
    let cumulative = 0
    for (const entry of otherSearchResults.lines) {
      if (matchIndex < cumulative + entry.count) return entry.line
      cumulative += entry.count
    }
    return otherSearchResults.lines[0]?.line || 1
  }

  const goToOtherMatch = (delta) => {
    if (!otherSearchResults.total) return
    const nextIndex = (otherMatchIndex + delta + otherSearchResults.total) % otherSearchResults.total
    const targetLine = getOtherMatchLine(nextIndex)
    setOtherMatchIndex(nextIndex)
    scrollToOtherLine(targetLine)
  }

  const prevOtherMatch = () => goToOtherMatch(-1)
  const nextOtherMatch = () => goToOtherMatch(1)

  useEffect(() => {
    if (otherMatchIndex >= 0 && otherSearchResults.total > 0) {
      const line = getOtherMatchLine(otherMatchIndex)
      scrollToOtherLine(line)
    }
  }, [otherMatchIndex, otherSearchResults])

  const scrollToOtherLine = (lineNumber) => {
    const target = document.querySelector(`.other-viewer-wrap [data-line="${Number(lineNumber)}"]`)
    if (target && typeof target.scrollIntoView === 'function') {
      target.scrollIntoView({ behavior: 'smooth', block: 'center' })
    } else {
      const el = document.querySelector('.other-viewer-wrap .code-view, .other-viewer-wrap .note-editor')
      if (!el) return
      const style = window.getComputedStyle(el)
      const lineHeight = parseFloat(style.lineHeight) || parseFloat(style.fontSize) * 1.45 || 18
      el.scrollTop = Math.max(0, (Number(lineNumber || 1) - 1) * lineHeight)
    }
  }

  const handleAddOtherMark = (lineParam) => {
    if (!activeFile || activeFile.type !== 'other') return
    // prefer explicit param, then DOM input value (to avoid stale React state), then state, then last-click ref
    const domInput = typeof document !== 'undefined' ? document.getElementById('other-mark-line-input') : null
    const domVal = domInput ? String(domInput.value || '').trim() : ''

    // If user typed something, validate it as a positive integer and within file bounds
    const totalLines = (otherFileContent || '').split(/\r?\n/).length || 0
    if (domVal) {
      const parsed = Number(domVal)
      if (!Number.isInteger(parsed) || parsed < 1) {
        try { window.alert('Invalid line number. Please enter a positive integer.'); } catch (e) {}
        return
      }
      if (totalLines && parsed > totalLines) {
        try { window.alert(`Line ${parsed} is out of range (1–${totalLines}).`); } catch (e) {}
        return
      }
      var lineNumber = parsed
    } else {
      let lineNumber = Number(lineParam || otherMarkLine) || 0
      // If not provided, accept last clicked line only if it was recent (3s)
      if (!lineNumber) {
        const last = lastClickedOtherLineRef.current
        if (last && last.line && last.ts && (Date.now() - last.ts) <= 3000) {
          lineNumber = Number(last.line) || 0
        }
      }
      if (!lineNumber) {
        try { window.alert('No line specified. Click a line in the viewer or type a line number in the Mark input.'); } catch (e) {}
        return
      }
    }
    const mark = {
      id: `${Date.now()}`,
      line: lineNumber,
      note: otherMarkNote.trim(),
      created: new Date().toLocaleString(),
    }
    setPdfMarks(prev => ({
      ...prev,
      [activeFile.fname]: [...(prev[activeFile.fname] || []), mark],
    }))
    setOtherMarkLine('')
    setOtherMarkNote('')
    lastClickedOtherLineRef.current = null
  }

  const handleGoToMark = (mark) => {
    if (!mark) return
    if (mark.page) {
      setPdfPage(mark.page)
      setTimeout(() => scrollToPdfPage(mark.page), 50)
    } else if (mark.line) {
      scrollToOtherLine(mark.line)
    }
  }

  const handleRemoveMark = (markId) => {
    if (!activeFile) return
    setPdfMarks(prev => ({
      ...prev,
      [activeFile.fname]: (prev[activeFile.fname] || []).filter(mark => mark.id !== markId),
    }))
  }

  return (
    <div className="app">
      {copyMessage && (
        <div className="copy-toast" role="status">{copyMessage}</div>
      )}
      {/* ── Sidebar ── */}
      <aside className="sidebar" style={{ width: `${sidebarWidth}px`, minWidth: '220px' }}>
        <div className="sidebar-header">
          <div className="logo">
            <span className="logo-icon">⬡</span>
            <span className="logo-text">ASN<span className="logo-accent">Tree</span></span>
          </div>
          {/* <div className="logo-sub">Protocol Explorer  dungnm26</div> */}
        <div className="logo-sub">
          Protocol Explorer
          <span className="badge-user">dungnm26</span>
        </div>
        </div>
        <div
          className="sidebar-resize-handle"
          onMouseDown={() => setIsDraggingSidebar(true)}
          title="Drag to resize files panel"
        />

        <div className="sidebar-section-label">FILES</div>

        <div className="file-filter-tabs">
          <button
            type="button"
            className={`file-filter-tab ${fileListTab === 'txt' ? 'active' : ''}`}
            onClick={() => handleFileListTabChange('txt')}
          >
            Tree
          </button>
          <button
            type="button"
            className={`file-filter-tab ${fileListTab === 'pdf' ? 'active' : ''}`}
            onClick={() => handleFileListTabChange('pdf')}
          >
            PDF
          </button>
          <button
            type="button"
            className={`file-filter-tab ${fileListTab === 'other' ? 'active' : ''}`}
            onClick={() => handleFileListTabChange('other')}
          >
            Other
          </button>
          <button
            type="button"
            className={`file-filter-tab ${fileListTab === 'notes' ? 'active' : ''}`}
            onClick={() => handleFileListTabChange('notes')}
          >
            Notes
          </button>
        </div>

        {fileListTab === 'notes' && (
          <div className="sidebar-actions">
            <button className="btn-copy" type="button" onClick={createNewNote}>
              + New note
            </button>
          </div>
        )}

        <div className="file-search-wrap">
          <span className="search-icon">⌕</span>
          <input
            className="file-search-input"
            placeholder="Search files..."
            value={fileSearch}
            onChange={e => setFileSearch(e.target.value)}
          />
          {fileSearch && (
            <button className="search-clear" onClick={() => setFileSearch('')}>✕</button>
          )}
        </div>
        
        <nav className="file-list">
          {filteredFiles.map(f => (
            <button
              key={f.fname}
              className={`file-item ${activeFile?.fname === f.fname ? 'active' : ''}`}
              onClick={() => {
                setActiveFile(f)
                setSearch('')
                setSelectedNodeId(null)
                setSelectedNodeName('')
              }}
            >
              <span className="file-icon">
                {f.type === 'pdf' ? '📕' : f.type === 'note' ? '📝' : f.type === 'other' ? '📁' : '📄'}
              </span>
              <span className="file-name">{f.name}</span>
            </button>
          ))}
        </nav>

        {activeFile?.type === 'pdf' && (
          <>
            <div className="sidebar-section-label">VIEW</div>
            <nav className="view-list">
              <button
                className={`view-item ${fileViewMode === 'tree' ? 'active' : ''}`}
                type="button"
                onClick={() => setFileViewMode('tree')}
              >
                Tree view
              </button>
              <button
                className={`view-item ${fileViewMode === 'pdf' ? 'active' : ''}`}
                type="button"
                onClick={() => setFileViewMode('pdf')}
              >
                PDF view
              </button>
            </nav>
          </>
        )}

        <div className="sidebar-footer">
          <div className="stat-row">
            <span className="stat-label">Nodes</span>
            <span className="stat-value">{totalNodes}</span>
          </div>
          <div className="stat-row">
            <span className="stat-label">Files</span>
            <span className="stat-value">{fileSearch ? `${filteredFiles.length}/${fileListTab === 'notes' ? notes.length : files.length}` : (fileListTab === 'notes' ? notes.length : files.length)}</span>
          </div>
        </div>
      </aside>

      {/* ── Main panel ── */}
      <main className="main">
        {/* Toolbar */}
        {activeFile?.type === 'txt' && (
        <div className="toolbar">
          <div className="toolbar-left">
            <span className="breadcrumb">
              {activeFile ? (
                <>
                  <span className="bc-root">{activeFile.type === 'pdf' ? 'pdf' : activeFile.type === 'note' ? 'notes' : 'data'}</span>
                  <span className="bc-sep">/</span>
                  <span className="bc-file">{activeFile.fname}</span>
                </>
              ) : 'No file selected'}
            </span>
          </div>

          <div className="toolbar-center">
            <div className="search-wrap">
              <span className="search-icon">⌕</span>
              <input
                className="search-input"
                placeholder={activeFile?.type === 'pdf' ? 'PDF selected – tree search disabled' : activeFile?.type === 'note' ? 'Note selected – search disabled' : 'Search nodes...'}
                value={search}
                disabled={activeFile?.type === 'pdf' || activeFile?.type === 'note'}
                onChange={e => setSearch(e.target.value)}
              />
              {search && (
                <button className="search-clear" onClick={() => setSearch('')}>✕</button>
              )}
            </div>
            <div className="search-wrap comment-search">
              <span className="search-icon">💬</span>
              <input
                className="search-input"
                placeholder={activeFile?.type === 'pdf' || activeFile?.type === 'note' ? 'Comment search disabled' : 'Search comments...'}
                value={searchComment}
                disabled={activeFile?.type === 'pdf' || activeFile?.type === 'note'}
                onChange={e => setSearchComment(e.target.value)}
              />
              {searchComment && (
                <button className="search-clear" onClick={() => setSearchComment('')}>✕</button>
              )}
            </div>
          </div>

          <div className="toolbar-right">
            <div className="search-nav">
              <button className="nav-button" onClick={prevMatch} title="Previous match">◀</button>
              <span className="match-badge">{matchedNodes.length ? `${matchCursor + 1}/${matchedNodes.length}` : '0/0'}</span>
              <button className="nav-button" onClick={nextMatch} title="Next match">▶</button>
            </div>
            {isStructuredFile && (
              <button
                className={`btn-tool ${displayMode === 'type' ? 'active' : ''}`}
                type="button"
                onClick={() => setDisplayMode(displayMode === 'varname' ? 'type' : 'varname')}
                title={displayMode === 'varname' ? 'Show type with presence' : 'Show variable name'}
              >
                <span>{displayMode === 'type' ? '🏷' : '📝'}</span>
                {displayMode === 'varname' ? 'Type view' : 'Name view'}
              </button>
            )}
            <button
              className={`btn-tool ${showAllComments ? 'active' : ''}`}
              type="button"
              onClick={() => setShowAllComments(prev => !prev)}
              title="Show or hide all summary boxes"
            >
              <span>{showAllComments ? '☑' : '☐'}</span>
              {showAllComments ? 'Hide summaries' : 'Show summaries'}
            </button>
            <button
              className={`btn-tool ${compactComments ? 'active' : ''}`}
              type="button"
              onClick={() => setCompactComments(prev => !prev)}
              title={compactComments ? 'Show summaries at original positions' : 'Compact summaries together'}
            >
              <span>{compactComments ? '⬜' : '⬛'}</span>
              {compactComments ? 'Expanded Cmt' : 'Compact Cmt'}
            </button>
            <button className="btn-tool" onClick={handleExpandAll} title="Expand all">
              <span>⊞</span> Expand Tree
            </button>
            <button className="btn-tool" onClick={handleCollapseAll} title="Collapse all">
              <span>⊟</span> Collapse Tree
            </button>
          </div>
        </div>
        )}

        <div className="main-content">
          <div className="tree-area">
            {/* Tree area */}
            <div 
              className="tree-container" 
              ref={containerRef}
              style={{ paddingRight: (showAllComments && activeFile?.type === 'txt') ? `${overlayWidth + 8}px` : '0' }}
            >
              {loading ? (
                <div className="loading">
                  <div className="loading-spinner" />
                  <span>Loading ASN data...</span>
                </div>
              ) : !activeFile ? (
                <div className="empty">Select a file to view</div>
              ) : activeFile.type === 'pdf' ? (
                fileViewMode === 'pdf' ? (
                  <div className="pdf-canvas-area">
                    <div className="pdf-view-controls">
                      <div className="pdf-nav-group">
                        <button className="btn-copy" type="button" onClick={prevPdfPage} disabled={Number(pdfPage) <= 1} title="Previous page">
                          ◀ Prev
                        </button>
                        <div className="pdf-page-jumper">
                          <input 
                            type="number" 
                            min="1" 
                            max={pdfTotalPages || 1}
                            value={Number(pdfPage) || 1}
                            onChange={(e) => {
                              const val = Math.max(1, Math.min(pdfTotalPages || 1, parseInt(e.target.value) || 1))
                              setPdfPage(val)
                              setTimeout(() => scrollToPdfPage(val), 50)
                            }}
                            className="pdf-page-input"
                          />
                          <span className="pdf-page-total">/ {pdfTotalPages || '...'}</span>
                        </div>
                        <button className="btn-copy" type="button" onClick={nextPdfPage} disabled={pdfTotalPages && Number(pdfPage) >= pdfTotalPages} title="Next page">
                          Next ▶
                        </button>
                      </div>

                      <div className="pdf-search-box">
                        <input
                          value={pdfSearch}
                          onChange={e => setPdfSearch(e.target.value)}
                          onKeyDown={handlePdfSearchKeyDown}
                          placeholder="🔎 Search pages..."
                          className="pdf-search-input"
                        />
                        <button className="btn-copy" type="button" onClick={handlePdfSearchSubmit} title="Search">
                          🔍
                        </button>
                        <span className="pdf-search-count">
                          {pdfSearchResults.total ? `${pdfMatchIndex + 1}/${pdfSearchResults.total}` : '0'}
                        </span>
                        <button className="btn-copy" type="button" onClick={prevPdfMatch} disabled={!pdfSearchResults.total} title="Previous match">
                          ◀
                        </button>
                        <button className="btn-copy" type="button" onClick={nextPdfMatch} disabled={!pdfSearchResults.total} title="Next match">
                          ▶
                        </button>
                        <button className="btn-copy" type="button" onClick={() => setPdfSearch('')} title="Clear">
                          ✕
                        </button>
                      </div>

                      <div className="pdf-zoom-group">
                        <button className="btn-copy" type="button" onClick={() => setPdfScale(0.6)} title="Fit to width">
                          📄 Fit
                        </button>
                        <button className="btn-copy" type="button" onClick={() => setPdfScale(prev => Math.max(0.5, Math.round((prev - 0.1) * 10) / 10))} title="Zoom out">
                          −
                        </button>
                        <span className="pdf-zoom-display">{Math.round(pdfScale * 100)}%</span>
                        <button className="btn-copy" type="button" onClick={() => setPdfScale(prev => Math.min(3, Math.round((prev + 0.1) * 10) / 10))} title="Zoom in">
                          +
                        </button>
                        <button className="btn-copy" type="button" onClick={() => setPdfScale(1)} title="Reset zoom">
                          Reset
                        </button>
                      </div>
                    </div>
                    {(pdfTextPages || []).map(pageInfo => {
                      const viewport = pdfPageViewports[pageInfo.page]
                      const highlights = pdfPageHighlights[pageInfo.page] || []
                      const currentMatchPage = pdfMatchIndex >= 0 ? getPdfMatchPage(pdfMatchIndex) : null
                      const currentMatchIndexOnPage = currentMatchPage === pageInfo.page ? getPdfMatchIndexOnPage(pdfMatchIndex) : -1
                      return (
                        <div
                          key={pageInfo.page}
                          className="pdf-page"
                          ref={el => { pdfPageRefs.current[pageInfo.page] = el }}
                        >
                          <div className="pdf-page-header">Page {pageInfo.page}</div>
                          <div className="pdf-page-canvas" style={{ width: viewport?.width || 800, height: viewport?.height || 1000 }}>
                            <canvas ref={el => { pdfCanvasRefs.current[pageInfo.page] = el }} className="pdf-canvas" />
                            <div className="pdf-text-layer" style={{ width: viewport?.width || 800, height: viewport?.height || 1000 }}>
                              {highlights.map((item, idx) => {
                                const isCurrentMatch = idx === currentMatchIndexOnPage
                                return (
                                  <div
                                    key={item.key}
                                    className={`pdf-highlight ${isCurrentMatch ? 'pdf-highlight-current' : ''}`}
                                    style={{
                                      left: item.left,
                                      top: item.top,
                                      width: item.width,
                                      height: item.height,
                                    }}
                                  />
                                )
                              })}
                            </div>
                          </div>
                        </div>
                      )
                    })}
                  </div>
                ) : activeTree.length ? (
                  <Tree
                    ref={treeRef}
                    data={activeTree}
                    openByDefault={false}
                    width="100%"
                    height={treeHeight}
                    indent={28}
                    rowHeight={28}
                    searchTerm={((search || '').trim() || (searchComment || '').trim()) ? `${search}||${searchComment}` : ''}
                    searchMatch={treeSearchMatch}
                    disableDrag
                    disableDrop
                  >
                    {props => {
                      const nodeKey = `${activeFile?.fname}:${props.node.data.id}`
                      const rowIndex = flatNodeList.findIndex(x => x.node.id === props.node.data.id)
                      const matchedName = matchedNameSet.has(nodeKey)
                      const matchedComment = matchedCommentSet.has(nodeKey)
                      const isMatched = matchedName || matchedComment || treeSearchMatch(props.node, `${search}||${searchComment}`)
                      return (
                        <Node
                          {...props}
                          nodeKey={nodeKey}
                          rowIndex={rowIndex}
                          isMatched={isMatched}
                          matchedName={matchedName}
                          matchedComment={matchedComment}
                          selected={selectedNodeId === nodeKey}
                          comment={comments[nodeKey]}
                          showAllComments={showAllComments}
                          displayMode={displayMode}
                          onSelect={(id, name) => handleSelectNode(`${activeFile?.fname}:${id}`, name)}
                        />
                      )
                    }}
                  </Tree>
                ) : (
                  <div className="empty">No tree data available for this PDF.</div>
                )
              ) : activeFile.type === 'other' ? (
                <div className="other-viewer-wrap">
                  <div className="note-editor-header">
                    <div>
                      <div className="note-editor-name">{activeFile.name}</div>
                      <div className="note-editor-sub">File: {activeFile.fname}</div>
                    </div>
                    <div className="note-editor-actions">
                      <button className="btn-copy" type="button" onClick={() => copyText(otherFileContent, 'Content')}>
                        Copy
                      </button>
                      <button className="btn-copy" type="button" onClick={() => { if (activeFile) setActiveFile({ ...activeFile }) }}>
                        Refresh
                      </button>
                    </div>
                  </div>
                  {otherLoading ? (
                    <div className="loading">
                      <div className="loading-spinner" />
                      <span>Loading file...</span>
                    </div>
                  ) : ((/\.(?:c|h)$/i.test(activeFile.fname)) ? (
                      <div className="code-view">
                        {(otherFileContent || '').split(/\r?\n/).map((ln, idx) => {
                          const lineNum = idx + 1
                          const term = (otherSearch || '').trim()
                          let html = ''
                          if (!term) {
                            html = highlightLine(ln)
                          } else {
                            const esc = s => String(s || '').replace(/&/g, '&amp;').replace(/</g, '&lt;').replace(/>/g, '&gt;')
                            const re = new RegExp(term.replace(/[.*+?^${}()|[\]\\]/g, '\\$&'), 'gi')
                            // compute cumulative matches before this line
                            let cumulative = 0
                            for (const e of (otherSearchResults.lines || [])) {
                              if (e.line < lineNum) cumulative += e.count
                            }
                            let localIndex = 0
                            let lastIndex = 0
                            let m
                            re.lastIndex = 0
                            const parts = []
                            while ((m = re.exec(ln)) !== null) {
                              const start = m.index
                              const matchText = m[0]
                              if (start > lastIndex) {
                                parts.push(highlightLine(ln.slice(lastIndex, start)))
                              }
                              const globalIndex = cumulative + localIndex
                              const isCurrent = globalIndex === otherMatchIndex
                              const cls = isCurrent ? 'code-search-current' : 'code-search-highlight'
                              parts.push(`<span class="${cls}">${esc(matchText)}</span>`)
                              lastIndex = re.lastIndex
                              localIndex += 1
                              // avoid infinite loops
                              if (re.lastIndex === start) re.lastIndex++
                            }
                            if (lastIndex < ln.length) parts.push(highlightLine(ln.slice(lastIndex)))
                            html = parts.join('')
                          }
                          return (
                            <div
                              key={idx}
                              className={`code-line ${otherMatchIndex >= 0 && otherSearchResults.total ? (otherMatchIndex >= 0 ? (getOtherMatchLine(otherMatchIndex) === lineNum ? 'line-current' : '') : '') : ''}`}
                              data-line={lineNum}
                                onClick={() => { lastClickedOtherLineRef.current = { line: lineNum, ts: Date.now() }; setOtherMarkLine(String(lineNum)) }}
                              style={{ cursor: 'pointer' }}
                            >
                              <div className="code-line-number">{lineNum}</div>
                              <code className="code-line-content" dangerouslySetInnerHTML={{ __html: html }} />
                            </div>
                          )
                        })}
                      </div>
                    ) : (
                      <textarea
                        className="note-editor"
                        value={otherFileContent || ''}
                        readOnly
                        placeholder="File content"
                      />
                    ))}
                </div>
              ) : activeFile.type === 'note' ? (
                <div className="note-editor-wrap">
                  <div className="note-editor-header">
                    <div>
                      <div className="note-editor-name">{activeFile.name}</div>
                      <div className="note-editor-sub">Note file: {activeFile.fname}</div>
                    </div>
                    <div className="note-editor-actions">
                      <button className="btn-copy" type="button" onClick={() => renameNote(activeFile)}>
                        Rename
                      </button>
                      <button className="btn-copy" type="button" onClick={() => deleteNote(activeFile)}>
                        Delete
                      </button>
                    </div>
                  </div>
                  <textarea
                    className="note-editor"
                    autoFocus
                    value={activeFile.content || ''}
                    onChange={e => updateNoteContent(e.target.value)}
                    placeholder="Viết ghi chú ở đây..."
                  />
                </div>
              ) : (
                <Tree
                  ref={treeRef}
                  data={activeTree}
                  openByDefault={false}
                  width="100%"
                  height={treeHeight}
                  indent={28}
                  rowHeight={28}
                  searchTerm={((search || '').trim() || (searchComment || '').trim()) ? `${search}||${searchComment}` : ''}
                  searchMatch={treeSearchMatch}
                  disableDrag
                  disableDrop
                >
                  {props => {
                    const nodeKey = `${activeFile?.fname}:${props.node.data.id}`
                    const rowIndex = flatNodeList.findIndex(x => x.node.id === props.node.data.id)
                    const matchedName = matchedNameSet.has(nodeKey)
                    const matchedComment = matchedCommentSet.has(nodeKey)
                    const isMatched = matchedName || matchedComment || treeSearchMatch(props.node, `${search}||${searchComment}`)
                    return (
                      <Node
                        {...props}
                        nodeKey={nodeKey}
                        rowIndex={rowIndex}
                        isMatched={isMatched}
                        matchedName={matchedName}
                        matchedComment={matchedComment}
                        selected={selectedNodeId === nodeKey}
                        comment={comments[nodeKey]}
                        showAllComments={showAllComments}
                        displayMode={displayMode}
                        onSelect={(id, name) => handleSelectNode(`${activeFile?.fname}:${id}`, name)}
                      />
                    )
                  }}
                </Tree>
              )}
            </div>

            {/* Fixed comment overlay layer */}
            {showAllComments && activeFile?.type === 'txt' && (
              <div 
                className="comment-overlay"
                style={{ width: `${overlayWidth}px` }}
              >
                <div
                  className="comment-overlay-inner"
                  style={{ height: activeFile?.type === 'other' ? 'auto' : `${Math.max(200, commentItems.length * 28 + 8)}px` }}
                >
                  {activeFile?.type === 'txt' ? (
                    commentItems.map(({ node, index, depth, key, summary }, commentIndex) => {
                      const nodeKey = key
                      const structTypeValue = String(node.data?.structType || node.structType || '')
                      const isRecursive = structTypeValue.toUpperCase() === 'RECURSIVE'
                      const top = compactComments ? commentIndex * 28 + 8 : index * 28 + 8
                      const levelNumber = depth + 1
                      
                      return (
                        <div 
                          key={nodeKey} 
                          data-node-key={nodeKey}
                          className={`comment-overlay-item ${selectedNodeId === nodeKey ? 'overlay-selected' : ''} ${matchedCommentSet.has(nodeKey) ? 'overlay-matched' : ''}`}
                          style={{ top: `${top}px` }}
                          onClick={e => {
                            e.stopPropagation()
                            handleSelectNode(nodeKey, node.name)
                          }}
                        >
                          <span className={`overlay-level ${isRecursive ? 'recursive' : ''} level-${levelNumber}`}>
                            {isRecursive ? 'RECUR' : `L${levelNumber}`}
                          </span>
                          <button
                            className="overlay-comment-btn"
                            type="button"
                            onClick={e => {
                              e.stopPropagation()
                              handleSelectNode(nodeKey, node.name)
                            }}
                          >
                            ✎
                          </button>
                          <div className="comment-overlay-summary">{summary}</div>
                        </div>
                      )
                    })
                  ) : (
                    // other file content preview: clickable lines
                      (otherFileContent || '').split(/\r?\n/).slice(0, 500).map((ln, idx) => (
                      <div
                        key={`other-line-${idx+1}`}
                        className={`comment-overlay-item`}
                        style={{ position: 'relative', padding: '6px 8px', cursor: 'pointer' }}
                        onClick={e => { e.stopPropagation(); lastClickedOtherLineRef.current = { line: idx + 1, ts: Date.now() }; setOtherMarkLine(String(idx + 1)); scrollToOtherLine(idx + 1) }}
                      >
                        <span className={`overlay-level level-1`} style={{ minWidth: 36 }}>{idx + 1}</span>
                        <div className="comment-overlay-summary" style={{ overflow: 'hidden', textOverflow: 'ellipsis' }}>{ln.slice(0, 120)}</div>
                      </div>
                    ))
                  )}
                </div>
                <div 
                  className="overlay-resize-handle"
                  onMouseDown={() => setIsDraggingOverlay(true)}
                  title="Drag to resize comment overlay"
                />
              </div>
            )}

            {/* Status bar */}
            <div className="statusbar">
              <span className="status-item">
                <span className="status-dot active" />
                {activeFile ? activeFile.fname : '—'}
              </span>
              <span className="status-item">
                {totalNodes} nodes
              </span>
              {search && (
                <span className="status-item highlight">
                  Filtering: "{search}"
                </span>
              )}
              <span className="status-item muted">
                Click ▸ to expand · Click ▾ to collapse
              </span>
            </div>
          </div>

          {activeFile?.type !== 'note' && (
            <aside 
              className="comment-panel" 
              ref={panelRef}
              style={{ width: `${panelWidth}px` }}
            >
              <div 
                className="panel-resize-handle"
                onMouseDown={() => setIsDraggingPanel(true)}
                title="Drag to resize"
              />
              <div className="panel-header">
                  <div className="panel-title">
                    {activeFile?.type === 'pdf' && fileViewMode === 'pdf'
                      ? 'PDF search & marks'
                      : activeFile?.type === 'other'
                        ? 'Search & marks'
                        : 'Comment details'
                    }
                  </div>
                <div className="panel-sub">
                  {activeFile?.type === 'pdf' && fileViewMode === 'pdf'
                    ? 'Search inside the PDF viewer and add page/line markers.'
                    : activeFile?.type === 'other'
                      ? 'Search inside this file and add line markers.'
                      : 'Select a node to edit summary & content'
                  }
                  {syncStatus !== 'idle' && (
                    <span className={`sync-status ${syncStatus}`}>
                      {syncStatus === 'saving' ? '⏱ Saving...' : syncStatus === 'synced' ? '✓ Synced' : '⚠ Error'}
                    </span>
                  )}
                  {syncError && (
                    <div className="sync-error" title={syncError}>
                      {syncError}
                    </div>
                  )}
                </div>
              </div>

              {activeFile?.type === 'pdf' && fileViewMode === 'pdf' ? (
                <div className="panel-body pdf-panel-body">
                  <div className="pdf-search-tabs">
                    <button type="button" className={`pdf-tab ${pdfSearchTab === 'search' ? 'active' : ''}`} onClick={() => setPdfSearchTab('search')}>Search</button>
                    <button type="button" className={`pdf-tab ${pdfSearchTab === 'mark' ? 'active' : ''}`} onClick={() => setPdfSearchTab('mark')}>Mark</button>
                    <button type="button" className={`pdf-tab ${pdfSearchTab === 'history' ? 'active' : ''}`} onClick={() => setPdfSearchTab('history')}>History</button>
                  </div>

                  {pdfSearchTab === 'search' ? (
                    <>
                      <div className="comment-field">
                        <label>Search across PDF</label>
                        <div style={{ display: 'flex', gap: 8 }}>
                          <input value={pdfSearch} onChange={e => setPdfSearch(e.target.value)} onKeyDown={handlePdfSearchKeyDown} placeholder="Search all pages..." style={{ flex: 1 }} />
                          <button className="btn-copy" type="button" onClick={handlePdfSearchSubmit} title="Run search">🔎</button>
                          <button className="btn-copy" type="button" onClick={() => setPdfSearch('')} title="Clear search">✕</button>
                        </div>
                        <div className="pdf-search-status" style={{ display: 'flex', justifyContent: 'space-between', gap: 8, marginTop: 8, alignItems: 'center' }}>
                          <span>
                            {pdfSearch.trim() ? (pdfSearchResults.total ? `Match ${pdfMatchIndex + 1}/${pdfSearchResults.total} on page ${currentPdfMatchPage} — ${pdfSearchResults.total} result${pdfSearchResults.total === 1 ? '' : 's'} across ${pdfSearchResults.pages.length} page${pdfSearchResults.pages.length === 1 ? '' : 's'}` : 'No results found') : 'Enter a search term and run search.'}
                          </span>
                          <div style={{ display: 'flex', gap: 8 }}>
                            <button className="btn-copy" type="button" onClick={prevPdfMatch} disabled={!pdfSearchResults.total} title="Previous result">◀</button>
                            <button className="btn-copy" type="button" onClick={nextPdfMatch} disabled={!pdfSearchResults.total} title="Next result">▶</button>
                          </div>
                        </div>
                        <div className="pdf-search-actions">
                          <button className="btn-copy" type="button" onClick={handlePdfHistoryPrev} title="Previous search term">↑</button>
                          <span>{pdfSearchHistory.length ? `${pdfHistoryIndex + 1}/${pdfSearchHistory.length}` : '0/0'}</span>
                          <button className="btn-copy" type="button" onClick={handlePdfHistoryNext} title="Next search term">↓</button>
                        </div>
                      </div>

                      <div className="comment-field">
                        <label>Quick Mark Current Search</label>
                        <div style={{ display: 'flex', gap: 6, alignItems: 'center', marginBottom: 8 }}>
                          <input type="text" value={pdfMarkNote} onChange={e => setPdfMarkNote(e.target.value)} placeholder="Note for this match..." style={{ flex: 1 }} />
                          <button className="btn-copy" type="button" onClick={handleAddPdfMark} disabled={!pdfSearch.trim()} title="Mark current search result">📌</button>
                        </div>
                      </div>
                    </>
                  ) : pdfSearchTab === 'mark' ? (
                    <div className="pdf-mark-panel">
                      <div className="comment-field">
                        <label>Add Mark</label>
                        <div style={{ display: 'flex', gap: 6, alignItems: 'center', marginBottom: 10 }}>
                          <input type="number" min="1" max={pdfTotalPages || 1} value={pdfMarkPage} onChange={e => setPdfMarkPage(e.target.value)} placeholder="Page" style={{ width: 60 }} />
                          <input type="text" value={pdfMarkLine} onChange={e => setPdfMarkLine(e.target.value)} placeholder="Line (optional)" style={{ flex: 1 }} />
                        </div>
                        <input type="text" value={pdfMarkNote} onChange={e => setPdfMarkNote(e.target.value)} placeholder="Note..." style={{ width: '100%', marginBottom: 10 }} />
                        <button className="btn-copy" type="button" onClick={handleAddPdfMark} style={{ width: '100%' }}>✓ Add Mark</button>
                      </div>

                      {currentFileMarks.length ? (
                        <div className="pdf-mark-list">
                          {currentFileMarks.map(mark => (
                            <div key={mark.id} className="pdf-mark-item" onClick={() => handleGoToMark(mark)} style={{ cursor: 'pointer' }}>
                              <div>
                                {mark.page ? <strong>Page {mark.page}</strong> : <strong>Line {mark.line}</strong>}
                                {mark.line && mark.page ? <div className="pdf-mark-line">{mark.line}</div> : null}
                                {mark.note ? <div className="pdf-mark-note">{mark.note}</div> : null}
                              </div>
                              <button className="btn-copy icon-only" type="button" onClick={(e) => { e.stopPropagation(); handleRemoveMark(mark.id) }} title="Remove mark">✕</button>
                            </div>
                          ))}
                        </div>
                      ) : (
                        <div className="panel-empty">No marks yet. Add one to pin locations in this PDF.</div>
                      )}
                    </div>
                  ) : (
                    <div className="pdf-history-panel">
                      {pdfSearchHistory.length ? (
                        <>
                          <div className="pdf-history-buttons">
                            <button className="btn-copy" type="button" onClick={handlePdfHistoryPrev}>Prev</button>
                            <button className="btn-copy" type="button" onClick={handlePdfHistoryNext}>Next</button>
                            <button className="btn-copy" type="button" onClick={handleClearPdfHistory}>Clear</button>
                          </div>
                          <div className="pdf-history-list">
                            {pdfSearchHistory.map((term, index) => (
                              <button key={term} type="button" className={`pdf-history-item ${index === pdfHistoryIndex ? 'active' : ''}`} onClick={() => handlePdfHistorySelect(index)}>{term}</button>
                            ))}
                          </div>
                        </>
                      ) : (
                        <div className="panel-empty">No PDF search history yet. Run a search to save terms.</div>
                      )}
                    </div>
                  )}
                </div>
              ) : activeFile?.type === 'other' ? (
                <div className="panel-body pdf-panel-body">
                  <div className="pdf-search-tabs">
                    <button type="button" className={`pdf-tab ${otherSearchTab === 'search' ? 'active' : ''}`} onClick={() => setOtherSearchTab('search')}>Search</button>
                    <button type="button" className={`pdf-tab ${otherSearchTab === 'mark' ? 'active' : ''}`} onClick={() => setOtherSearchTab('mark')}>Mark</button>
                    <button type="button" className={`pdf-tab ${otherSearchTab === 'history' ? 'active' : ''}`} onClick={() => setOtherSearchTab('history')}>History</button>
                  </div>

                  {otherSearchTab === 'search' ? (
                    <>
                      <div className="comment-field">
                        <label>Search across file</label>
                        <div style={{ display: 'flex', gap: 8 }}>
                          <input value={otherSearch} onChange={e => setOtherSearch(e.target.value)} placeholder="Search all lines..." style={{ flex: 1 }} />
                          <button className="btn-copy" type="button" onClick={handleOtherSearchSubmit} title="Run search">🔎</button>
                          <button className="btn-copy" type="button" onClick={() => setOtherSearch('')} title="Clear search">✕</button>
                        </div>
                        <div className="pdf-search-status" style={{ display: 'flex', justifyContent: 'space-between', gap: 8, marginTop: 8, alignItems: 'center' }}>
                          <span>
                            {otherSearch.trim() ? (otherSearchResults.total ? `Match ${otherMatchIndex + 1}/${otherSearchResults.total} — ${otherSearchResults.total} result${otherSearchResults.total === 1 ? '' : 's'} across ${otherSearchResults.lines.length} line${otherSearchResults.lines.length === 1 ? '' : 's'}` : 'No results found') : 'Enter a search term and run search.'}
                          </span>
                          <div style={{ display: 'flex', gap: 8 }}>
                            <button className="btn-copy" type="button" onClick={prevOtherMatch} disabled={!otherSearchResults.total} title="Previous result">◀</button>
                            <button className="btn-copy" type="button" onClick={nextOtherMatch} disabled={!otherSearchResults.total} title="Next result">▶</button>
                          </div>
                        </div>
                        <div className="pdf-search-actions">
                          <button className="btn-copy" type="button" onClick={() => { if (otherSearchHistory.length) setOtherHistoryIndex((otherHistoryIndex > 0) ? otherHistoryIndex - 1 : otherSearchHistory.length - 1); }} title="Previous search term">↑</button>
                          <span>{otherSearchHistory.length ? `${otherHistoryIndex + 1}/${otherSearchHistory.length}` : '0/0'}</span>
                          <button className="btn-copy" type="button" onClick={() => { if (otherSearchHistory.length) setOtherHistoryIndex((otherHistoryIndex < 0 || otherHistoryIndex === otherSearchHistory.length - 1) ? 0 : otherHistoryIndex + 1); }} title="Next search term">↓</button>
                        </div>
                      </div>

                      <div className="comment-field">
                        <label>Quick Mark Current Line</label>
                        <div style={{ display: 'flex', gap: 6, alignItems: 'center', marginBottom: 8 }}>
                          <input type="text" value={otherMarkNote} onChange={e => setOtherMarkNote(e.target.value)} placeholder="Note for this match..." style={{ flex: 1 }} />
                          <button className="btn-copy" type="button" onClick={() => { const line = getOtherMatchLine(otherMatchIndex); handleAddOtherMark(line); }} disabled={!otherSearch.trim()} title="Mark current search result">📌</button>
                        </div>
                      </div>
                    </>
                  ) : otherSearchTab === 'mark' ? (
                    <div className="pdf-mark-panel">
                      <div className="comment-field">
                        <label>Add Mark</label>
                        <div style={{ display: 'flex', gap: 6, alignItems: 'center', marginBottom: 10 }}>
                          <input id="other-mark-line-input" type="number" min="1" value={otherMarkLine} onChange={e => setOtherMarkLine(e.target.value)} placeholder="Line" style={{ width: 80 }} />
                        </div>
                        <input type="text" value={otherMarkNote} onChange={e => setOtherMarkNote(e.target.value)} placeholder="Note..." style={{ width: '100%', marginBottom: 10 }} />
                        <button className="btn-copy" type="button" onClick={handleAddOtherMark} style={{ width: '100%' }}>✓ Add Mark</button>
                      </div>

                      {currentFileMarks.length ? (
                        <div className="pdf-mark-list">
                          {currentFileMarks.map(mark => (
                            <div key={mark.id} className="pdf-mark-item" onClick={() => handleGoToMark(mark)} style={{ cursor: 'pointer' }}>
                              <div>
                                {mark.line ? <strong>Line {mark.line}</strong> : null}
                                {mark.note ? <div className="pdf-mark-note">{mark.note}</div> : null}
                              </div>
                              <button className="btn-copy icon-only" type="button" onClick={(e) => { e.stopPropagation(); handleRemoveMark(mark.id) }} title="Remove mark">✕</button>
                            </div>
                          ))}
                        </div>
                      ) : (
                        <div className="panel-empty">No marks yet. Add one to pin locations in this file.</div>
                      )}
                    </div>
                  ) : (
                    <div className="pdf-history-panel">
                      {otherSearchHistory.length ? (
                        <>
                          <div className="pdf-history-buttons">
                            <button className="btn-copy" type="button" onClick={() => { if (otherSearchHistory.length) setOtherHistoryIndex((otherHistoryIndex > 0) ? otherHistoryIndex - 1 : otherSearchHistory.length - 1); }}>Prev</button>
                            <button className="btn-copy" type="button" onClick={() => { if (otherSearchHistory.length) setOtherHistoryIndex((otherHistoryIndex < 0 || otherHistoryIndex === otherSearchHistory.length - 1) ? 0 : otherHistoryIndex + 1); }}>Next</button>
                            <button className="btn-copy" type="button" onClick={() => { setOtherSearchHistory([]); setOtherHistoryIndex(-1); }}>Clear</button>
                          </div>
                          <div className="pdf-history-list">
                            {otherSearchHistory.map((term, index) => (
                              <button key={term} type="button" className={`pdf-history-item ${index === otherHistoryIndex ? 'active' : ''}`} onClick={() => { setOtherSearch(term); setOtherHistoryIndex(index); }}>{term}</button>
                            ))}
                          </div>
                        </>
                      ) : (
                        <div className="panel-empty">No search history yet. Run a search to save terms.</div>
                      )}
                    </div>
                  )}
                </div>
              ) : selectedNodeId ? (
                <div className="panel-body">
                  <div style={{ display: 'flex', alignItems: 'center', gap: 8, marginBottom: 12 }}>
                    <div className="comment-node-name" style={{ marginBottom: 0 }}>{selectedNodeName}</div>
                    <button
                      className="btn-copy icon-only"
                      type="button"
                      onClick={() => copyText(selectedNodeName || '')}
                      title="Copy node name"
                    >
                      📋
                    </button>
                  </div>

                  {mergedComment?.path && (
                    <>
                      <div className="meta-field">
                        <label>Type</label>
                        <div className="meta-row">
                          <div className="meta-value">{mergedComment.type || '—'}</div>
                          <button className="btn-copy icon-only absolute" type="button" onClick={() => copyText(mergedComment.type || '')} title="Copy type">📋</button>
                        </div>
                      </div>
                      <div className="meta-field">
                        <label>Struct Type</label>
                        <div className="meta-row">
                          <div className="meta-value">{mergedComment.structType || '—'}</div>
                          <button className="btn-copy icon-only absolute" type="button" onClick={() => copyText(mergedComment.structType || '')} title="Copy struct type">📋</button>
                        </div>
                      </div>
                      <div className="meta-field">
                        <label>Presence</label>
                        <div className="meta-row">
                          <div className="meta-value">{mergedComment.presence || '—'}</div>
                          <button className="btn-copy icon-only absolute" type="button" onClick={() => copyText(mergedComment.presence || '')} title="Copy presence">📋</button>
                        </div>
                      </div>
                      <div className="meta-field">
                        <label>Path</label>
                        <div className="meta-row">
                          <div className="meta-value meta-path">{mergedComment.path || '—'}</div>
                          <button className="btn-copy icon-only absolute" type="button" onClick={() => copyText(mergedComment.path || '', 'Path')} title="Copy path">📋</button>
                        </div>
                      </div>
                      <hr style={{ margin: '12px 0', borderColor: 'var(--border)' }} />
                    </>
                  )}

                  <div className="comment-field">
                    <label>Summary</label>
                    <div style={{ display: 'flex', gap: 8 }}>
                      <input
                        value={selectedComment?.summary || ''}
                        onChange={e => updateCommentField(selectedNodeId, 'summary', e.target.value)}
                        placeholder="Short summary shown on the line"
                        style={{ flex: 1 }}
                      />
                      <button
                        className="btn-copy"
                        type="button"
                        onClick={() => copyText(selectedComment?.summary || '')}
                        title="Copy summary"
                      >
                        📋
                      </button>
                    </div>
                  </div>
                  <div className="comment-field">
                    <label>Main content</label>
                    <div style={{ display: 'flex', flexDirection: 'column' }}>
                      <textarea
                        value={selectedComment?.main || ''}
                        onChange={e => updateCommentField(selectedNodeId, 'main', e.target.value)}
                        placeholder="Detailed comment content"
                        style={{ minHeight: 160, marginBottom: 6 }}
                      />
                      <div style={{ display: 'flex', justifyContent: 'flex-end' }}>
                        <button
                          className="btn-copy"
                          type="button"
                          onClick={() => copyText(selectedComment?.main || '')}
                          title="Copy main content"
                        >
                          📋 Copy
                        </button>
                      </div>
                    </div>
                  </div>
                </div>
              ) : (
                <div className="panel-empty">
                  <p>Click the comment icon on a node line to open the comment editor.</p>
                  {Object.keys(comments).length > 0 && (
                    <button
                      className="btn-clear-comments"
                      onClick={() => {
                        if (confirm('Delete all comments? This cannot be undone.')) {
                          clearCommentsFromAPI()
                          setComments({})
                        }
                      }}
                    >
                      🗑 Clear all comments
                    </button>
                  )}
                </div>
              )}
            </aside>
          )}
        </div>
      </main>
    </div>
  )
}
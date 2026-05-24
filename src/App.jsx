import React, { useState, useEffect, useCallback, useRef, useMemo } from 'react'
import { Tree } from 'react-arborist'
import { parseTxtToTree } from './parser.js'
import './App.css'

// ─── file manifest (auto: public/data/manifest.json preferred) ─────────
const FALLBACK_FILE_LIST = ['e2.txt', 'ric.txt']
const MANIFEST_URL = './data/manifest.json'
const PDF_FILE_LIST = ['E2AP-V8.pdf', 'E2SM-CCC.pdf', 'E2SM-KPM.pdf', 'E2SM-LLC.pdf', 'E2SM-NI.pdf', 'E2SM-RC.pdf', 'E2SM.pdf']
const PDF_BASE_URL = './pdf'

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
  const [lastSelectedFiles, setLastSelectedFiles] = useState({ txt: '', pdf: '', notes: '' })
  const [pdfSearch, setPdfSearch] = useState('')
  const [pdfPage, setPdfPage] = useState(1)
  const [pdfLine, setPdfLine] = useState('')
  const [pdfMarks, setPdfMarks] = useState({})
  const [pdfSearchHistory, setPdfSearchHistory] = useState([])
  const [pdfHistoryIndex, setPdfHistoryIndex] = useState(-1)
  const [pdfSearchTab, setPdfSearchTab] = useState('search')
  const [panelWidth, setPanelWidth] = useState(320)
  const [isDraggingPanel, setIsDraggingPanel] = useState(false)
  const [sidebarWidth, setSidebarWidth] = useState(264)
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
      if (storedTab === 'pdf' || storedTab === 'txt') {
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
    if (e.key === 'Enter') {
      e.preventDefault()
      handlePdfSearchSubmit()
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

  const currentPdfMarks = useMemo(() => {
    if (!activeFile || activeFile.type !== 'pdf') return []
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

  const handleAddPdfMark = () => {
    if (!activeFile || activeFile.type !== 'pdf') return
    const pageNumber = Number(pdfPage) || 1
    const mark = {
      id: `${Date.now()}`,
      page: pageNumber,
      line: pdfLine.trim(),
      created: new Date().toLocaleString(),
    }
    setPdfMarks(prev => ({
      ...prev,
      [activeFile.fname]: [...(prev[activeFile.fname] || []), mark],
    }))
    setPdfLine('')
  }

  const handleRemovePdfMark = markId => {
    if (!activeFile || activeFile.type !== 'pdf') return
    setPdfMarks(prev => ({
      ...prev,
      [activeFile.fname]: (prev[activeFile.fname] || []).filter(mark => mark.id !== markId),
    }))
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
    if (tab !== 'txt' && tab !== 'pdf' && tab !== 'notes') return
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
            Tree files
          </button>
          <button
            type="button"
            className={`file-filter-tab ${fileListTab === 'pdf' ? 'active' : ''}`}
            onClick={() => handleFileListTabChange('pdf')}
          >
            PDF files
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
                {f.type === 'pdf' ? '📕' : f.type === 'note' ? '📝' : '📄'}
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
        {!(activeFile?.type === 'pdf' && fileViewMode === 'pdf') && (
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
              style={{ paddingRight: showAllComments ? `${overlayWidth + 8}px` : '0' }}
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
                  <iframe
                    className="pdf-viewer"
                    title={activeFile.name}
                    src={pdfViewerUrl}
                  />
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
                  style={{ height: `${commentItems.length * 28 + 8}px` }}
                >
                  {commentItems.map(({ node, index, depth, key, summary }, commentIndex) => {
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
                  })}
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
                {activeFile?.type === 'pdf' && fileViewMode === 'pdf' ? 'PDF search & marks' : 'Comment details'}
              </div>
              <div className="panel-sub">
                {activeFile?.type === 'pdf' && fileViewMode === 'pdf'
                  ? 'Search inside the PDF viewer and add page/line markers.'
                  : 'Select a node to edit summary & content'}
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
                  <button
                    type="button"
                    className={`pdf-tab ${pdfSearchTab === 'search' ? 'active' : ''}`}
                    onClick={() => setPdfSearchTab('search')}
                  >
                    Search
                  </button>
                  <button
                    type="button"
                    className={`pdf-tab ${pdfSearchTab === 'history' ? 'active' : ''}`}
                    onClick={() => setPdfSearchTab('history')}
                  >
                    History
                  </button>
                </div>

                {pdfSearchTab === 'search' ? (
                  <>
                    <div className="comment-field">
                      <label>Search across PDF</label>
                      <div style={{ display: 'flex', gap: 8 }}>
                        <input
                          value={pdfSearch}
                          onChange={e => setPdfSearch(e.target.value)}
                          onKeyDown={handlePdfSearchKeyDown}
                          placeholder="Search all pages..."
                          style={{ flex: 1 }}
                        />
                        <button className="btn-copy" type="button" onClick={handlePdfSearchSubmit} title="Run search">
                          🔎
                        </button>
                        <button className="btn-copy" type="button" onClick={() => setPdfSearch('')} title="Clear search">
                          ✕
                        </button>
                      </div>
                      <div className="pdf-search-actions">
                        <button className="btn-copy" type="button" onClick={handlePdfHistoryPrev} title="Previous search term">
                          ↑
                        </button>
                        <span>{pdfSearchHistory.length ? `${pdfHistoryIndex + 1}/${pdfSearchHistory.length}` : '0/0'}</span>
                        <button className="btn-copy" type="button" onClick={handlePdfHistoryNext} title="Next search term">
                          ↓
                        </button>
                      </div>
                    </div>

                    <div className="comment-field">
                      <label>Page jump</label>
                      <div style={{ display: 'flex', gap: 8, alignItems: 'center' }}>
                        <input
                          type="number"
                          min="1"
                          value={pdfPage}
                          onChange={e => setPdfPage(Number(e.target.value) || 1)}
                          placeholder="Page number"
                          style={{ width: 100 }}
                        />
                        <button className="btn-copy" type="button" onClick={() => setPdfPage(pdfPage)}>
                          Go
                        </button>
                        <span className="panel-sub" style={{ margin: 0 }}>
                          Search anchor and page jump are handled by the browser PDF viewer.
                        </span>
                      </div>
                    </div>
                  </>
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
                            <button
                              key={term}
                              type="button"
                              className={`pdf-history-item ${index === pdfHistoryIndex ? 'active' : ''}`}
                              onClick={() => handlePdfHistorySelect(index)}
                            >
                              {term}
                            </button>
                          ))}
                        </div>
                      </>
                    ) : (
                      <div className="panel-empty">No PDF search history yet. Run a search to save terms.</div>
                    )}
                  </div>
                )}

                <div className="comment-field">
                  <label>Mark line/page</label>
                  <div style={{ display: 'flex', gap: 8, alignItems: 'center' }}>
                    <input
                      value={pdfLine}
                      onChange={e => setPdfLine(e.target.value)}
                      placeholder="Line or note"
                      style={{ flex: 1 }}
                    />
                    <button className="btn-copy" type="button" onClick={handleAddPdfMark}>
                      Add mark
                    </button>
                  </div>
                </div>

                {currentPdfMarks.length ? (
                  <div className="pdf-mark-list">
                    {currentPdfMarks.map(mark => (
                      <div key={mark.id} className="pdf-mark-item">
                        <div>
                          <strong>Page {mark.page}</strong>{mark.line ? ` · ${mark.line}` : ''}
                        </div>
                        <button className="btn-copy icon-only" type="button" onClick={() => handleRemovePdfMark(mark.id)} title="Remove mark">
                          ✕
                        </button>
                      </div>
                    ))}
                  </div>
                ) : (
                  <div className="panel-empty">No page/line markers yet. Add one to pin a location in this PDF.</div>
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
        </div>
      </main>
    </div>
  )
}
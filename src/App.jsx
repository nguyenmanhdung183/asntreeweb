import React, { useState, useEffect, useCallback, useRef, useMemo } from 'react'
import { Tree } from 'react-arborist'
import { parseTxtToTree } from './parser.js'
import './App.css'

// ─── file manifest (auto: public/data/manifest.json preferred) ─────────
const FALLBACK_FILE_LIST = ['e2.txt', 'ric.txt']
const MANIFEST_URL = './data/manifest.json'

// ─── Node renderer ────────────────────────────────────────────────────────────
function Node({ node, style, dragHandle, selected, comment, onSelect, showAllComments, displayMode }) {
  const isLeaf = !node.data.children?.length
  const hasChildren = !isLeaf
  const summary = comment?.summary?.trim()
  
  // Display name based on mode
  let displayName = node.data.name
  if (displayMode === 'type' && node.data.presence) {
    displayName = `${node.data.type || '?'} [${node.data.presence}]`
  }

  return (
    <div
      ref={dragHandle}
      style={style}
      className={`tree-node level-${node.level} ${selected ? 'selected' : ''} ${isLeaf ? 'leaf' : 'folder'}`}
      onClick={() => {
        if (hasChildren) node.toggle()
        onSelect(node.data.id, node.data.name)
      }}
    >
      <span className="indent-guide" style={{ width: node.level * 24 }} />

      <span className="node-toggle">
        {hasChildren ? (node.isOpen ? '▾' : '▸') : '·'}
      </span>

      <span className={`node-icon ${isLeaf ? 'icon-leaf' : node.isOpen ? 'icon-open' : 'icon-closed'}`}>
        {isLeaf ? '◆' : node.isOpen ? '◻' : '◼'}
      </span>

      <span className="node-name">{displayName}</span>

      {/* <button
        className="comment-open"
        type="button"
        onClick={e => {
          e.stopPropagation()
          onSelect(node.data.id, node.data.name)
        }}
      >
        {summary ? '💬' : '✎'}
      </button> */}

      {hasChildren && (
        <span className="node-badge">{node.data.children.length}</span>
      )}
    </div>
  )
}

// ─── Normalize string for search (remove _, space, lowercase) ─────────────────
function normalizeString(str) {
  return str.replace(/[_\s]/g, '').toLowerCase()
}

// ─── Search highlight ─────────────────────────────────────────────────────────
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
  const [showAllComments, setShowAllComments] = useState(true)
  const [panelWidth, setPanelWidth] = useState(320)
  const [isDraggingPanel, setIsDraggingPanel] = useState(false)
  const [displayMode, setDisplayMode] = useState('varname') // 'varname' or 'type'
  const [overlayWidth, setOverlayWidth] = useState(220)
  const [isDraggingOverlay, setIsDraggingOverlay] = useState(false)
  const containerRef = useRef(null)
  const treeRef = useRef(null)
  const panelRef = useRef(null)

  const handleSelectNode = (nodeId, nodeName) => {
    setSelectedNodeId(nodeId)
    setSelectedNodeName(nodeName)
  }

  const updateCommentField = (nodeId, field, value) => {
    setComments(prev => ({
      ...prev,
      [nodeId]: {
        ...(prev[nodeId] ?? { summary: '', main: '' }),
        [field]: value,
      },
    }))
  }

  // Detect if current file is structured protocol format
  const isStructuredFile = useMemo(() => {
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


  const selectedComment = selectedNodeId ? comments[selectedNodeId] : null

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
          loaded.push({ name: fname.replace('.txt', ''), fname, tree })
        } catch (e) {
          console.warn(`Could not load ${fname}:`, e)
        }
      }
      setFiles(loaded)
      if (loaded.length) setActiveFile(loaded[0])
      setLoading(false)
    }
    loadFiles()
  }, [])

  // Update tree height on resize
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
    if (!activeFile) return
    let count = 0
    function walk(nodes) { for (const n of nodes) { count++; if (n.children) walk(n.children) } }
    walk(activeFile.tree)
    setTotalNodes(count)
  }, [activeFile])

  const handleExpandAll = () => treeRef.current?.openAll()
  const handleCollapseAll = () => treeRef.current?.closeAll()

  const activeTree = useMemo(() => activeFile?.tree ?? [], [activeFile])

  // Filter files based on file search
  const filteredFiles = useMemo(() => {
    if (!fileSearch.trim()) return files
    return files.filter(f => fileSearchMatch(f.name, fileSearch))
  }, [files, fileSearch])

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

  return (
    <div className="app">
      {/* ── Sidebar ── */}
      <aside className="sidebar">
        <div className="sidebar-header">
          <div className="logo">
            <span className="logo-icon">⬡</span>
            <span className="logo-text">ASN<span className="logo-accent">Tree</span></span>
          </div>
          <div className="logo-sub">Protocol Explorer  dungnm26</div>
        </div>

        <div className="sidebar-section-label">FILES</div>
        
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
              <span className="file-icon">📄</span>
              <span className="file-name">{f.name}</span>
            </button>
          ))}
        </nav>

        <div className="sidebar-footer">
          <div className="stat-row">
            <span className="stat-label">Nodes</span>
            <span className="stat-value">{totalNodes}</span>
          </div>
          <div className="stat-row">
            <span className="stat-label">Files</span>
            <span className="stat-value">{fileSearch ? `${filteredFiles.length}/${files.length}` : files.length}</span>
          </div>
        </div>
      </aside>

      {/* ── Main panel ── */}
      <main className="main">
        {/* Toolbar */}
        <div className="toolbar">
          <div className="toolbar-left">
            <span className="breadcrumb">
              {activeFile ? (
                <>
                  <span className="bc-root">data</span>
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
                placeholder="Search nodes..."
                value={search}
                onChange={e => setSearch(e.target.value)}
              />
              {search && (
                <button className="search-clear" onClick={() => setSearch('')}>✕</button>
              )}
            </div>
          </div>

          <div className="toolbar-right">
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
            <button className="btn-tool" onClick={handleExpandAll} title="Expand all">
              <span>⊞</span> Expand
            </button>
            <button className="btn-tool" onClick={handleCollapseAll} title="Collapse all">
              <span>⊟</span> Collapse
            </button>
          </div>
        </div>

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
              ) : (
                <Tree
                  ref={treeRef}
                  data={activeTree}
                  openByDefault={false}
                  width="100%"
                  height={treeHeight}
                  indent={28}
                  rowHeight={28}
                  searchTerm={search}
                  searchMatch={searchMatch}
                  disableDrag
                  disableDrop
                >
                  {props => {
                    const nodeKey = `${activeFile?.fname}:${props.node.data.id}`
                    return (
                      <Node
                        {...props}
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
            {showAllComments && (
              <div 
                className="comment-overlay"
                style={{ width: `${overlayWidth}px` }}
              >
                {flatNodeList.map(({ node, index }) => {
                  const nodeKey = `${activeFile?.fname}:${node.id}`
                  const comment = comments[nodeKey]
                  const summary = comment?.summary?.trim()
                  if (!summary) return null
                  
                  const top = index * 28 + 8 // rowHeight (28) + top padding
                  
                  return (
                    <div 
                      key={nodeKey} 
                      className="comment-overlay-item"
                      style={{ top: `${top}px` }}
                      onClick={e => {
                        e.stopPropagation()
                        handleSelectNode(nodeKey, node.name)
                      }}
                    >
                      <span className={`overlay-level level-${node.level}`}>L{node.level}</span>
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
              <div className="panel-title">Comment details</div>
              <div className="panel-sub">Select a node to edit summary & content</div>
            </div>

            {selectedNodeId ? (
              <div className="panel-body">
                <div className="comment-node-name">{selectedNodeName}</div>

                {mergedComment?.path && (
                  <>
                    <div className="meta-field">
                      <label>Type</label>
                      <div className="meta-value">{mergedComment.type || '—'}</div>
                    </div>
                    <div className="meta-field">
                      <label>Struct Type</label>
                      <div className="meta-value">{mergedComment.structType || '—'}</div>
                    </div>
                    <div className="meta-field">
                      <label>Presence</label>
                      <div className="meta-value">{mergedComment.presence || '—'}</div>
                    </div>
                    <div className="meta-field">
                      <label>Path</label>
                      <div className="meta-value meta-path">{mergedComment.path || '—'}</div>
                    </div>
                    <hr style={{ margin: '12px 0', borderColor: 'var(--border)' }} />
                  </>
                )}

                <div className="comment-field">
                  <label>Summary</label>
                  <input
                    value={selectedComment?.summary || ''}
                    onChange={e => updateCommentField(selectedNodeId, 'summary', e.target.value)}
                    placeholder="Short summary shown on the line"
                  />
                </div>
                <div className="comment-field">
                  <label>Main content</label>
                  <textarea
                    value={selectedComment?.main || ''}
                    onChange={e => updateCommentField(selectedNodeId, 'main', e.target.value)}
                    placeholder="Detailed comment content"
                  />
                </div>
              </div>
            ) : (
              <div className="panel-empty">
                Click the comment icon on a node line to open the comment editor.
              </div>
            )}
          </aside>
        </div>
      </main>
    </div>
  )
}
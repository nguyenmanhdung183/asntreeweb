import React, { useState, useEffect, useCallback, useRef, useMemo } from 'react'
import { Tree } from 'react-arborist'
import { parseTxtToTree } from './parser.js'
import './App.css'

// ─── file manifest (add more here as you drop .txt into public/data/) ─────────
const FILE_LIST = ['e2.txt', 'ric.txt']

// ─── Node renderer ────────────────────────────────────────────────────────────
function Node({ node, style, dragHandle }) {
  const isLeaf = !node.data.children?.length
  const hasChildren = !isLeaf

  return (
    <div
      ref={dragHandle}
      style={style}
      className={`tree-node ${node.isSelected ? 'selected' : ''} ${isLeaf ? 'leaf' : 'folder'}`}
      onClick={() => hasChildren && node.toggle()}
    >
      <span className="indent-guide" style={{ width: node.level * 16 }} />

      <span className="node-toggle">
        {hasChildren ? (node.isOpen ? '▾' : '▸') : '·'}
      </span>

      <span className={`node-icon ${isLeaf ? 'icon-leaf' : node.isOpen ? 'icon-open' : 'icon-closed'}`}>
        {isLeaf ? '◆' : node.isOpen ? '◻' : '◼'}
      </span>

      <span className="node-name">{node.data.name}</span>

      {hasChildren && (
        <span className="node-badge">{node.data.children.length}</span>
      )}
    </div>
  )
}

// ─── Search highlight ─────────────────────────────────────────────────────────
function searchMatch(node, term) {
  return node.data.name.toLowerCase().includes(term.toLowerCase())
}

// ─── Main App ─────────────────────────────────────────────────────────────────
export default function App() {
  const [files, setFiles] = useState([])          // { name, tree }[]
  const [activeFile, setActiveFile] = useState(null)
  const [search, setSearch] = useState('')
  const [loading, setLoading] = useState(true)
  const [treeHeight, setTreeHeight] = useState(600)
  const [totalNodes, setTotalNodes] = useState(0)
  const containerRef = useRef(null)
  const treeRef = useRef(null)

  // Load all txt files
  useEffect(() => {
    async function loadFiles() {
      setLoading(true)
      const loaded = []
      for (const fname of FILE_LIST) {
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
        <nav className="file-list">
          {files.map(f => (
            <button
              key={f.fname}
              className={`file-item ${activeFile?.fname === f.fname ? 'active' : ''}`}
              onClick={() => { setActiveFile(f); setSearch('') }}
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
            <span className="stat-value">{files.length}</span>
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
            <button className="btn-tool" onClick={handleExpandAll} title="Expand all">
              <span>⊞</span> Expand
            </button>
            <button className="btn-tool" onClick={handleCollapseAll} title="Collapse all">
              <span>⊟</span> Collapse
            </button>
          </div>
        </div>

        {/* Tree area */}
        <div className="tree-container" ref={containerRef}>
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
              indent={0}
              rowHeight={28}
              searchTerm={search}
              searchMatch={searchMatch}
              disableDrag
              disableDrop
            >
              {Node}
            </Tree>
          )}
        </div>

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
      </main>
    </div>
  )
}
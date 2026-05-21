/**
 * Parse ASN/protocol TXT files into tree JSON
 * Supports both simple indented format and structured protocol format
 */

let nodeCounter = 0

function getIndentLevel(line) {
  let count = 0
  for (const ch of line) {
    if (ch === '\t') { count++; continue }
    // 2-space or 4-space indent support
    if (ch === ' ') { count += 0.25; continue }
    break
  }
  return Math.round(count)
}

function createNode(name, metadata = {}) {
  return {
    id: String(++nodeCounter),
    name: name.trim(),
    ...metadata,
    children: [],
  }
}

function isStructuredFormat(text) {
  // Check if text contains the structured protocol format markers
  const lines = text.split('\n').filter(l => l.trim() !== '')
  if (lines.length === 0) return false
  // Look for pattern: "---- (TYPE) ----" or "[M/O/UNK]"
  return lines.some(line => /----\s*\([^)]+\)\s*----/.test(line) || /\[(?:M|O|UNK)\]/.test(line))
}

function parseStructuredProtocol(text) {
  nodeCounter = 0
  const lines = text.split('\n').filter(l => l.trim() !== '')
  
  const root = { id: 'root', name: '__root__', children: [] }
  const stack = [{ node: root, level: -1 }]

  for (const line of lines) {
    const level = getIndentLevel(line)
    const trimmed = line.trim()
    
    // Parse structured format: name : (type) ---- (struct_type) ---- [presence] ----PATH: path
    // Also support: name (type) ---- (struct_type) ---- [presence] ----PATH: path
    const regex = /^([^:]+?)\s*:?\s*\(([^)]+)\)\s+----\s+\(([^)]+)\)\s+----\s+\[([^\]]+)\]\s+----PATH:\s*(.+)$/
    const match = trimmed.match(regex)
    
    let nodeName, type, structType, presence, path
    if (match) {
      nodeName = match[1].trim()
      type = match[2].trim()
      structType = match[3].trim()
      presence = match[4].trim()
      path = match[5].trim()
    } else {
      // Fallback: just use the line as name
      nodeName = trimmed
      type = ''
      structType = ''
      presence = ''
      path = ''
    }
    
    const metadata = { type, structType, presence, path }
    const node = createNode(nodeName, metadata)

    // pop stack until we find a parent with smaller level
    while (stack.length > 1 && stack[stack.length - 1].level >= level) {
      stack.pop()
    }

    const parent = stack[stack.length - 1].node
    parent.children.push(node)
    stack.push({ node, level })
  }

  return root.children
}

export function parseTxtToTree(text) {
  nodeCounter = 0
  
  // Detect format and parse accordingly
  if (isStructuredFormat(text)) {
    return parseStructuredProtocol(text)
  }
  
  // Simple format parser (original)
  const lines = text.split('\n').filter(l => l.trim() !== '')

  const root = { id: 'root', name: '__root__', children: [] }
  const stack = [{ node: root, level: -1 }]

  for (const line of lines) {
    const level = getIndentLevel(line)
    const node = createNode(line.trim())

    // pop stack until we find a parent with smaller level
    while (stack.length > 1 && stack[stack.length - 1].level >= level) {
      stack.pop()
    }

    const parent = stack[stack.length - 1].node
    parent.children.push(node)
    stack.push({ node, level })
  }

  return root.children
}

export function flattenTree(nodes, depth = 0) {
  const result = []
  for (const node of nodes) {
    result.push({ ...node, depth })
    if (node.children?.length) {
      result.push(...flattenTree(node.children, depth + 1))
    }
  }
  return result
}
/**
 * Parse ASN/protocol TXT files into tree JSON
 * Supports tab or space-based indentation
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

function createNode(name) {
  return {
    id: String(++nodeCounter),
    name: name.trim(),
    children: [],
  }
}

export function parseTxtToTree(text) {
  nodeCounter = 0
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
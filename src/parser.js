export function parseTree(text) {

  const lines = text
    .split("\n")
    .filter(line => line.trim() !== "");

  const root = [];

  // stack[level] = node
  const stack = [];

  for (const line of lines) {

    // Đếm TAB đầu dòng
    const level =
      line.match(/^\t*/)[0].length;

    const node = {
      id: crypto.randomUUID(),
      name: line.trim(),
      children: []
    };

    // Root node
    if (level === 0) {
      root.push(node);
    } else {

      // Parent = level - 1
      const parent = stack[level - 1];

      if (parent) {
        parent.children.push(node);
      }
    }

    // Save node theo level
    stack[level] = node;
  }

  return root;
}
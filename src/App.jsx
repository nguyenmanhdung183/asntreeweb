import { useEffect, useState } from "react";
import { Tree } from "react-arborist";
import { parseTree } from "./parser";

function Node({ node, style }) {
  return (
    <div
      style={{
        ...style,
        color: "white",
        padding: "4px",
        cursor: "pointer",
        fontFamily: "monospace"
      }}
      onClick={() => node.toggle()}
    >
      {node.isInternal
        ? node.isOpen
          ? "▼ "
          : "▶ "
        : "• "}

      {node.data.name}
    </div>
  );
}

export default function App() {
  const [tree, setTree] = useState([]);

  useEffect(() => {
    fetch("/data/e2.txt")
      .then(res => res.text())
      .then(text => {
        setTree(parseTree(text));
      });
  }, []);

  return (
    <div
      style={{
        height: "100vh",
        background: "#1e1e1e",
        padding: "20px"
      }}
    >
      <h1 style={{ color: "white" }}>
        ASN Tree Viewer
      </h1>

      <div style={{ height: "85vh" }}>
        <Tree
          data={tree}
          width={900}
          height={700}
          indent={24}
        >
          {Node}
        </Tree>
      </div>
    </div>
  );
}
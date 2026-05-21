// const fs = require('fs')
// const path = require('path')

// const projectRoot = path.resolve(__dirname, '..')
// const dataDir = path.join(projectRoot, 'public', 'data')
// const outFile = path.join(dataDir, 'manifest.json')

// function generate() {
//   if (!fs.existsSync(dataDir)) {
//     console.error('Data directory not found:', dataDir)
//     process.exit(1)
//   }

//   const files = fs.readdirSync(dataDir)
//     .filter(f => f.toLowerCase().endsWith('.txt'))
//     .sort()

//   fs.writeFileSync(outFile, JSON.stringify(files, null, 2))
//   console.log('Wrote manifest with', files.length, 'files to', outFile)
// }

// generate()


import fs from 'fs'
import path from 'path'
import { fileURLToPath } from 'url'

const __filename = fileURLToPath(import.meta.url)
const __dirname = path.dirname(__filename)

const projectRoot = path.resolve(__dirname, '..')
const dataDir = path.join(projectRoot, 'public', 'data')
const outFile = path.join(dataDir, 'manifest.json')

function generate() {
  if (!fs.existsSync(dataDir)) {
    console.error('Data directory not found:', dataDir)
    process.exit(1)
  }

  const files = fs
    .readdirSync(dataDir)
    .filter(f => f.toLowerCase().endsWith('.txt'))
    .sort()

  fs.writeFileSync(outFile, JSON.stringify(files, null, 2))

  console.log('Wrote manifest with', files.length, 'files to', outFile)
}

generate()
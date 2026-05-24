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
const pdfDir = path.join(projectRoot, 'public', 'pdf')
const otherDir = path.join(projectRoot, 'public', 'other')

function writeManifestFor(dirPath, extFilter, outFilePath) {
  try {
    if (!fs.existsSync(dirPath)) {
      console.warn('Directory not found, skipping:', dirPath)
      return 0
    }
    const files = fs.readdirSync(dirPath)
      .filter(f => {
        if (!f) return false
        if (f === 'manifest.json') return false
        if (!extFilter) return true
        const lower = f.toLowerCase()
        return extFilter.some(ext => lower.endsWith(ext))
      })
      .sort()

    fs.writeFileSync(outFilePath, JSON.stringify(files, null, 2))
    console.log('Wrote', outFilePath, 'with', files.length, 'entries')
    return files.length
  } catch (e) {
    console.error('Failed to write manifest for', dirPath, e)
    return 0
  }
}

function generate() {
  // data (.txt)
  const dataOut = path.join(dataDir, 'manifest.json')
  writeManifestFor(dataDir, ['.txt'], dataOut)

  // pdf (.pdf)
  const pdfOut = path.join(pdfDir, 'manifest.json')
  writeManifestFor(pdfDir, ['.pdf'], pdfOut)

  // other (all files except manifest)
  const otherOut = path.join(otherDir, 'manifest.json')
  writeManifestFor(otherDir, null, otherOut)
}

generate()
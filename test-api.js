#!/usr/bin/env node

/**
 * Test script for Comments API
 * Usage: node test-api.js [get|post|delete] [apiUrl]
 * 
 * Examples:
 *   node test-api.js get http://localhost:8787
 *   node test-api.js post http://localhost:8787
 *   node test-api.js delete http://localhost:8787
 */

const command = process.argv[2] || 'get'
const apiUrl = process.argv[3] || 'http://localhost:8787'
const endpoint = `${apiUrl}/api/comments`

async function testAPI() {
  console.log(`🧪 Testing Comments API\n`)
  console.log(`Endpoint: ${endpoint}`)
  console.log(`Command: ${command}\n`)

  try {
    if (command === 'get') {
      console.log('📥 GET - Loading comments...')
      const res = await fetch(endpoint)
      const data = await res.json()
      console.log(`Status: ${res.status}`)
      console.log('Data:', JSON.stringify(data, null, 2))
    } 
    else if (command === 'post') {
      console.log('📤 POST - Saving test comments...')
      const testData = {
        'e2:1': {
          summary: 'Test comment 1',
          main: 'This is a test comment from test script'
        },
        'e2:2': {
          summary: 'Test comment 2',
          main: 'Another test comment'
        }
      }
      const res = await fetch(endpoint, {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify(testData)
      })
      const data = await res.json()
      console.log(`Status: ${res.status}`)
      console.log('Response:', JSON.stringify(data, null, 2))
    }
    else if (command === 'delete') {
      console.log('🗑 DELETE - Clearing all comments...')
      const res = await fetch(endpoint, { method: 'DELETE' })
      const data = await res.json()
      console.log(`Status: ${res.status}`)
      console.log('Response:', JSON.stringify(data, null, 2))
    }
    else {
      console.log(`❌ Unknown command: ${command}`)
      console.log('Available commands: get, post, delete')
    }
  } catch (error) {
    console.error('❌ Error:', error.message)
    process.exit(1)
  }
}

testAPI()

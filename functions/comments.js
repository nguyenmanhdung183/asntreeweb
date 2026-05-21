/**
 * Cloudflare Worker to handle Comments API
 * Stores comments in Cloudflare KV storage
 */

export default {
  async fetch(request, env, ctx) {
    const url = new URL(request.url)
    const pathname = url.pathname

    // Enable CORS
    const corsHeaders = {
      'Access-Control-Allow-Origin': '*',
      'Access-Control-Allow-Methods': 'GET, POST, DELETE, OPTIONS',
      'Access-Control-Allow-Headers': 'Content-Type',
    }

    // Handle preflight
    if (request.method === 'OPTIONS') {
      return new Response(null, { headers: corsHeaders })
    }

    try {
      // GET /api/comments - Load all comments
      if (pathname === '/api/comments' && request.method === 'GET') {
        const comments = await env.COMMENTS_KV.get('comments')
        return new Response(
          JSON.stringify(comments ? JSON.parse(comments) : {}),
          {
            headers: { ...corsHeaders, 'Content-Type': 'application/json' },
            status: 200,
          }
        )
      }

      // POST /api/comments - Save all comments
      if (pathname === '/api/comments' && request.method === 'POST') {
        const body = await request.json()
        await env.COMMENTS_KV.put('comments', JSON.stringify(body))
        return new Response(
          JSON.stringify({ success: true, message: 'Comments saved' }),
          {
            headers: { ...corsHeaders, 'Content-Type': 'application/json' },
            status: 200,
          }
        )
      }

      // DELETE /api/comments - Clear all comments
      if (pathname === '/api/comments' && request.method === 'DELETE') {
        await env.COMMENTS_KV.delete('comments')
        return new Response(
          JSON.stringify({ success: true, message: 'All comments deleted' }),
          {
            headers: { ...corsHeaders, 'Content-Type': 'application/json' },
            status: 200,
          }
        )
      }

      // Not found
      return new Response(
        JSON.stringify({ error: 'Not found' }),
        {
          headers: { ...corsHeaders, 'Content-Type': 'application/json' },
          status: 404,
        }
      )
    } catch (error) {
      console.error('Error:', error)
      return new Response(
        JSON.stringify({ error: error.message }),
        {
          headers: { ...corsHeaders, 'Content-Type': 'application/json' },
          status: 500,
        }
      )
    }
  },
}

# Comments API Setup với Cloudflare Workers + KV Storage

Hướng dẫn setup để lưu comments qua các phiên làm việc bằng Cloudflare.

## 🚀 Quick Start

### 1. Install Wrangler CLI

```bash
npm install
```

### 2. Login to Cloudflare

```bash
npx wrangler login
```

### 3. Create KV Namespace

```bash
# Create production namespace
npx wrangler kv:namespace create "comments"

# Create preview namespace for development
npx wrangler kv:namespace create "comments" --preview
```

Output sẽ như thế này:
```
🌀 Creating namespace with title "comments"
✨ Created namespace with id: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
```

Ghi lại các `id` này.

### 4. Update `wrangler.toml`

Mở file `wrangler.toml` và cập nhật:

```toml
kv_namespaces = [
  { binding = "COMMENTS_KV", id = "YOUR_PRODUCTION_ID", preview_id = "YOUR_PREVIEW_ID" }
]
```

### 5. Update Domain (Optional)

Nếu muốn deploy trên domain của bạn:

```toml
[[routes]]
pattern = "your-domain.com/api/comments*"
zone_name = "your-domain.com"
```

Hoặc để test trên `*.workers.dev`:
```toml
[[routes]]
pattern = "*.workers.dev/api/comments*"
```

## 🧪 Development

Chạy development server:

```bash
npm run worker-dev
```

API sẽ chạy trên: `http://localhost:8787/api/comments`

## 📦 Deploy

Deploy lên Cloudflare:

```bash
npm run deploy
```

## 📋 API Endpoints

### GET `/api/comments`
Load tất cả comments

```bash
curl https://your-domain.com/api/comments
```

Response:
```json
{
  "filename:nodeId": { "summary": "...", "main": "..." },
  "filename:nodeId2": { ... }
}
```

### POST `/api/comments`
Lưu toàn bộ comments

```bash
curl -X POST https://your-domain.com/api/comments \
  -H "Content-Type: application/json" \
  -d '{"e2:1": {"summary": "...", "main": "..."}}'
```

### DELETE `/api/comments`
Xóa tất cả comments

```bash
curl -X DELETE https://your-domain.com/api/comments
```

## 🔄 Auto Sync

Comments sẽ tự động:
- ✅ Tải khi app mở
- ✅ Lưu mỗi khi thay đổi (debounce 1-2s)
- ✅ Backup vào localStorage nếu API fail

> Lưu ý: Khi deploy Pages, file `.env.production` trong repo sẽ chỉ định API worker URL chính xác:
> `VITE_COMMENTS_API=https://asntreeweb.nguyendung010803.workers.dev/api/comments`

## 💾 Fallback

Nếu API không hoạt động:
- Comments sẽ tự động lưu vào **localStorage** 
- Dữ liệu vẫn được bảo toàn khi reload trang
- Khi API hoạt động lại, sẽ sync ngay

## 🐛 Troubleshooting

### "COMMENTS_KV not defined"
→ Bạn chưa tạo KV namespace hoặc wrangler.toml chưa config đúng

### "Failed to save comments"
→ Check Cloudflare dashboard, KV namespace có tồn tại không

### Comments không load
→ Mở DevTools → Console, xem error message

## 📝 Local Storage Backup

Nếu bạn muốn reset comments:

```javascript
// Browser console
localStorage.removeItem('asn_comments')
```

## 🎯 Next Steps

- [ ] Tạo KV namespace
- [ ] Cập nhật wrangler.toml với IDs
- [ ] Chạy `npm run worker-dev` để test
- [ ] Deploy với `npm run deploy`
- [ ] Update API URL nếu cần

## 🌐 Deploy frontend tự động với GitHub + Cloudflare Pages

1. Tạo các GitHub secrets trong repo settings:
   - `CLOUDFLARE_API_TOKEN`
   - `CLOUDFLARE_ACCOUNT_ID`
   - `CLOUDFLARE_PROJECT_NAME`

2. Commit và push lên nhánh `main`.

3. GitHub Actions sẽ build app bằng `npm run build` và deploy thư mục `dist/` lên Pages.

4. Mở link Cloudflare Pages của bạn để xem web frontend.

> Lưu ý: Worker API vẫn có thể chạy riêng tại `https://asntreeweb-comments.nguyendung010803.workers.dev/api/comments`, nhưng trang web frontend phải dùng link Cloudflare Pages để hiển thị giao diện.

> Nếu bạn mở link worker trực tiếp, nó sẽ trả JSON vì worker hiện chỉ là API backend.

## 📞 Support

Nếu có vấn đề:
1. Check [Cloudflare Docs](https://developers.cloudflare.com/workers/)
2. Xem DevTools Console để debug
3. Check Network tab để verify API calls

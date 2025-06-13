# Rock-Paper-Scissors
# 🎮 Trò chơi Kéo Búa Bao (Rock Paper Scissors)

Một chương trình nhỏ bằng C++ giúp bạn chơi trò "Kéo - Búa - Bao" với máy tính (Robot).

## 📌 Tính năng

- Người chơi chọn Kéo, Búa hoặc Bao.
- Máy tính (Robot) chọn ngẫu nhiên.
- So sánh kết quả và thông báo:
  - Thắng
  - Thua
  - Hòa
- Đếm số trận thắng, thua, hòa.
- Sau khi kết thúc game, kết quả tổng được lưu vào file `tongtranchoi.txt`.

## 🔧 Cách chạy chương trình

1. **Biên dịch chương trình:**

  ```bash
    g++ main.cpp -o keobuabao
```
2. **Chạy chương trình**
   ```bash
   ./keobuabao
   ```
3. File kết quả:

Sau khi kết thúc trò chơi, xem file tongtranchoi.txt để biết số trận đã chơi, thắng, thua, hòa.

📝 Lưu ý
Chương trình viết bằng C++ cơ bản.

Sử dụng thư viện <cstdlib>, <ctime>, <fstream>, <iostream>.

Dữ liệu lưu dưới dạng file text đơn giản.

Không sử dụng thư viện hay dependency ngoài.

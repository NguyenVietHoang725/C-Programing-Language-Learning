# Mảng 1 chiều - One-dimensional Array

---

## 1. Định nghĩa và tính chất

- **Định nghĩa:** Mảng 1 chiều trong C là cấu trúc dữ liệu dùng để lưu trữ nhiều phần tử có cùng kiểu dữ liệu, các phần tử trong mảng được lưu trữ tại các ô nhớ cạnh nhau trong bộ nhớ.

- **Tính chất:**
  - Đơn giản và dễ sử dụng:
    > Mảng một chiều có cú pháp khai báo và sử dụng rõ ràng, phù hợp cho cả người mới học và lập trình viên có kinh nghiệm.
  - Thuận tiện trong việc truy xuất giá trị:
    > Các phần tử trong mảng có thể được truy cập trực tiếp thông qua chỉ số (index), giúp việc thao tác nhanh chóng và hiệu quả.
  - Chỉ số được gán cố định:
    > Các phần tử trong mảng được đánh số (bắt đầu từ 0), giúp quản lý dữ liệu dễ dàng.
  - Được sử dụng phổ biến:
    > Là một trong những cấu trúc dữ liệu cơ bản và được ứng dụng rộng rãi trong hầu hết các chương trình.
  - Kích thước cố định:
    > Khi khai báo, kích thước của mảng được xác định và không thể thay đổi trong quá trình thực thi chương trình.
  - Lưu trữ tuần tự trong bộ nhớ:
    > Các phần tử được lưu liên tiếp trong bộ nhớ, giúp tối ưu hóa tốc độ truy xuất và giảm chi phí quản lý.
  - Không hỗ trợ tự động kiểm tra giới hạn (bounds checking):
    > Truy cập ngoài giới hạn của mảng (out-of-bounds) có thể dẫn đến lỗi bộ nhớ hoặc hành vi không xác định (undefined behavior).

## 2. Khai báo mảng

- Cú pháp:

```cpp
Kiểu_Dữ_Liệu Tên_Mảng[Số_Lượng_Phần_Tử];
```

- Khi khai báo mảng, bộ nhớ được cấp phát dựa trên:
  $$Số byte = Số lượng phần tử × Kích thước của một phần tử.$$

- Lưu ý:

  - Các phần tử trong mảng khi vừa khai báo thường có giá trị không xác định (giá trị ngẫu nhiên).
  - Để tránh lỗi, bạn nên khởi tạo giá trị cho các phần tử nếu cần thiết.

# 📘 BÀI TẬP VỀ HÀM

**Chủ đề:** Sử dụng hàm để xử lý dữ liệu, tính toán, và tổ chức mã nguồn gọn gàng.

> ⚠️ _Lưu ý 1:_ Sử dụng **hàm** để thực hiện các chức năng như nhập, xử lý và xuất dữ liệu.

> ⚠️ _Lưu ý 2:_ Hàm được viết trong đề bài chỉ là ví dụ. Có thể tự định nghĩa hàm khác để làm bài.

---

## Bài tập 1: Tổng, Trung Bình Cộng và Giá Trị Lớn Nhất Của Mảng

Viết chương trình sử dụng hàm để xử lý một mảng số nguyên `n` phần tử. Thực hiện các yêu cầu sau:

1. **Tìm giá trị lớn nhất trong mảng:**

   - Hàm **`findMax`** trả về giá trị lớn nhất trong mảng.

2. **Tính toán tổng và trung bình cộng của các phần tử:**

   - Hàm **`calculateSum`** trả về tổng các phần tử trong mảng.
   - Hàm **`calculateAverage`** nhận tổng và số lượng phần tử, trả về trung bình cộng (làm tròn 2 chữ số thập phân).

3. **Thực hiện thao tác dựa trên đầu vào của người dùng:**
   - Nếu nhập **`s`**, hiển thị tổng các phần tử.
   - Nếu nhập **`a`**, hiển thị trung bình cộng của mảng.

### Yêu cầu sử dụng hàm:

- `findMax(arr, n)`: Tìm giá trị lớn nhất.
- `calculateSum(arr, n)`: Tính tổng.
- `calculateAverage(sum, n)`: Tính trung bình cộng.

**Input:**

- Một số nguyên `n`: Số lượng phần tử của mảng.
- `n` số nguyên: Các phần tử của mảng.
- Một ký tự: (`s` hoặc `a`).

**Output:**

- Giá trị lớn nhất trong mảng.
- Nếu nhập ký tự `s`: Tổng của các phần tử.
- Nếu nhập ký tự `a`: Trung bình cộng (làm tròn 2 chữ số thập phân).

🔗 **Link mẫu không sử dụng hàm:** [Tổng và Trung Bình Cộng của Mảng](https://github.com/NguyenVietHoang725/LearningC/blob/main/PRACTICES/BT_MangMotChieu/Bai1.cpp)

🔗 **Link tham khảo:** _(chưa có)_

---

## Bài tập 2: Đếm và Phân Loại Số Trong Mảng

Viết chương trình sử dụng hàm để thực hiện các chức năng sau trên một mảng số nguyên `n` phần tử:

1. **Đếm số lần xuất hiện của một số nguyên `x`:**

   - Hàm **`countOccurrences`** trả về số lần `x` xuất hiện trong mảng.

2. **Phân loại số chẵn và số lẻ trong mảng:**
   - Hàm **`filterEven`** trả về danh sách và số lượng các số chẵn.
   - Hàm **`filterOdd`** trả về danh sách và số lượng các số lẻ.

### Yêu cầu sử dụng hàm:

- `countOccurrences(arr, n, x)`: Đếm số lần xuất hiện của `x`.
- `filterEven(arr, n)`: Lọc số chẵn.
- `filterOdd(arr, n)`: Lọc số lẻ.

**Input:**

- Một số nguyên `n`: Số lượng phần tử của mảng.
- `n` số nguyên: Các phần tử trong mảng.
- Một số nguyên `x`: Số cần đếm.
- Một ký tự (`c` hoặc `l`):
  - `c`: Tìm số chẵn.
  - `l`: Tìm số lẻ.

**Output:**

- Số lần xuất hiện của `x`.
- Nếu nhập ký tự `c`: Danh sách và số lượng số chẵn.
- Nếu nhập ký tự `l`: Danh sách và số lượng số lẻ.

🔗 **Link mẫu không sử dụng hàm:** [Đếm và Phân Loại Số Trong Mảng](https://github.com/NguyenVietHoang725/LearningC/blob/main/PRACTICES/BT_MangMotChieu/Bai2.cpp)

🔗 **Link tham khảo:** _(chưa có)_

---

## Bài tập 3: Xử Lý Ma Trận

Viết chương trình sử dụng **hàm** để xử lý các thao tác trên một ma trận `n x m` các số nguyên. Thực hiện các yêu cầu sau:

1. **Tính tổng các phần tử trong ma trận:**

   - Hàm **`calculateMatrixSum`** nhận một ma trận và trả về tổng các phần tử.

2. **Tính tổng đường chéo chính của ma trận (nếu là ma trận vuông):**

   - Hàm **`calculateMainDiagonalSum`** kiểm tra xem ma trận có vuông không. Nếu vuông, tính tổng các phần tử trên đường chéo chính.

3. **Tìm giá trị lớn nhất hoặc nhỏ nhất trong ma trận (dựa trên lựa chọn):**

   - Hàm **`findMaxOrMin`** yêu cầu người dùng nhập một số nguyên:
     - Nhập **`0`** để tìm giá trị lớn nhất.
     - Nhập **`1`** để tìm giá trị nhỏ nhất.

4. **Kiểm tra một giá trị `x` có tồn tại trong ma trận:**
   - Hàm **`checkValueExists`** kiểm tra và trả về **`true`** nếu giá trị `x` tồn tại, ngược lại trả về **`false`**.

### Yêu cầu sử dụng hàm:

- `calculateMatrixSum(matrix, rows, cols)`: Tính tổng các phần tử trong ma trận.
- `calculateMainDiagonalSum(matrix, size)`: Tính tổng đường chéo chính (nếu có).
- `findMaxOrMin(matrix, rows, cols, choice)`: Tìm giá trị lớn nhất hoặc nhỏ nhất dựa trên lựa chọn.
- `checkValueExists(matrix, rows, cols, x)`: Kiểm tra sự tồn tại của giá trị `x`.

**Input:**

- Hai số nguyên `n` và `m`: Số hàng và số cột của ma trận.
- Ma trận `n x m` gồm các số nguyên.
- Một số nguyên `choice` (0 hoặc 1): Lựa chọn tìm giá trị lớn nhất hoặc nhỏ nhất.
- Một số nguyên `x`: Giá trị cần kiểm tra trong ma trận.

**Output:**

- Tổng các phần tử trong ma trận.
- Tổng đường chéo chính (nếu có).
- Giá trị lớn nhất hoặc nhỏ nhất trong ma trận (dựa trên lựa chọn).
- Kết quả kiểm tra xem giá trị `x` có tồn tại hay không.

### Gợi ý:

Sử dụng vòng lặp để nhập ma trận, sau đó gọi từng hàm để thực hiện các yêu cầu. Kiểm tra kích thước ma trận (vuông hay không) trước khi tính tổng đường chéo chính.

🔗 **Link tham khảo:** _(chưa có)_

---

## 🌟 Link Github:

Hãy ủng hộ bằng cách follow nhé! 😊

- **Bạn Hoàng:** [GitHub của Hoàng](https://github.com/NguyenVietHoang725)
- **Bạn Thảo:** [GitHub của Thảo](https://github.com/thou05)

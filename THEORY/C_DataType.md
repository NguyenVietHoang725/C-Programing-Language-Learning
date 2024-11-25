# Kiểu dữ liệu - Data Types

---

## 1. Kiểu dữ liệu và đặc tả

Kiểu dữ liệu xác định loại giá trị mà biến có thể lưu trữ. Dưới đây là bảng các kiểu dữ liệu chính trong C và đặc tả của chúng:

| Kiểu Dữ Liệu         | Kích thước (byte) | Giá trị có thể lưu           | Giới hạn có thể lưu                                     | Đặc tả (Format Specifier) |
| -------------------- | ----------------- | ---------------------------- | ------------------------------------------------------- | ------------------------- |
| `short`              | 2 byte            | Số nguyên                    | -32,768 -> 32,767                                       | `%hi`                     |
| `unsigned short`     | 2 byte            | Số nguyên không dấu          | 0 -> 65,535                                             | `%hu`                     |
| `int`                | 4 byte            | Số nguyên                    | -2,147,483,648 -> 2,147,483,647                         | `%d`                      |
| `unsigned int`       | 4 byte            | Số nguyên không dấu          | 0 -> 4,294,967,295                                      | `%u`                      |
| `long long`          | 8 byte            | Số nguyên                    | -9,223,372,036,854,775,808 -> 9,223,372,036,854,775,807 | `%lld`                    |
| `unsigned long long` | 8 byte            | Số nguyên không dấu          | 0 -> 18,446,744,073,709,551,615                         | `%llu`                    |
| `char`               | 1 byte            | Số nguyên, ký tự             | -128 -> 127                                             | `%c`                      |
| `unsigned char`      | 1 byte            | Số nguyên không dấu, ký tự   | 0 -> 255                                                | `%c`                      |
| `float`              | 4 byte            | Số thực                      | 3.4E-38 -> 3.4E+38                                      | `%f`                      |
| `double`             | 8 byte            | Số thực với độ chính xác cao | 1.7E-308 -> 1.7E+308                                    | `%lf`                     |

---

## 2. Kiểu dữ liệu số nguyên

C có nhiều kiểu dữ liệu số nguyên, nhưng bạn chỉ cần nhớ hai kiểu phổ biến là int và long long. Các kiểu số nguyên có thể chia thành hai loại: có dấu và không dấu.

- Số nguyên có dấu (`signed`): Lưu trữ cả số âm và số dương.
- Số nguyên không dấu (`unsigned`): Chỉ lưu trữ số dương.

**Lưu ý quan trọng**:

Số nguyên không thể lưu phần thập phân. Nếu bạn muốn lưu giá trị như `3.14`, bạn cần sử dụng kiểu dữ liệu số thực (float, double).
Khi giá trị vượt quá giới hạn của kiểu dữ liệu số nguyên, sẽ xảy ra tình trạng tràn số (`overflow`) và kết quả sẽ sai.

**Cách tính giới hạn của số nguyên**:

Kiểu dữ liệu có K bit có thể lưu trữ các giá trị từ:

- Số nguyên có dấu: Từ **$-2^{(K-1)}$** đến **$2^{(K-1)} - 1$**.
- Số nguyên không dấu: Từ 0 đến **$2^K - 1$**.

Ví dụ:

- `int` (4 byte = 32 bit): Lưu giá trị từ khoảng -2,147,483,648 đến 2,147,483,647.
- `long long` (8 byte = 64 bit): Lưu giá trị từ khoảng -9.223.372.036.854.775.808 đến 9.223.372.036.854.775.807.

---

## 3. Kiểu dữ liệu số thực

Số thực lưu trữ các giá trị có phần thập phân.

- `float`: Số thực với độ chính xác đơn, có thể lưu được khoảng 6 chữ số thập phân.
- `double`: Số thực với độ chính xác kép, có thể lưu được khoảng 15 chữ số thập phân.

**Lưu ý**: Mặc dù `float` và `double` có thể lưu trữ số nguyên, nhưng nếu bài toán yêu cầu sử dụng số nguyên (ví dụ: đếm số lượng), bạn nên sử dụng `int` hoặc `long long` thay vì `float` hoặc `double` để tránh sai số do tính toán.

---

## 4. Kiểu ký tự

Để lưu trữ một ký tự (chữ cái, chữ số, ký tự đặc biệt) trong C, bạn sử dụng kiểu dữ liệu `char`. Mỗi `char` chỉ lưu được một ký tự đơn lẻ như:

- Ký tự chữ cái: `'a'`, `'B'`, `'x'`
- Ký tự số: '0', `'1'`, `'2'`
- Ký tự đặc biệt: `'%'`, `'$'`, `'#'`

**Lưu ý**: `char` không thể lưu một chuỗi ký tự (ví dụ `"hello"`), mà chỉ có thể lưu một ký tự duy nhất. Để lưu một chuỗi, bạn sẽ sử dụng một mảng `char` sau này.

---

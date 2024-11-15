# C Language Cheat Sheet

---

#### Mục lục - Table of Contents

- [Chương trình C cơ bản](#chương-trình-c-cơ-bản---hello-world)
- [Kiểu dữ liệu](#kiểu-dữ-liệu---data-types)
- [Biến và Từ khoá](#biến-và-từ-khoá)

---

## Chương trình C cơ bản - Hello World!

### 1. Sau đây là chương trình "Hello World!" đầu tiên bằng ngôn ngữ lập trình C.

```C
#include <stdio.h>

int main() {
    printf("Hello World!");
    return 0;
}
```

### 2. Phân tích cấu trúc chương trình

- Thư viện: Dòng `#include <stdio.h>` khai báo thư viện `stdio.h`, giúp sử dụng các hàm như `printf()` để in dữ liệu ra màn hình.
- Hàm `main()`: Đây là điểm bắt đầu thực thi của mọi chương trình C. Mọi câu lệnh trong chương trình cần được viết bên trong hàm này.
- Câu lệnh `printf`: Dùng để hiển thị nội dung chuỗi `"Hello World!"` ra màn hình. Chuỗi cần được đặt trong dấu ngoặc kép (`""`).
- Câu lệnh `return 0;`: Xác định rằng chương trình đã chạy thành công và kết thúc.

### 3. Các bước chạy chương trình:

- `Biên dịch (Compile)`: Mã nguồn bạn viết bằng ngôn ngữ lập trình C thì CPU của máy tính chưa thể thực thi được, muốn chạy được code C bạn cần biên dịch (Complile) code này thành mã máy. Trình biên dịch (Compiler) sẽ đảm nhiệm chức năng này Quá trình này kiểm tra lỗi cú pháp và chuẩn bị mã nguồn để chạy.
- `Chạy (Run)`: Sau khi mã nguồn C của bạn được biên dịch thành mã máy thì máy tính có thể thực thi mã máy này và hiển thị cho bạn kết quả tương ứng. Đôi khi chương trình của bạn cũng phát sinh những lỗi trong lúc đang chạy ví dụ như chia cho số 0, lỗi bộ nhớ...

### 4. Câu lệnh return 0;

Câu lệnh này được sử dụng ở cuối hàm main() để chỉ ra rằng chương trình đã kết thúc thành công. Nếu có lỗi xảy ra, giá trị trả về có thể khác 0, giúp nhận biết lỗi.

Ví dụ 1: Phát sinh lỗi lúc chạy dẫn tới giá trị trả về của hàm main sẽ là 3221225725

```C
#include <stdio.h>

int main() {
    int a[2828282828]; // Lỗi do yêu cầu quá nhiều bộ nhớ
    return 0;
}
```

Ví dụ 2: Chương trình kết thúc ngay khi return được gọi

```C
#include <stdio.h>

int main() {
    printf("Hello World!\n");
    return 0;
    printf("Cac cau lenh nay se khong duoc thuc thi\n");
    printf("hello world !\n");
    return 0;
}
```

---

## Kiểu dữ liệu - Data Types

### 1. Kiểu dữ liệu và đặc tả

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

### 2. Kiểu dữ liệu số nguyên

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

### 3. Kiểu dữ liệu số thực

Số thực lưu trữ các giá trị có phần thập phân.

- `float`: Số thực với độ chính xác đơn, có thể lưu được khoảng 6 chữ số thập phân.
- `double`: Số thực với độ chính xác kép, có thể lưu được khoảng 15 chữ số thập phân.

**Lưu ý**: Mặc dù `float` và `double` có thể lưu trữ số nguyên, nhưng nếu bài toán yêu cầu sử dụng số nguyên (ví dụ: đếm số lượng), bạn nên sử dụng `int` hoặc `long long` thay vì `float` hoặc `double` để tránh sai số do tính toán.

### 4. Kiểu ký tự

Để lưu trữ một ký tự (chữ cái, chữ số, ký tự đặc biệt) trong C, bạn sử dụng kiểu dữ liệu `char`. Mỗi `char` chỉ lưu được một ký tự đơn lẻ như:

- Ký tự chữ cái: `'a'`, `'B'`, `'x'`
- Ký tự số: '0', `'1'`, `'2'`
- Ký tự đặc biệt: `'%'`, `'$'`, `'#'`

**Lưu ý**: `char` không thể lưu một chuỗi ký tự (ví dụ `"hello"`), mà chỉ có thể lưu một ký tự duy nhất. Để lưu một chuỗi, bạn sẽ sử dụng một mảng `char` sau này.

---

## Biến và Từ khoá

### 1. Biến và quy tắc đặt tên biến

Biến (variable) được sử dụng để lưu trữ giá trị cho bài toán. Hầu như mọi chương trình của các bạn đều sử dụng đến các biến, để khai báo biến trong C bạn cần chỉ ra 3 thứ:

- Kiểu dữ liệu của biến đó là gì ? Ví dụ : int, long long, float, double...
- Tên biến mà bạn muốn đặt cho nó là gì ? Ví dụ : chuVi, dienTich, salary, point...
- Giá trị mà bạn muốn khởi tạo cho nó là gì? Nếu bạn khai báo biến mà không khởi tạo giá trị thì nó sẽ có giá trị ngẫu nhiên.

**Cú pháp đặt tên biến** : [Kiểu dữ liệu] [Tên biến];

Ví dụ:

```c
#include <stdio.h>

int main(){
    int chuvi;              // Khai bao bien khong khoi tao gia tri
    long long dientich;

    float bankinh = 2.5;    // Khai bao bien co khoi tao gia tri
    double diem = 9.0;

    char x = '@', y = 'Z', t = '#'; // Khai bao nhieu bien co cung kieu du lieu tren cung 1 dong

    return 0;
}
```

### 2. Quy tắc đặt tên biến

Trong ngôn ngữ lập trình C, bạn cần phải tuân theo những quy tắc sau khi đặt tên biến:

| **Quy Tắc**                                                   | **Ví Dụ Đặt Tên Biến Sai**              |
| ------------------------------------------------------------- | --------------------------------------- |
| Tên biến không được bắt đầu bằng chữ số                       | 123bankinh, 28tech, 1dientich, 0diem... |
| Tên biến không được chứa dấu cách hoặc các ký tự đặc biệt     | ban kinh, dien#tich, chu$vi...          |
| Tên biến không được trùng với các keyword có sẵn trong C      | int, main, float, for, while...         |
| Không được đặt 2 biến cùng tên, kể cả chúng khác kiểu dữ liệu | int a; float a;                         |
| Tên biến trong C có phân biệt chữ hoa và chữ thường           | banKinh và bankinh là 2 biến khác nhau  |

### 3. Từ khoá - keyword

Các ngôn ngữ lập trình đều có bộ từ khóa có sẵn, bạn không nhất thiết phải học thuộc những từ khóa này vì trong quá trình học dần dần bạn sẽ quen mặt với các từ khóa này và nhớ được chúng. Chú ý rằng bạn không được đặt tên biến trong chương trình của mình trùng với tên từ khóa.

Danh sách các từ khóa thường gặp trong ngôn ngữ C:

`auto`, `double`, `int`, `struct`, `break`, `else`, `long`, `switch`, `case`, `enum`, `register`, `typedef`, `char`, `extern`, `return`, `union`, `continue`, `for`, `signed`, `void`, `do`, `if`, `static`, `while`, `default`, `goto`, `sizeof`, `volatile`, `const`, `float`, `short`, `unsigned`

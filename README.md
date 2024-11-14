# C Language Cheat Sheet

---

## Cú pháp cơ bản - Basic Syntax

Ví dụ về một chương trình "Hello World" đơn giản:

```C
#include <stdio.h>

int main() {

    printf("Hello World!");

    return 0;
}
```

Output

```
Hello World!
```

Ở đây,

- `#include <stdio.h>`: Khai báo thư viện cần thiết. (thư viện này chứa hàm `printf()`)
- `int main()`: Hàm `main()` là điểm vào của bất kỳ chương trình C nào.
- `printf("Hello World!")`: Hàm `printf()` dùng để hiển thị xâu ký tự "Hello World!"
- `return 0;`: Giá trị trả về bởi hàm `main()`

---

## Biến - Variables

Biến là tên được đặt cho vị trí bộ nhớ lưu trữ một số dữ liệu.

### 1. Cú pháp của biến

```C
    data_type variable_name; // Khai báo môt biến
    data_type variable_name = initial_value; // Khởi tạo một biến (Khai báo và gán giá trị)
```

### 2. Các loại biến trong C

- **Biến toàn cục (Global Variable):** Được khai báo bên ngoài mọi hàm và có thể sử dụng trong tất cả các hàm của chương trình.

```C
    int globalVar = 10; // Khai báo biến toàn cục
```

- **Biến cục bộ (Local Variable):** Chỉ tồn tại và có thể sử dụng trong hàm hoặc khối khai báo biến đó.

```C
    void myFunction() {
    int localVar = 5; // Biến cục bộ, chỉ tồn tại trong myFunction
    }
```

- **Biến tĩnh (Static Variable):** Khi được khai báo, giá trị của nó được giữ nguyên qua các lần gọi hàm.

```C
    void myFunction() {
    static int staticVar = 1; // Giữ giá trị qua các lần gọi hàm
    staticVar++;
    }
```

- **Biến hằng (Constant Variable):** Được khai báo với từ khóa const, biến hằng không thể thay đổi giá trị sau khi đã khởi tạo.

```C
    const int constVar = 100; // Không thể thay đổi sau khi khởi tạo
```

### 3. Quy tắc đặt tên biến

- Tên biến phải bắt đầu bằng chữ cái (a-z, A-Z) hoặc dấu gạch dưới `_`.
- Không được chứa khoảng trắng hoặc ký tự đặc biệt khác.
- Nên sử dụng tên có ý nghĩa để dễ đọc và bảo trì, ví dụ: `totalPrice` thay vì `tp`.
- Không được đặt 2 biến có cùng tên trong cùng một phạm vi như: `int a; float a`
- Tránh trùng tên biến với các từ khóa của C như `int`, `return`, `float`, v.v.

---

## Kiểu dữ liệu - Data Types

> Kiểu dữ liệu trong C là loại dữ liệu mà một biến có thể lưu trữ. Mỗi kiểu dữ liệu có kích thước khác nhau. Trong C có ba nhóm chính:
>
> - **Basic Data Types** - Kiểu dữ liệu cơ bản
> - **Derived Data Types** - Kiểu dữ liệu dẫn xuất
> - **User-Defined Data Types** - Kiểu dữ liệu do người dùng định nghĩa

### 1. Một số kiểu dữ liệu cơ bản - Basic Data Types

> Các kiểu dữ liệu cơ bản được tích hợp sẵn trong ngôn ngữ C, không phụ thuộc vào bất kỳ kiểu dữ liệu nào khác. Dưới đây là các kiểu dữ liệu cơ bản:
>
> - **`char`**: Đại diện cho ký tự.
> - **`int`**: Đại diện cho số nguyên.
> - **`float`**: Đại diện cho số thập phân với độ chính xác đến 6-7 chữ số.
> - **`double`**: Đại diện cho số thập phân với độ chính xác đến 15 chữ số.
> - **`void`**: Đại diện cho thực thể không có giá trị.

Ví dụ:

```C
    char c = 'a';
    int integer = 24;
    float f = 24.32;
    double d = 24.3435;
    void v;
```

> Kích thước của các kiểu dữ liệu cơ bản này có thể được thay đổi bằng cách sử dụng các Data Type Modifiers như:
>
> - **`short`**
> - **`long`**
> - **`signed`**
> - **`unsigned`**

Ví dụ:

```C
    unsigned int var1;
    long double var2;
    long int var3;
```

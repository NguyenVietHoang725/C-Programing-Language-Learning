# Biến và Từ khoá

---

## 1. Biến và quy tắc đặt tên biến

Biến (variable) được sử dụng để lưu trữ giá trị cho bài toán. Hầu như mọi chương trình của các bạn đều sử dụng đến các biến, để khai báo biến trong C bạn cần chỉ ra 3 thứ:

- Kiểu dữ liệu của biến đó là gì ? Ví dụ : int, long long, float, double...
- Tên biến mà bạn muốn đặt cho nó là gì ? Ví dụ : chuVi, dienTich, salary, point...
- Giá trị mà bạn muốn khởi tạo cho nó là gì? Nếu bạn khai báo biến mà không khởi tạo giá trị thì nó sẽ có giá trị ngẫu nhiên.

**Cú pháp đặt tên biến** : [Kiểu dữ liệu] [Tên biến];

Ví dụ:

```C
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

---

## 2. Quy tắc đặt tên biến

Trong ngôn ngữ lập trình C, bạn cần phải tuân theo những quy tắc sau khi đặt tên biến:

| **Quy Tắc**                                                   | **Ví Dụ Đặt Tên Biến Sai**              |
| ------------------------------------------------------------- | --------------------------------------- |
| Tên biến không được bắt đầu bằng chữ số                       | 123bankinh, 28tech, 1dientich, 0diem... |
| Tên biến không được chứa dấu cách hoặc các ký tự đặc biệt     | ban kinh, dien#tich, chu$vi...          |
| Tên biến không được trùng với các keyword có sẵn trong C      | int, main, float, for, while...         |
| Không được đặt 2 biến cùng tên, kể cả chúng khác kiểu dữ liệu | int a; float a;                         |
| Tên biến trong C có phân biệt chữ hoa và chữ thường           | banKinh và bankinh là 2 biến khác nhau  |

---

## 3. Từ khoá - keyword

Các ngôn ngữ lập trình đều có bộ từ khóa có sẵn, bạn không nhất thiết phải học thuộc những từ khóa này vì trong quá trình học dần dần bạn sẽ quen mặt với các từ khóa này và nhớ được chúng. Chú ý rằng bạn không được đặt tên biến trong chương trình của mình trùng với tên từ khóa.

Danh sách các từ khóa thường gặp trong ngôn ngữ C:

`auto`, `double`, `int`, `struct`, `break`, `else`, `long`, `switch`, `case`, `enum`, `register`, `typedef`, `char`, `extern`, `return`, `union`, `continue`, `for`, `signed`, `void`, `do`, `if`, `static`, `while`, `default`, `goto`, `sizeof`, `volatile`, `const`, `float`, `short`, `unsigned`

---

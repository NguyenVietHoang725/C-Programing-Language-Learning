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

#### 1. Cú pháp của biến

```C
data_type variable_name; // Khai báo môt biến
data_type variable_name = initial_value; // Khởi tạo một biến (Khai báo và gán giá trị)
```

#### 2. Các loại biến trong C

- **Biến toàn cục (Global Variable):** Được khai báo bên ngoài mọi hàm và có thể sử dụng trong tất cả các hàm của chương trình.
- **Biến cục bộ (Local Variable):** Chỉ tồn tại và có thể sử dụng trong hàm hoặc khối khai báo biến đó.
- **Biến tĩnh (Static Variable):** Khi được khai báo, giá trị của nó được giữ nguyên qua các lần gọi hàm.
- **Biến hằng (Constant Variable):** Được khai báo với từ khóa const, biến hằng không thể thay đổi giá trị sau khi đã khởi tạo.

#### 3. Quy tắc đặt tên biến

- Tên biến phải bắt đầu bằng chữ cái (a-z, A-Z) hoặc dấu gạch dưới `_`.
- Không được chứa khoảng trắng hoặc ký tự đặc biệt khác.
- Nên sử dụng tên có ý nghĩa để dễ đọc và bảo trì, ví dụ: `totalPrice` thay vì `tp`.
- Không được đặt 2 biến có cùng tên trong cùng một phạm vi như: `int a; float a`
- Tránh trùng tên biến với các từ khóa của C như `int`, `return`, `float`, v.v.

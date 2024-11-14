# C Language Cheat Sheet

---

## Cú pháp cơ bản:

> Ví dụ về một chương trình "Hello World" đơn giản:

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

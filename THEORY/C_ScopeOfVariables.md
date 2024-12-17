# Phạm vi của biến - Scope of Variables

---

## 1. Phạm vi Global và Local

- Phạm vi toàn cục (Global):
  - Biến được khai báo bên ngoài các hàm, thường là trước main().
  - Có thể truy cập và sử dụng ở bất kỳ đâu trong chương trình.
- Phạm vi địa phương (Local):
  - Biến được khai báo bên trong một hàm (như main() hoặc các hàm con).
  - Chỉ có thể truy cập và sử dụng trong chính hàm đó.

1. Ví dụ 1: Biến toàn cục

```cpp
#include <stdio.h>

int n = 28; // global

void printNumber(){
    printf("Gia tri cua n: %d\n", n);
}

int main(){
    printf("Gia tri cua n: %d\n", n);
    printNumber();
    return 0;
}
```

Output:

```
Gia tri cua n: 28
Gia tri cua n: 28
```

2. Ví dụ 2: Biến địa phương

```cpp
#include <stdio.h>

void printNumber(){
    int n = 1000; // local
    printf("%d\n", n);
}

int main(){
    printNumber();
    printf("%d\n", n); // lỗi
    return 0;
}
```

Output:

```
error: 'n' was not declared in this scope
```

Giải thích: Biến n trong hàm printNumber() chỉ tồn tại trong phạm vi hàm đó.

3. Ví dụ 3: Biến toàn cục và Biến địa phương cùng tên

```cpp
#include <stdio.h>

int n = 28; // global

void printNumber(){
    int n = 1000; // local
    printf("Gia tri cua n trong ham: %d\n", n);
}

int main(){
    printNumber();
    int n = 2000; // local
    printf("Gia tri cua n trong ham main: %d\n", n);
    return 0;
}
```

Output:

```
Gia tri cua n trong ham: 1000
Gia tri cua n trong ham main: 2000
```

Giải thích: Biến cục bộ luôn được ưu tiên hơn biến toàn cục khi có cùng tên trong phạm vi hàm.

---

## 2. Phạm vi đóng mở ngoặc nhọn

Khi biến được khai báo bên trong một cặp {} của khối lệnh if, for, while..., biến đó chỉ tồn tại trong phạm vi {}.
Sau khi khối lệnh kết thúc, biến sẽ bị hủy.

1. Ví dụ 1:

```cpp
#include <stdio.h>

int main(){
    {
        int n = 28;
        printf("%d\n", n); // 28
    }
    printf("%d\n", n); // lỗi
    return 0;
}
```

Output:

```
error: 'n' was not declared in this scope
```

Giải thích: Biến n chỉ tồn tại trong khối {} mà nó được khai báo.

2. Ví dụ 2:

```cpp
#include <stdio.h>

int main(){
    int n = 100;
    printf("%d\n", n); // 100
    {
        int n = 28;
        printf("%d\n", n); // 28
    }
    return 0;
}
```

Output:

```
100
28
```

Giải thích: Biến n trong {} là một biến khác với biến n ngoài phạm vi {}.

3. Ví dụ 3:

```cpp
#include <stdio.h>

int n = 100; // global

void printNum(){
    printf("%d\n", n); // global
}

int main(){
    printNum();
    int n = 200; // local
    printf("%d\n", n); // local
    {
        int n = 300; // enclosing scope
        printf("%d\n", n);
    }
    return 0;
}
```

Output:

```
100
200
300
```

Giải thích: Thứ tự ưu tiên khi truy cập biến cùng tên:

- Biến trong phạm vi đóng mở ngoặc {}.
- Biến cục bộ trong hàm.
- Biến toàn cục.

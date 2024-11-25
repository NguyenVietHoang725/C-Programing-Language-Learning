# Ép kiểu dữ Liệu

---

## 1. Ép kiểu ngầm định

**Ép kiểu ngầm định** - `Implicit Type Casting` là khi chuyển đổi kiểu dữ liệu mà không làm mất đi giá trị ban đầu của biến.

Ép kiểu ngầm định được thực hiện một cách tự động khi bạn gán giá trị của một biến này cho biến khác mang kiểu dữ liệu tương thích, thường là kiểu dữ liệu bao hàm.

Ví dụ:

```C
#include <stdio.h>

int main(){
    int n = 100;
    long long m = n; // Implicit casting
    float x = 20.18923;
    double y = x; // Implicit casting
    printf("%lld %.5lf\n", m, y);
}
Output :
100 20.18923
```

Gán giá trị của biến có kiểu dữ liệu lớn hơn cho biến có kiểu dữ liệu nhỏ hơn có thể gây mất mát giá trị

Ví dụ:

```C
#include <stdio.h>

int main(){
    long long m = 182831892845128;
    int n = m;
    printf("%d\n", n);
    float x = 3.123124;
    int y = x;
    printf("%d\n", y);
}
Output :
-569978296
3
```

---

## 2. Ép kiểu tường minh

**Ép kiểu tường minh** - `Explicit type casting` được thực hiện bởi lập trình viên trong một vài tình huống bắt buộc.

**Cú pháp**: `(data_type)Biểu thức`

Ví dụ:

```C
#include <stdio.h>

int main(){
    int a = 10, b = 3;
    float div1 = a / b;
    float div2 = (float) a / b; // Ép kiểu tường minh
    printf("%.2f %.2f\n", div1, div2);
}
Output :
3.00 3.33
```

---

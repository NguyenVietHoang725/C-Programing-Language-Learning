# Toán tử - Operator

---

## 1. Toán tử gán

Toán tử gán (dấu =) được sử dụng trong các bài học trước khi bạn muốn gán giá trị cho biến.

- Cú pháp: X = Y;
- Ý nghĩa: Gán giá trị của toán hạng Y cho toán hạng X
- Ví dụ:

```cpp
#include <stdio.h>

int main(){
    int n = 28;
    int m = n;
    int p = m;
    printf("%d %d %d\n", n, m, p);
    return 0;
}
```

---

## 2. Toán tử toán học

Toán tử toán học bao gồm các phép toán bạn thường sử dụng : `+`, `-`, `*`, `/`, `%`. Trong lập trình bạn cần chú ý phép nhân sẽ là dấu `*`, phép chia là dấu `/` và phép chia dư là `%`.

| Toán tử | Ý nghĩa      | Ví dụ                           |
| ------- | ------------ | ------------------------------- |
| `+`     | Phép cộng    | `int n = 100 + 200; \\ n = 300` |
| `-`     | Phép trừ     | `int n = 300 - 200; \\ n = 100` |
| `*`     | Phép nhân    | `int n = 50 * 2; \\ n = 100`    |
| `/`     | Phép chia    | `int n = 20 / 3; \\ n = 6`      |
| `%`     | Phép chia dư | `int n = 20 / 3; \\ n = 2`      |

Thứ tự ưu tiên các toán tử này trong biểu thức đó là `nhân`, `chia` và `chia dư` trước; `cộng`, `trừ` sau, cùng mức ưu tiên thì thực hiện từ **trái** qua **phải**. Tuy nhiên bạn dùng thêm **đóng mở ngoặc** "`(`", "`)`" vì nó có mức độ ưu tiên cao nhất, sẽ đảm bảo được biểu thức của bạn được tính toán như bạn mong muốn.

- **Chú ý 1**: Phép chia nguyên và chia lấy phần thập phân

  - Phép chia nguyên: Khi bạn thực hiện phép chia giữa hai số nguyên (`int`, `long long`), kết quả sẽ là phép chia nguyên.

  ```cpp
    int a = 5, b = 2;
    printf("%d", a / b); // Kết quả: 2 (phần thập phân bị loại bỏ)
  ```

  - Phép chia giữ phần thập phân: Để kết quả phép chia giữ lại phần thập phân, bạn cần:
    - Chia hai số thực (`float`, `double`).
    - Hoặc, chia một số nguyên với một số thực.
  - Cách xử lý để lấy phần thập phân:

    - Cách 1: Ép kiểu
      Ép kiểu số chia hoặc số bị chia sang kiểu số thực

    ```cpp
        int a = 5, b = 2;
        printf("%.2f", (float)a / b); // Kết quả: 2.50
    ```

    - Cách 2: Nhân với 1.0 (cách được khuyến nghị)
      Nhân số bị chia với 1.0 để ngầm chuyển đổi nó thành số thực.

    ```cpp
        int a = 5, b = 2;
        printf("%.2f", a * 1.0 / b); // Kết quả: 2.50
    ```

- **Chú ý 2**: Nhân hai số nguyên bị tràn dữ liệu

  - Vấn đề tràn số: Khi bạn nhân hai số kiểu `int`, kết quả có thể vượt quá giới hạn lưu trữ của kiểu dữ liệu `int`.

  ```cpp
    int a = 106, b = 106;
    printf("%d", a * b); // Lỗi: tràn số, kết quả không đúng
  ```

  - Cách xử lý:

    - Cách 1: Sử dụng kiểu `long long` cho một trong hai số
      Chuyển ít nhất một trong hai số sang kiểu long long trước khi thực hiện phép nhân.

    ```cpp
        int a = 106, b = 106;
        long long result = (long long)a * b;
        printf("%lld", result); // Kết quả đúng: 11236
    ```

    - Cách 2: Ép kiểu khi nhân
      Ép kiểu một trong hai số sang `long long` để đảm bảo kết quả chính xác.

    ```cpp
        int a = 106, b = 106;
        printf("%lld", (long long)a * b); // Kết quả đúng: 11236
    ```

- Mở rộng: Toán tử gán kết hợp toán tử toán học

| Toán tử | Ví dụ   | Ý nghĩa    |
| ------- | ------- | ---------- |
| `+=`    | a += b  | a = a + b  |
| `-=`    | a -= b  | a = a - b  |
| `*=`    | a \*= b | a = a \* b |
| `/=`    | a /= b  | a = a / b  |
| `%=`    | a %= b  | a = a % b  |

---

## 3. Toán tử so sánh

Các toán tử so sánh thường được sử dụng để kiểm tra điều kiện, các toán tử này sẽ trả về giá trị `đúng (1)` hoặc `sai (0)` khi bạn so sánh 2 toán hạng với nhau.

| Toán tử | Ý nghĩa           | Ví dụ     | Kết quả |
| ------- | ----------------- | --------- | ------- |
| `>`     | Lớn hơn           | `20 > 10` | 1       |
| `>=`    | Lớn hơn hoặc bằng | `5 >= 10` | 0       |
| `<`     | Nhỏ hơn           | `20 < 10` | 0       |
| `<=`    | Nhỏ hơn hoặc bằng | `5 <= 10` | 1       |
| `!=`    | So sánh khác      | `5 != 10` | 1       |
| `==`    | So sánh bằng      | `1 == 2`  | 0       |

---

## 4. Toán tử logic

---

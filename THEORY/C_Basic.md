# Chương trình C cơ bản - Hello World!

---

## 1. Sau đây là chương trình "Hello World!" đầu tiên bằng ngôn ngữ lập trình C.

```C
#include <stdio.h>

int main() {
    printf("Hello World!");
    return 0;
}
```

---

## 2. Phân tích cấu trúc chương trình

- Thư viện: Dòng `#include <stdio.h>` khai báo thư viện `stdio.h`, giúp sử dụng các hàm như `printf()` để in dữ liệu ra màn hình.
- Hàm `main()`: Đây là điểm bắt đầu thực thi của mọi chương trình C. Mọi câu lệnh trong chương trình cần được viết bên trong hàm này.
- Câu lệnh `printf`: Dùng để hiển thị nội dung chuỗi `"Hello World!"` ra màn hình. Chuỗi cần được đặt trong dấu ngoặc kép (`""`).
- Câu lệnh `return 0;`: Xác định rằng chương trình đã chạy thành công và kết thúc.

---

## 3. Các bước chạy chương trình:

- `Biên dịch (Compile)`: Mã nguồn bạn viết bằng ngôn ngữ lập trình C thì CPU của máy tính chưa thể thực thi được, muốn chạy được code C bạn cần `biên dịch (Complile)` code này thành mã máy. `Trình biên dịch (Compiler)` sẽ đảm nhiệm chức năng này. Quá trình này kiểm tra lỗi cú pháp và chuẩn bị mã nguồn để chạy.
- `Chạy (Run)`: Sau khi mã nguồn C của bạn được biên dịch thành mã máy thì máy tính có thể thực thi mã máy này và hiển thị cho bạn kết quả tương ứng. Đôi khi chương trình của bạn cũng phát sinh những lỗi trong lúc đang chạy ví dụ như chia cho số 0, lỗi bộ nhớ...

---

## 4. Câu lệnh return 0;

Câu lệnh này được sử dụng ở cuối hàm `main()` để chỉ ra rằng chương trình đã kết thúc thành công. Nếu có lỗi xảy ra, giá trị trả về có thể khác 0, giúp nhận biết lỗi.

- Ví dụ 1: Phát sinh lỗi lúc chạy dẫn tới giá trị trả về của hàm main sẽ là 3221225725

```C
#include <stdio.h>

int main() {
    int a[2828282828]; // Lỗi do yêu cầu quá nhiều bộ nhớ
    return 0;
}
```

- Ví dụ 2: Chương trình kết thúc ngay khi return được gọi

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

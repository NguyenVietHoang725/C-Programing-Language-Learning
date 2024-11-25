# Printf và Scanf - Nhập xuất dữ Liệu

---

## 1. Xuất dữ liệu với hàm `printf`

Để in dữ liệu hay hiển thị kết quả, chuỗi ký tự, số... ra màn hình bạn cần sử dụng hàm `printf` trong thư viện `stdio.h`

**Cú pháp**: `printf("Chuỗi_định_dạng", Đối_số);`

Trong đó:

- Chuỗi định dạng có thể là nội dung của một chuỗi ký tự hoặc đặc tả kiểu dữ liệu của biến mà bạn muốn in ra màn hình.
- Đối số : Đây thường là các biến mà bạn sẽ in ra, số lượng đối số sẽ bằng số lượng đặc tả trong chuỗi định dạng.

**Chú ý**: Để in ra giá trị của số thực `float` và `double` với `x` chữ số phần thập phân thì ở phần đặc tả có thể viết `%.xf` hoặc `%.xlf`

Ví dụ:

```C
#include <stdio.h>

int main(){
    printf("28tech.com.vn\n");
    int n = 28;
    printf("Gia tri cua n la : %d\n", n);
    long long m = 28282828282828;
    printf("Gia tri cua m la : %lld\n", m);
    char kitu = '@';
    printf("Gia tri cua kitu la : %c\n", kitu);
    float f = 24.1725;
    printf("Gia tri cua f : %.2f\n", f);

    // In ra nhieu bien su dung 1 cau lenh printf
    int a = 1, b = 2, c = 3;
    printf("%d %d %d\n", a, b, c);

    return 0;
}
```

---

## 2. Nhập dữ liệu với hàm `scanf`

Hàm scanf giúp bạn chủ động với việc gán giá trị cho biến từ bàn phím khi chạy chương trình, bạn có thể yêu cầu người dùng nhập giá trị cho biến của bạn thay vì gán thủ công.

**Cú pháp**: `scanf("Đặc_tả", &biến);`

Khi bạn nhập giá trị cho 1 biến từ bàn phím bạn cần truyền đặc tả của nó vào phần chuỗi định dạng, kèm theo dấu `&` trước tên biến. Dấu `&` này thể hiện địa chỉ của biến trong bộ nhớ, có thể hiểu đơn giản mỗi khi bạn nhập giá trị cho biến từ bàn phím thì hàm `scanf` sẽ tìm đến địa chỉ của biến đó trong bộ nhớ để gán cho nó giá trị mà bạn đã nhập từ bàn phím.

Mỗi khi nhập xong giá trị cho 1 biến bạn ấn enter thì giá trị này sẽ được gán cho biến tương ứng

Ví dụ:

```C
#include <stdio.h>

int main(){
    int a, b, c;
    printf("Nhap a : ");
    scanf("%d", &a);
    printf("Nhap b va c : ");
    scanf("%d %d", &b, &c);
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    return 0;
}
```

---

## 3. Chú ý khi nhập 1 ký tự

Để nhập 1 ký tự từ bàn phím bạn có thể dùng hàm `scanf` hoặc `getchar()`

Bạn sẽ gặp phải tình huống đó là câu lệnh nhập ký tự sẽ nhập phải phím enter sau số ở dòng trên, trong trường hợp này bạn cần phải xử lý phím enter đó

```C
#include <stdio.h>

int main(){
    char kitu1;
    printf("Nhap ki tu : ");
    scanf("%c", &kitu1); // Nhap ki tu su dung scanf()
    printf("Ki tu vua nhap : %c\n", kitu1);

    getchar(); // Xu li phim Enter

    char kitu2;
    printf("Nhap ki tu : ");
    kitu2 = getchar(); // Nhap ki tu su dung getchar()
    printf("Ki tu vua nhap : %c\n", kitu2);

    return 0;
}
```

---

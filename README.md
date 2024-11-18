# C Language Cheat Sheet

---

## Mục lục - Table of Contents

- [C Language Cheat Sheet](#c-language-cheat-sheet)
  - [Mục lục - Table of Contents](#mục-lục---table-of-contents)
- [Kiểu dữ liệu - Toán tử - Nhập xuất](#kiểu-dữ-liệu---toán-tử---nhập-xuất)
  - [I. Chương trình C cơ bản - Hello World!](#i-chương-trình-c-cơ-bản---hello-world)
    - [1. Sau đây là chương trình "Hello World!" đầu tiên bằng ngôn ngữ lập trình C.](#1-sau-đây-là-chương-trình-hello-world-đầu-tiên-bằng-ngôn-ngữ-lập-trình-c)
    - [2. Phân tích cấu trúc chương trình](#2-phân-tích-cấu-trúc-chương-trình)
    - [3. Các bước chạy chương trình:](#3-các-bước-chạy-chương-trình)
    - [4. Câu lệnh return 0;](#4-câu-lệnh-return-0)
  - [II. Kiểu dữ liệu - Data Types](#ii-kiểu-dữ-liệu---data-types)
    - [1. Kiểu dữ liệu và đặc tả](#1-kiểu-dữ-liệu-và-đặc-tả)
    - [2. Kiểu dữ liệu số nguyên](#2-kiểu-dữ-liệu-số-nguyên)
    - [3. Kiểu dữ liệu số thực](#3-kiểu-dữ-liệu-số-thực)
    - [4. Kiểu ký tự](#4-kiểu-ký-tự)
  - [III. Biến và Từ khoá](#iii-biến-và-từ-khoá)
    - [1. Biến và quy tắc đặt tên biến](#1-biến-và-quy-tắc-đặt-tên-biến)
    - [2. Quy tắc đặt tên biến](#2-quy-tắc-đặt-tên-biến)
    - [3. Từ khoá - keyword](#3-từ-khoá---keyword)
  - [IV. Chú thích - Comment](#iv-chú-thích---comment)
    - [1. Vì sao nên Chú thích khi viết code](#1-vì-sao-nên-chú-thích-khi-viết-code)
    - [2. Các kiểu chú thích](#2-các-kiểu-chú-thích)
  - [V. Printf và Scanf - Nhập xuất dữ Liệu](#v-printf-và-scanf---nhập-xuất-dữ-liệu)
    - [1. Xuất dữ liệu với hàm `printf`](#1-xuất-dữ-liệu-với-hàm-printf)
    - [2. Nhập dữ liệu với hàm `scanf`](#2-nhập-dữ-liệu-với-hàm-scanf)
    - [3. Chú ý khi nhập 1 ký tự](#3-chú-ý-khi-nhập-1-ký-tự)
  - [VI. Ép kiểu dữ Liệu](#vi-ép-kiểu-dữ-liệu)
    - [1. Ép kiểu ngầm định](#1-ép-kiểu-ngầm-định)
    - [2. Ép kiểu tường minh](#2-ép-kiểu-tường-minh)
  - [VII. Toán tử - Operator](#vii-toán-tử---operator)
  - [VIII. Các hàm toán học phổ biến](#viii-các-hàm-toán-học-phổ-biến)
- [Cấu trúc điều khiển](#cấu-trúc-điều-khiển)
  - [I. Cấu trúc rẽ nhánh - If Else](#i-cấu-trúc-rẽ-nhánh---if-else)
    - [1. Câu lệnh if](#1-câu-lệnh-if)
    - [2. Câu lệnh if else](#2-câu-lệnh-if-else)
    - [3. Câu lệnh if else lồng nhau](#3-câu-lệnh-if-else-lồng-nhau)
    - [4. Câu lệnh if else if](#4-câu-lệnh-if-else-if)
  - [II. Cấu trúc rẽ nhánh - Switch Case](#ii-cấu-trúc-rẽ-nhánh---switch-case)
  - [III. Câu lệnh goto](#iii-câu-lệnh-goto)
- [Vòng lặp](#vòng-lặp)
  - [I. Vòng lặp for](#i-vòng-lặp-for)
  - [II. Vòng lặp while](#ii-vòng-lặp-while)
  - [III. Vòng lặp do-while](#iii-vòng-lặp-do-while)
  - [IV. Câu lệnh break và continue](#iv-câu-lệnh-break-và-continue)
    - [1. Câu lệnh break](#1-câu-lệnh-break)
    - [2. Câu lệnh continue](#2-câu-lệnh-continue)
    - [3. So sánh break và continue](#3-so-sánh-break-và-continue)

---

# Kiểu dữ liệu - Toán tử - Nhập xuất

---

## I. Chương trình C cơ bản - Hello World!

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

## II. Kiểu dữ liệu - Data Types

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

## III. Biến và Từ khoá

### 1. Biến và quy tắc đặt tên biến

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

---

## IV. Chú thích - Comment

### 1. Vì sao nên Chú thích khi viết code

Chú thích không được coi là mà nguồn và sẽ được loại bỏ bởi trình biên dịch khi biên dịch mã nguồn của bạn.

Những chức năng chính của chú thích :

- **Giải thích mã nguồn** - Chú thích có thể được sử dụng như là mã giả với mục đích giải thích code của bạn sẽ thực hiện công việc gì. Khi một lập trình viên khác hay chính bạn đọc mã nguồn của bạn đã từng viết trước đó có thể nhanh chóng nắm bắt ý tưởng của mã nguồn.
- **Mô tả thuật toán** - Khi các thuật toán bạn cài đặt trở nên phức tạp, bạn cần mô tả và giải thích thuật toán này
- **Metadata** - Siêu dữ liệu cho chương trình, đôi khi chú thích được sử dụng để mô tả chức năng và các thông tin cần thiết về file mã nguồn
- **Debugging** - Gỡ lỗi bằng chú thích là một hành động mà mình sử dụng rất nhiều trong quá trình lập trình, khi bạn phát hiện ra những câu lệnh có thể gây lỗi bạn không nhất thiết phải xóa nó đi ngay mà có thể biến nó thành một dòng chú thích để tạm thời loại bỏ nó.

Nhìn chung chú thích có nhiều lợi ích và là một thói quen tốt của một lập trình viên

### 2. Các kiểu chú thích

- Chú thích trên một dòng, sử dụng `'//'`; Phím tắt nhanh: `Ctrl + '/'`
- Chú thích trên nhiều dòng, sử dụng dấu đóng mở `'/*'` và `'*/'`

```C
#include <stdio.h>

int main(){
    // Day la chu thich tren 1 dong.
    // Khai bao bien n kieu long long co gia tri la 12
    long long n = 12;

    /*
    Day la chu thich
    tren nhieu dong.
    */
    /* Cau lenh sau in
    dong chu ra man hinh */
    printf("hello world !\n");

    return 0;
}
```

---

## V. Printf và Scanf - Nhập xuất dữ Liệu

### 1. Xuất dữ liệu với hàm `printf`

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

### 2. Nhập dữ liệu với hàm `scanf`

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

### 3. Chú ý khi nhập 1 ký tự

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

## VI. Ép kiểu dữ Liệu

### 1. Ép kiểu ngầm định

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

### 2. Ép kiểu tường minh

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

## VII. Toán tử - Operator

---

## VIII. Các hàm toán học phổ biến

---

# Cấu trúc điều khiển

---

## I. Cấu trúc rẽ nhánh - If Else

### 1. Câu lệnh if

Câu lệnh if được sử dụng khi bạn cần kiểm tra một điều kiện trước khi thực hiện những câu lệnh khi điều kiện đó có giá trị đúng.

- Cú pháp:

```C
if (conditions) {
    // Code...
}
```

- Điều kiện ở trong if thường là các phép so sánh, biểu thức trả về giá trị đúng sai. Khi điều kiện này có giá trị đúng thì các câu lệnh bên trong ngoặc nhọn của if sẽ được thực hiện, ngược lại thì các câu lệnh này sẽ bị bỏ qua.

- **Chú ý**: Trong C các giá trị khác không được coi là đúng nêu bạn có thể sử dụng nó để làm điều kiện cho if. Nếu số mà bạn truyền vào làm điều kiện cho if khác 0 thì code trong if sẽ thực thi và ngược lại.

```C
#include <stdio.h>

int main(){
    int n = 28, m = 0;
    if(n){
        printf("%d khac 0\n", n);
    }
    if(m){
        printf("%d khac 0\n", m);
    }
    printf("END\n");
    return 0;
}
Output :
28 khac 0
END
```

### 2. Câu lệnh if else

Câu lệnh if sẽ giúp thực thi khi điều kiện trong if đúng, còn trong trường hợp sai thì khối lệnh bên trong else sẽ được thực hiện.

If có thể không cần đến else nhưng else thì cần if đi trước.

- Cú pháp:

```C
if (conditions) {
    //Code này sẽ được thực hiện
    //khi điều kiện đúng
}
else {
    //Code này sẽ thực hiện khi điều
    //kiện sai
}
```

### 3. Câu lệnh if else lồng nhau

If else có thể lồng vào nhau tức là bên trong khối if else cũng có thể có thêm nhiều câu lệnh if else khác.

Thông thường if else lồng nhau được sử dụng khi điều kiện của bài toán của bạn quá lớn và cần chia nhỏ ra làm nhiều phần để kiểm tra từng bước một.

- Ví dụ: Kiểm tra n nằm trong đoạn [20, 50] và chia hết cho ít nhất 1 trong 4 số 2, 3, 5, 7, nếu đúng in YES, ngược lại in NO

Code sử dụng if else

```C
#include <stdio.h>

int main(){
    int n = 20;
    if((n >= 20 && n <= 50) && (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}
```

Code sử dụng if else lồng nhau

```C
#include <stdio.h>

int main(){
    int n = 20;
    if((n >= 20 && n <= 50)){
        if(n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    else{
        printf("NO\n");
    }
    return 0;
}
```

### 4. Câu lệnh if else if

Trong trường hợp bài toán của bạn có nhiều rẽ nhánh khác nhau với các điều kiện tương ứng, nếu chỉ dùng if else thì bạn phải sử dụng if else lồng nhau dẫn tới code trở nên dài dòng và phức tạp.

If và else if giúp bạn có thể kiểm tra nhiều điều kiện và nó chỉ thực hiện duy nhất 1 khối lệnh trong các rẽ nhánh đó.

- Cú pháp:

```C
if (condition_1){
    //code 1
}
else if (condition_2) {
    //code 2
}
else if (condition_3) {
    //code 3
}
...
else if (condition_n) {
    //code n
}
else {
    //Code else
}
```

- Lưu ý khi sử dụng if và else if :
  - Bạn có thể kiểm tra bao nhiêu điều kiện tùy ý
  - Khối lệnh else có thể có hoặc không
  - Khi rẽ nhánh nào được thực hiện thì các nhánh khác sẽ không được thực hiện, cấu trúc sẽ kết thúc

---

## II. Cấu trúc rẽ nhánh - Switch Case

Switch case sử dụng tương đối giống if và else if, nó cũng giúp bạn có thể kiểm tra nhiều điều kiện để thực hiện các rẽ nhánh khác nhau.

- Cú pháp:

```C
switch (value) {
    case c1:
        //code
        break;
    case c2:
        //code
        break;
    ....
    case cn:
        //code
        break;
    default:
        //code
}
```

Switch case hoạt động bằng cách so sánh giá trị của value với các giá trị trong các case (c1, c2, ... cn). Nếu khớp, khối lệnh của case tương ứng sẽ chạy. Nếu không khớp với bất kỳ case nào, khối lệnh trong default sẽ được thực hiện, tương tự như else trong cấu trúc if-else.

Chú ý: Các câu lệnh bên trong case sẽ được kết thúc bởi câu lệnh break. Nếu không có câu lệnh break thì khi code trong nhánh nào được thực hiện, switch case sẽ không kết thúc ngay như else if mà sẽ thực hiện luôn các câu lệnh trong các rẽ nhánh bên dưới.

- Ví dụ:

```C
#include <stdio.h>

int main() {
    int n = 3;
    switch(n) {
        case 1:
            printf("ONE\n");
            break;
        case 2:
            printf("TWO\n");
            break;
        case 3:
            printf("THREE\n");
            break;
        case 4:
            printf("FOUR\n");
            break;
        //Neu n khong phai la 1, 2, 3, 4
        default:
            printf("DEFAULT\n");
    }
}
Output :
THREE
```

---

## III. Câu lệnh goto

Câu lệnh goto cho phép di chuyển tới các vị trí cụ thể trong chương trình bằng cách gán nhãn cho các câu lệnh.

- Cú pháp:

```C
goto tag;
// Các câu lệnh
tag:
// Các câu lệnh
```

Giải thích:
Khi goto nhãn; được thực hiện, chương trình bỏ qua các câu lệnh phía trước nhãn và tiếp tục thực thi từ nhãn.
Nếu không có goto, chương trình sẽ chạy tuần tự.

- Ví dụ:

```C
#include <stdio.h>
int main() {
    int n = 28;
    if (n % 2 == 0) {
        goto label;
    }
    printf("hello world\n");
    printf("Java\n");
label:
    printf("hoangnv\n");
    printf("lap trinh C\n");
    return 0;
}

Output:
hoangnv
lap trinh C
```

---

# Vòng lặp

---

## I. Vòng lặp for

Vòng lặp for là công cụ cơ bản và quan trọng trong lập trình C, giúp thực hiện một đoạn mã nhiều lần theo ý muốn.

- Cú pháp:

```C
for (Câu_lệnh_khởi_tạo; Điều_kiện_lặp; Câu_lệnh_cập_nhật) {
    // code
}
```

- Hoạt động:

  - Khởi tạo: Thực hiện một lần khi bắt đầu vòng lặp.
  - Kiểm tra điều kiện: Nếu đúng, thực thi khối lệnh; nếu sai, kết thúc vòng lặp.
  - Cập nhật: Sau khi khối lệnh được thực thi, thực hiện cập nhật và quay lại kiểm tra điều kiện.

- Sơ đồ khối:

---

## II. Vòng lặp while

Vòng lặp while là một trong những vòng lặp phổ biến, dễ hiểu và thường được sử dụng trong lập trình C.

- Cú pháp:

```C
while (condition) {
    // code
}
```

- Hoạt động:

  - Kiểm tra điều kiện: Nếu điều kiện condition là đúng, thực thi khối lệnh; nếu sai, vòng lặp kết thúc.
  - Thực thi: Sau khi chạy xong khối lệnh, quay lại kiểm tra điều kiện.
  - Lặp lại cho đến khi điều kiện sai. Nếu điều kiện không bao giờ sai, vòng lặp sẽ lặp vô tận.

- Sơ đồ khối:

---

## III. Vòng lặp do-while

Vòng lặp do-while tương tự như vòng lặp while, nhưng có một điểm khác biệt quan trọng: nó thực hiện khối lệnh trước, sau đó mới kiểm tra điều kiện.

- Cú pháp:

```C
do {
    // Code
} while (condition);
```

- Hoạt động:

  - Thực hiện khối lệnh bên trong do lần đầu tiên, không kiểm tra điều kiện.
  - Sau đó, kiểm tra điều kiện condition.
    - Nếu điều kiện đúng, khối lệnh lặp lại.
    - Nếu điều kiện sai, vòng lặp kết thúc.
  - Tiếp tục lặp lại cho đến khi điều kiện sai. Nếu điều kiện luôn đúng, vòng lặp sẽ lặp vô tận.

- Sơ đồ khối:

---

## IV. Câu lệnh break và continue

### 1. Câu lệnh break

- Mục đích: Dừng vòng lặp (for, while, do-while) ngay lập tức.
- Hoạt động: Khi break được thực thi, vòng lặp kết thúc ngay, các lệnh bên dưới break không chạy.
- Lưu ý: Với vòng lặp lồng nhau, break chỉ dừng vòng lặp gần nhất chứa nó.

- Ví dụ 1: Dừng vòng lặp khi đạt điều kiện:

```C
for (int i = 1; i <= 5; i++) {
    if (i == 3) break;
    printf("%d\n", i);
}
// Output: 1 2
```

- Ví dụ 2: Tìm Ước Chung Lớn Nhất (UCLN):

```C
int a = 18, b = 12;
for (int i = (a < b ? a : b); i >= 1; i--) {
    if (a % i == 0 && b % i == 0) {
        printf("%d\n", i); // Output: 6
        break;
    }
}
```

### 2. Câu lệnh continue

- Mục đích: Bỏ qua các lệnh bên dưới trong vòng lặp hiện tại và chuyển ngay sang lần lặp tiếp theo.
- Lưu ý: Với vòng lặp lồng nhau, continue chỉ áp dụng cho vòng lặp gần nhất.

- Ví dụ 1: Bỏ qua số chẵn:

```C
for (int i = 1; i <= 5; i++) {
    if (i % 2 == 0) continue;
    printf("%d\n", i);
}
// Output: 1 3 5
```

- Ví dụ 2: Tính tổng số nguyên dương, bỏ qua số âm:

```C
int tong = 0, n;
while (1) {
    scanf("%d", &n);
    if (n < 0) continue;
    if (n == 0) break;
    tong += n;
}
printf("%d\n", tong);
```

### 3. So sánh break và continue

| **Tính năng**       | **`break`**                     | **`continue`**                     |
| ------------------- | ------------------------------- | ---------------------------------- |
| **Chức năng**       | Kết thúc vòng lặp.              | Bỏ qua phần còn lại của lần lặp.   |
| **Phạm vi áp dụng** | Dừng vòng lặp gần nhất chứa nó. | Chỉ bỏ qua trong lần lặp hiện tại. |

# Mảng 1 chiều - One-dimensional Array

---

## 1. Định nghĩa và tính chất

- **Định nghĩa:** Mảng 1 chiều trong C là cấu trúc dữ liệu dùng để lưu trữ nhiều phần tử có cùng kiểu dữ liệu, các phần tử trong mảng được lưu trữ tại các ô nhớ cạnh nhau trong bộ nhớ.

- **Tính chất:**
  - Đơn giản và dễ sử dụng:
    > Mảng một chiều có cú pháp khai báo và sử dụng rõ ràng, phù hợp cho cả người mới học và lập trình viên có kinh nghiệm.
  - Thuận tiện trong việc truy xuất giá trị:
    > Các phần tử trong mảng có thể được truy cập trực tiếp thông qua chỉ số (index), giúp việc thao tác nhanh chóng và hiệu quả.
  - Chỉ số được gán cố định:
    > Các phần tử trong mảng được đánh số (bắt đầu từ 0), giúp quản lý dữ liệu dễ dàng.
  - Được sử dụng phổ biến:
    > Là một trong những cấu trúc dữ liệu cơ bản và được ứng dụng rộng rãi trong hầu hết các chương trình.
  - Kích thước cố định:
    > Khi khai báo, kích thước của mảng được xác định và không thể thay đổi trong quá trình thực thi chương trình.
  - Lưu trữ tuần tự trong bộ nhớ:
    > Các phần tử được lưu liên tiếp trong bộ nhớ, giúp tối ưu hóa tốc độ truy xuất và giảm chi phí quản lý.
  - Không hỗ trợ tự động kiểm tra giới hạn (bounds checking):
    > Truy cập ngoài giới hạn của mảng (out-of-bounds) có thể dẫn đến lỗi bộ nhớ hoặc hành vi không xác định (undefined behavior).

## 2. Khai báo mảng

- Cú pháp:

```cpp
Kiểu_Dữ_Liệu Tên_Mảng[Số_Lượng_Phần_Tử];
```

- Khi khai báo mảng, bộ nhớ được cấp phát dựa trên:
  Số byte = Số lượng phần tử × Kích thước của một phần tử.

- Lưu ý:

  - Các phần tử trong mảng khi vừa khai báo thường có giá trị không xác định (giá trị ngẫu nhiên).
  - Để tránh lỗi, bạn nên khởi tạo giá trị cho các phần tử nếu cần thiết.

- Ví dụ:

```cpp
int a[100];         // Mảng chứa tối đa 100 số nguyên (kiểu int)
float b[1000];      // Mảng chứa tối đa 1000 số thực (kiểu float)
double c[200];      // Mảng chứa tối đa 200 số thực chính xác cao (kiểu double)
char d[20000];      // Mảng chứa tối đa 20000 ký tự (kiểu char)
```

- Chú ý: Có thể vửa khai báo mảng, đồng thời vừa gán các giá trị cho các phần tử; khi đó nếu chỉ khởi tạo một số phần tử đầu thì các phần tử còn lại sẽ tự động có giá trị 0.

```cpp
#include <stdio.h>

int main() {
    // Mảng `a` chứa các giá trị ngẫu nhiên
    int a[100];

    // Mảng `b` được khởi tạo với các giá trị lần lượt: 2, 8, 0, 4, 2, 5
    int b[6] = {2, 8, 0, 4, 2, 5};

    return 0;
}
```

---

## 3. Các thao tác trên mảng

### 3.1. Duyệt mảng

- Ghi nhớ:
  - Các phần tử trong mảng được đánh số chỉ số bắt đầu từ 0.
  - Nếu mảng có N phần tử, chỉ số của các phần tử sẽ nằm trong khoảng từ 0 đến N - 1.
- Cú pháp truy cập phần tử:

```cpp
Tên_Mảng[Chỉ_Số];
```

> Bạn có thể truy xuất hoặc thay đổi giá trị phần tử tại chỉ số tương ứng.

- Ví dụ:
  - Với mảng `b[6] = {2, 8, 0, 4, 2, 5}`, giá trị của `b[3]` là `4`.
  - Hình minh hoạ:

| Chỉ số | 0   | 1   | 2   | 3   | 4   | 5   |
| ------ | --- | --- | --- | --- | --- | --- |
| b      | 2   | 8   | 0   | 4   | 2   | 5   |

- Duyệt qua các phần tử trong mảng: Sử dụng vòng lặp for để duyệt qua các phần tử từ đầu đến cuối hoặc ngược lại.
- Ví dụ:

```cpp
#include <stdio.h>

int main() {
    int n = 10;
    int a[10] = {3, 2, 1, 4, 5, 8, 9, 7, 6, 10};

    // Duyệt từ đầu đến cuối
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Duyệt từ cuối lên đầu
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }

    return 0;
}

Output:
3 2 1 4 5 8 9 7 6 10
10 6 7 9 8 5 4 1 2 3
```

### 3.2. Thay đổi giá trị trong mảng

- Bạn có thể gán giá trị mới hoặc áp dụng các phép toán lên từng phần tử của mảng.

- Ví dụ:

```cpp
#include <stdio.h>

int main() {
    int b[6] = {1, 2, 3, 4, 5, 6};

    // Thay đổi giá trị của các phần tử
    b[0] = 28;    // Gán giá trị mới
    b[1] = 100;
    b[2] = 14;
    b[3] += 10;   // Tăng thêm 10
    b[4] *= 2;    // Nhân đôi giá trị
    b[5] /= 2;    // Chia đôi giá trị

    // In mảng sau khi thay đổi
    for (int i = 0; i < 6; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}

Output:
28 100 14 14 10 3
```

### 3.3. Nhập mảng từ bàn phím

- Khi nhập mảng, bạn cần nhập số lượng phần tử trước, sau đó nhập giá trị cho từng phần tử.
- **Lưu ý:** Có thể khai báo mảng với kích thước cố định hoặc kích thước vừa đủ theo số lượng phần tử.

- Ví dụ 1: Nhập mảng với kích thước cố định.
  - Lưu ý: Nếu mảng có số lượng phần tử vượt quá 1000, chương trình sẽ bị lỗi do không đủ bộ nhớ.

```cpp
#include <stdio.h>

int main() {
    int n, a[1000]; // Mảng cố định tối đa 1000 phần tử

    printf("Nhap n: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Mang vua nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
```

- Ví dụ 2: Nhập mảng với kích thước vừa đủ
  - Lưu ý: Khai báo mảng với kích thước vừa đủ giúp tối ưu hóa bộ nhớ.

```cpp
#include <stdio.h>

int main() {
    int n;

    printf("Nhap n: ");
    scanf("%d", &n);

    int a[n]; // Mảng có kích thước vừa đủ

    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Mang vua nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
```

---

## 4. Mảng làm tham số

Bạn có thể truyền mảng làm tham số cho hàm trong C. Khi sử dụng mảng làm tham số, thường cần kèm theo một tham số khác để biểu thị số lượng phần tử trong mảng. Điều này giúp các thao tác trong hàm diễn ra chính xác và an toàn.

- Ví dụ 1: Hàm nhập và in mảng

  - Mô tả:
    - Hàm nhap() thực hiện việc nhập các phần tử vào mảng.
    - Hàm in() dùng để in các phần tử của mảng ra màn hình.
  - Code mẫu:

  ```cpp
    #include <stdio.h>

    // Hàm nhập giá trị cho mảng
    void nhap(int a[], int n) {
        for (int i = 0; i < n; i++) {
            printf("Nhap a[%d]: ", i);
            scanf("%d", &a[i]);
        }
    }

    // Hàm in giá trị của mảng
    void in(int a[], int n) {
        printf("Mang vua nhap: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i]);
        }
    }

    int main() {
        int n; // Số lượng phần tử của mảng
        printf("Nhap n: ");
        scanf("%d", &n);

        int a[n]; // Khai báo mảng với kích thước vừa đủ
        nhap(a, n); // Gọi hàm nhập mảng
        in(a, n);   // Gọi hàm in mảng

        return 0;
    }

    Output:
    Nếu nhập n = 5 và các giá trị lần lượt là 1 2 3 4 5, chương trình sẽ in:
    Mang vua nhap: 1 2 3 4 5
  ```

- Ví dụ 2: Thay đổi giá trị trong mảng thông qua hàm

  - Mô tả:
    - Hàm change() nhận một mảng và thay đổi giá trị tất cả các phần tử trong mảng thành 28.
  - Code mẫu:

  ```cpp
    #include <stdio.h>

    // Hàm thay đổi giá trị các phần tử trong mảng
    void change(int a[], int n) {
        for (int i = 0; i < n; i++) {
            a[i] = 28; // Thay đổi giá trị mỗi phần tử thành 28
        }
    }

    int main() {
        int m = 6;
        int b[6] = {1, 2, 3, 4, 5, 6}; // Khởi tạo mảng b với 6 phần tử

        change(b, m); // Gọi hàm change để thay đổi giá trị của mảng
        for (int i = 0; i < m; i++) {
            printf("%d ", b[i]); // In giá trị của mảng sau khi thay đổi
        }

        return 0;
    }

    Output:
    28 28 28 28 28 28
  ```

- Lưu ý:

  - Thay đổi trực tiếp trong mảng:

    - Khi truyền mảng vào hàm, mọi thay đổi được thực hiện bên trong hàm sẽ ảnh hưởng trực tiếp đến mảng gốc.
    - Điều này là do mảng trong C được truyền dưới dạng tham chiếu (reference).

  - Cách khai báo mảng trong hàm:

    - Khi khai báo tham số của một hàm là mảng, bạn không cần chỉ rõ kích thước của mảng trong phần khai báo.
    - Ví dụ: void nhap(int a[], int n); hoặc void nhap(int \*a, int n); đều hợp lệ.

  - Lợi ích:

    - Sử dụng mảng làm tham số giúp giảm thiểu việc sử dụng bộ nhớ, vì chỉ địa chỉ của mảng được truyền vào hàm thay vì sao chép toàn bộ mảng.

---

## 5. Xoá phần tử

Trong mảng một chiều, kích thước của mảng được khai báo cố định và không thể thay đổi. Vì vậy, khi xóa một phần tử khỏi mảng, mảng vẫn giữ nguyên kích thước, nhưng số phần tử được quản lý sẽ giảm đi.

### 5.1. Nguyên tắc xoá

- Khi xóa một phần tử, thay vì quản lý toàn bộ N phần tử ban đầu, ta chỉ quản lý N - 1 phần tử.
- Các phần tử phía sau phần tử bị xóa sẽ được dời sang trái để lấp chỗ trống.
- Kích thước logic của mảng (số phần tử đang được quản lý) giảm đi một đơn vị.

### 5.2. Bài toán minh hoạ

Cho mảng A[] gồm N phần tử, hãy xóa phần tử tại chỉ số K.

- Ví dụ:

  - Mảng ban đầu: A[] = {2, 3, 1, 5, 8, 9, 4}
  - Chỉ số cần xóa: K = 3
  - Mảng sau khi xóa: {2, 3, 1, 8, 9, 4}

- Thuật toán:

  - Bắt đầu từ chỉ số K.
  - Dời các phần tử từ chỉ số K + 1 tới chỉ số N - 1 sang trái.
  - Giảm số lượng phần tử N đi 1.

- Code mẫu:

```cpp
#include <stdio.h>

int main() {
    int n = 7; // Số lượng phần tử ban đầu
    int k = 3; // Chỉ số phần tử cần xóa
    int a[7] = {2, 3, 1, 5, 8, 9, 4}; // Mảng ban đầu

    // Thực hiện xóa phần tử
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1]; // Dịch phần tử sang trái
    }
    --n; // Giảm số lượng phần tử đi 1

    // In mảng sau khi xóa
    printf("Mang sau khi xoa: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
```

- Kết quả chạy chương trình:

  - Đầu vào:
    - Mảng: A[] = {2, 3, 1, 5, 8, 9, 4}
    - Chỉ số cần xóa: K = 3
  - Đầu ra:
    ```cpp
    Mang sau khi xoa: 2 3 1 8 9 4
    ```

### 5.3. Lưu ý khi thực hiện thao tác xoá:

- Xóa phần tử cuối mảng: Không cần dịch chuyển các phần tử. Chỉ cần giảm N đi 1.
- Chỉ số hợp lệ: Phải đảm bảo chỉ số K nằm trong khoảng [0, N - 1].
- Hiệu suất: Thao tác xóa có độ phức tạp O(N) trong trường hợp xóa các phần tử ở giữa hoặc đầu mảng.

---

## 6. Thao tác chèn

Việc chèn một phần tử mới vào mảng yêu cầu phải có một ô nhớ trống trong mảng để chứa phần tử đó. Vì vậy, khi khai báo mảng, bạn nên dự trù thêm vài phần tử để có không gian chèn.

### 6.1. Nguyên tắc chèn

- Khi chèn một phần tử, tất cả các phần tử sau vị trí cần chèn phải được dời sang phải để tạo không gian.
- Số phần tử quản lý trong mảng (kích thước logic) sẽ tăng lên một đơn vị.

### 6.2. Bài toán minh hoạ

Cho mảng A[] gồm N phần tử, hãy chèn phần tử X vào chỉ số K.

- Ví dụ:

  - Mảng ban đầu: A[] = {2, 3, 1, 5, 8, 9, 4}
  - Phần tử cần chèn: X = 100
  - Chỉ số cần chèn: K = 3
  - Mảng sau khi chèn: {2, 3, 1, 100, 5, 8, 9, 4}

- Thuật toán:

  - Dời các phần tử từ chỉ số K tới chỉ số N - 1 sang phải, thực hiện từ phải sang trái.
  - Gán giá trị X vào vị trí A[K].
  - Tăng số phần tử N lên 1.

- Code mẫu:

```cpp
#include <stdio.h>

int main() {
    int n = 7;          // Số lượng phần tử ban đầu
    int k = 3;          // Vị trí cần chèn
    int x = 100;        // Giá trị cần chèn
    int a[10] = {2, 3, 1, 5, 8, 9, 4}; // Mảng ban đầu

    // Dời các phần tử sang phải để tạo chỗ trống
    for (int i = n - 1; i >= k; i--) {
        a[i + 1] = a[i];
    }

    // Chèn giá trị X vào vị trí K
    a[k] = x;
    ++n; // Tăng số lượng phần tử lên 1

    // In mảng sau khi chèn
    printf("Mang sau khi chen: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
```

- Kết quả chạy chương trình:

  - Đầu vào:

    - Mảng: A[] = {2, 3, 1, 5, 8, 9, 4}
    - Giá trị cần chèn: X = 100
    - Vị trí cần chèn: K = 3

  - Đầu ra:
    ```cpp
    Mang sau khi chen: 2 3 1 100 5 8 9 4
    ```

### 6.3. Lưu ý khi thực hiện thao tác chèn

- Không vượt quá kích thước thực tế của mảng: Khi khai báo mảng, nên dành sẵn vài phần tử trống để có thể chèn thêm.
- Chỉ số hợp lệ: Vị trí K phải nằm trong khoảng [0, N].
- Hiệu suất: Thao tác chèn có độ phức tạp O(N) vì cần dịch chuyển các phần tử trong mảng.

---

## 7. Mảng đánh dấu

### 7.1. Lý thuyết

Mảng đánh dấu là một cấu trúc dữ liệu đơn giản dùng để ghi nhận trạng thái xuất hiện của các giá trị trong một tập hợp. Ý tưởng cốt lõi là sử dụng chỉ số của mảng để tương ứng với các giá trị cần đánh dấu. Mảng đánh dấu thường được sử dụng khi:

- Các giá trị thuộc đoạn cố định [0, max].
- Cần kiểm tra nhanh xem một giá trị có xuất hiện hay không.

Cách hoạt động:

- Khởi tạo mảng đánh dẫu mark[] có độ dài bằng giá trị lớn nhất cần đánh dấu.
- Mặc định tất cả phần tử trong mark[] bằng 0.
- Khi gặp giá trị x, đặt mark[x] = 1 để ghi nhận rằng x đã xuất hiện.

Ưu điểm: Tốc độ xử lý nhanh O(n) cho các bài toán liên quan đến kiểm tra, đếm tần suất hoặc liệt kê giá trị.

Nhược điểm:

- Không hỗ trợ giá trị âm (vì chỉ số mảng không âm).
- Tốn bộ nhớ nếu khoảng giá trị quá lớn.

### 7.2. Các bài toán ứng dụng

#### 7.2.1. Bài toán 1: Đếm giá trị khác nhau

- Đề bài: Đếm số giá trị khác nhau trong mảng A[] gồm N phần tử trong đoạn [$0, 10^6$]
- Ý tưởng:
  - Sử dụng mảng đánh dấu mark[] để ghi nhận các giá trị đã xuất hiện.
  - Cuối cùng, đếm số phần tử có giá trị mark[i] = 1.
- Code mẫu:

  ```cpp
    #include <stdio.h>

    int mark[1000001];

    int main() {
        int n = 8, dem = 0;
        int a[8] = {3, 1, 3, 0, 2, 4, 1, 6};

        for (int i = 0; i < n; i++) {
            mark[a[i]] = 1;
        }

        for (int i = 0; i <= 1000000; i++) {
            if (mark[i] == 1) ++dem;
        }

        printf("So luong phan tu khac nhau: %d\n", dem);
        return 0;
    }
  ```

#### 7.2.2. Bài toán 2: Liệt kê giá trị khác nhau

a) Bài toán 2.1. Liệt kê các giá trị khác nhau trong mảng theo thứ tự tăng dần.

- Ý tưởng: Sau khi đánh dấu, duyệt mảng mark[], in các chỉ số có giá trị 1.
- Code mẫu:

  ```cpp
    #include <stdio.h>

    int mark[1000001];

    int main() {
        int n = 10, max_val = 0;
        int a[10] = {3, 1, 3, 0, 2, 4, 1, 14, 12, 7};

        for (int i = 0; i < n; i++) {
            mark[a[i]] = 1;
            if (a[i] > max_val) max_val = a[i];
        }

        printf("Gia tri khac nhau: ");
        for (int i = 0; i <= max_val; i++) {
            if (mark[i] == 1) printf("%d ", i);
        }

        return 0;
    }
  ```

b) Bài toán 2.2: Liệt kê giá trị khác nhau theo thứ tự xuất hiện.

- Ý tưởng: Duyệt mảng A[]. Nếu gặp giá trị chưa in, in ra và bỏ đánh dấu giá trị đó.
- Code mẫu:

  ```cpp
    #include <stdio.h>

    int mark[1000001];

    int main() {
        int n = 10;
        int a[10] = {3, 1, 3, 0, 2, 4, 1, 14, 12, 7};

        printf("Gia tri khac nhau theo thu tu xuat hien: ");
        for (int i = 0; i < n; i++) {
            if (mark[a[i]] == 0) {
                printf("%d ", a[i]);
                mark[a[i]] = 1;
            }
        }

        return 0;
    }
  ```

#### 7.2.3. Tần suất

- Đề bài: Đếm số lần xuất hiện của mỗi phần tử trong mảng A[] và in theo thứ tự tăng dần.
- Ý tưởng: Sử dụng mark[] để đếm số lần xuất hiện của mỗi giá trị.
- Code mẫu:

  ```cpp
    #include <stdio.h>

    int mark[1000001];

    int main() {
        int n = 10, max_val = 0;
        int a[10] = {3, 1, 3, 0, 2, 4, 1, 14, 3, 2};

        for (int i = 0; i < n; i++) {
            mark[a[i]]++;
            if (a[i] > max_val) max_val = a[i];
        }

        for (int i = 0; i <= max_val; i++) {
            if (mark[i] > 0) {
                printf("%d xuat hien %d lan\n", i, mark[i]);
            }
        }

        return 0;
    }
  ```

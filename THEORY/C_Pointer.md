# Con trỏ - Pointer

---

## 1. Con trỏ và Địa chỉ

### 1.1. Khái niệm về con trỏ

- **Con trỏ (pointer)** là một biến lưu trữ `địa chỉ` của một biến khác trong bộ nhớ.
- Ví dụ: Nếu một biến kiểu `int` có một địa chỉ nhất định trong bộ nhớ, con trỏ kiểu `int` có thể lưu trữ địa chỉ đó.

### 1.2. Cú pháp khai báo con trỏ

- Khi khai báo con trỏ, thêm dấu `*` trước tên biến con trỏ.

- **Cú pháp**: `Kiểu_Dữ_Liệu *Tên_Biến_Con_Trỏ;`

- Ví dụ:

```cpp
    int *ptr;        // Con trỏ kiểu int
    long long* ptr2; // Con trỏ kiểu long long
    char *ptr3;      // Con trỏ kiểu char
```

### 1.3. Địa chỉ biến và toán tử `&`

- Mỗi biến trong chương trình được cấp phát một vùng nhớ để lưu trữ giá trị. Toán tử `&` giúp lấy địa chỉ của một biến.

- Ví dụ:

```cpp
    int N = 28;
    printf("Địa chỉ của N: %d\n", &N);
```

- Kết quả: Địa chỉ bộ nhớ của biến N được in ra màn hình.

### 1.4. Con trỏ lưu trữ địa chỉ biến

- Con trỏ kiểu dữ liệu nào sẽ lưu trữ địa chỉ của biến có cùng kiểu dữ liệu đó. Khi một con trỏ lưu trữ địa chỉ của biến, ta nói con trỏ "trỏ tới" biến đó.

- Ví dụ:

```cpp
    int N = 1000;
    int *ptr = &N;
    printf("Địa chỉ của N: %d\n", &N);
    printf("Giá trị của ptr: %d\n", ptr); // Ptr trỏ tới N
```

---

## 2. Tham chiếu và Giải tham chiếu

### 2.1. Tham chiếu qua con trỏ

- Khi con trỏ "trỏ tới" một biến, nó có thể thay đổi hoặc truy xuất giá trị của biến đó thông qua toán tử giải tham chiếu \*.

- Lưu ý: Phân biệt dấu \* khi khai báo con trỏ (chỉ định con trỏ) và khi giải tham chiếu (truy xuất giá trị).

- Ví dụ:

```cpp
    int N = 1000;
    int *ptr = &N;
    *ptr = 280;  // Thay đổi giá trị của N thông qua ptr
    printf("N: %d\n", N); // Kết quả: 280
```

### 2.2. Một biến được trỏ bởi nhiều con trỏ

- Một biến có thể được trỏ tới bởi nhiều con trỏ khác nhau. Mọi con trỏ trỏ đến cùng một biến sẽ truy cập hoặc thay đổi cùng giá trị.

```cpp
    int N = 1000;
    int *ptr1 = &N, *ptr2 = &N, *ptr3 = ptr1;
    *ptr1 = 100;
    *ptr2 = 200;
    *ptr3 = 300; // Giá trị của N là 300
```

---

## 3. Hàm và Con trỏ

### 3.1. Con trỏ làm tham số của hàm

- Khi truyền một con trỏ vào hàm, bạn có thể thay đổi giá trị của biến được trỏ tới ngay cả khi hàm kết thúc.

- Ví dụ 1: Thay đổi giá trị của biến

```cpp
    void change(int *x) {
        *x = 1000;
    }

    int main() {
        int N = 28;
        change(&N);
        printf("N: %d\n", N); // Kết quả: 1000
        return 0;
    }
```

- Ví dụ 2: Hoán đổi giá trị của hai biến

```cpp
    void swap(int *x, int *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
    }

    int main() {
        int a = 100, b = 200;
        swap(&a, &b);
        printf("a: %d, b: %d\n", a, b); // Kết quả: a=200, b=100
        return 0;
    }
```

### 3.2. Hàm trả về con trỏ

- Một hàm có thể trả về một con trỏ, thường được sử dụng để trả về địa chỉ của một biến hoặc cấu trúc dữ liệu.

- Ví dụ:

```cpp
    int* convert(int *x, int *y) {
        x = y;
        return x;
    }

    int main() {
        int N = 28, M = 56;
        int *ptr1 = &N, *ptr2 = &M;
        ptr1 = convert(ptr1, ptr2);
        printf("ptr1: %d, ptr2: %d\n", ptr1, ptr2);
        return 0;
    }
```

---

## 4. Con trỏ cấp 2

### 4.1. Con trỏ cấp 2

- Biến con trỏ cũng có địa chỉ riêng, và nếu bạn muốn lưu địa chỉ này, bạn cần sử dụng con trỏ tới con trỏ.

- Tương tự, để lưu địa chỉ của con trỏ cấp 2, bạn cần con trỏ cấp 3; với con trỏ cấp 3 thì cần con trỏ cấp 4...
- Số lượng dấu \* trước tên biến sẽ cho biết cấp độ của con trỏ:
  - `*ptr`: Con trỏ cấp 1.
  - `**ptr`: Con trỏ cấp 2.
  - `***ptr`: Con trỏ cấp 3.

1. Ví dụ 1: Con trỏ cấp 2

```cpp
#include <stdio.h>

int main() {
    int N = 28;
    int *ptr1 = &N;    // Con trỏ cấp 1
    int **ptr2 = &ptr1; // Con trỏ cấp 2

    printf("Dia chi cua N : %d\n", &N);
    printf("Gia tri cua ptr1 : %d\n", ptr1);
    printf("Dia chi cua ptr1 : %d\n", &ptr1);
    printf("Gia tri cua ptr2 : %d\n", ptr2);
    printf("Giai tham chieu ptr2 : %d\n", *ptr2);
    printf("Giai tham chieu 2 lan ptr2 : %d\n", **ptr2);
    return 0;
}
```

Output:

```
Dia chi cua N : 6487572
Gia tri cua ptr1 : 6487572
Dia chi cua ptr1 : 6487576
Gia tri cua ptr2 : 6487576
Giai tham chieu ptr2 : 6487572
Giai tham chieu 2 lan ptr2 : 28
```

- Giải thích:
  - ptr1 lưu địa chỉ của N nên giá trị của ptr1 là 6487572.
  - ptr2 trỏ tới ptr1, nên giá trị của ptr2 là địa chỉ của ptr1 (6487576).
  - \*ptr2 giúp truy xuất giá trị mà ptr2 đang trỏ tới, tức là ptr1.
  - \*\*ptr2 truy xuất giá trị mà ptr1 đang trỏ tới, tức là giá trị của N.

2. Ví dụ 2: Con trỏ cấp 3

```cpp
#include <stdio.h>

int main() {
    int N = 28;
    int *ptr1 = &N;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    printf("Dia chi cua N : %d\n", &N);
    printf("Dia chi cua ptr1 : %d\n", &ptr1);
    printf("Dia chi cua ptr2 : %d\n", &ptr2);
    printf("Gia tri cua ptr1 : %d\n", ptr1);
    printf("Gia tri cua ptr2 : %d\n", ptr2);
    printf("Gia tri cua ptr3 : %d\n", ptr3);
    printf("Giai tham chieu ptr3 : %d\n", *ptr3);
    printf("Giai tham chieu 2 lan ptr3 : %d\n", **ptr3);
    printf("Giai tham chieu 3 lan ptr3 : %d\n", ***ptr3);
    return 0;
}
```

Output:

```
Dia chi cua N : 6487564
Dia chi cua ptr1 : 6487568
Dia chi cua ptr2 : 6487576
Gia tri cua ptr1 : 6487564
Gia tri cua ptr2 : 6487568
Gia tri cua ptr3 : 6487576
Giai tham chieu ptr3 : 6487568
Giai tham chieu 2 lan ptr3 : 6487564
Giai tham chieu 3 lan ptr3 : 28
```

### 4.2. Hàm và Con trỏ cấp 2

Để thay đổi giá trị của biến thông qua hàm, ta sử dụng con trỏ. Nhưng để thay đổi giá trị của con trỏ thông qua hàm, bạn cần sử dụng con trỏ cấp 2.

1. Ví dụ 1: Thay đổi con trỏ cấp 1 qua hàm (Thất bại)

```cpp
#include <stdio.h>

void change(int *x, int *y) {
    x = y; // Gán x = y, nhưng không ảnh hưởng tới ptr1
}

int main() {
    int N = 28, M = 56;
    int *ptr1 = &N;
    int *ptr2 = &M;

    printf("Truoc khi goi ham:\n");
    printf("Gia tri cua ptr1: %d\n", ptr1);
    printf("Gia tri cua ptr2: %d\n", ptr2);

    change(ptr1, ptr2);

    printf("Sau khi goi ham:\n");
    printf("Gia tri cua ptr1: %d\n", ptr1);
    printf("Gia tri cua ptr2: %d\n", ptr2);

    return 0;
}
```

Output:

```
Truoc khi goi ham:
Gia tri cua ptr1: 6487560
Gia tri cua ptr2: 6487564
Sau khi goi ham:
Gia tri cua ptr1: 6487560
Gia tri cua ptr2: 6487564
```

- Giải thích: `change` chỉ gán x = y, nhưng không ảnh hưởng tới giá trị của ptr1 và ptr2 do x và ptr1 là hai biến khác nhau.

2. Ví dụ 2: Thay đổi con trỏ cấp 1 qua hàm bằng con trỏ cấp 2

```cpp
#include <stdio.h>

void change(int **x, int *y) {
    *x = y; // Gán giá trị của con trỏ cấp 1
}

int main() {
    int N = 28, M = 56;
    int *ptr1 = &N;
    int *ptr2 = &M;

    printf("Truoc khi goi ham:\n");
    printf("Gia tri cua ptr1: %d\n", ptr1);
    printf("Gia tri cua ptr2: %d\n", ptr2);

    change(&ptr1, ptr2);

    printf("Sau khi goi ham:\n");
    printf("Gia tri cua ptr1: %d\n", ptr1);
    printf("Gia tri cua ptr2: %d\n", ptr2);

    return 0;
}
```

Output:

```
Truoc khi goi ham:
Gia tri cua ptr1: 6487576
Gia tri cua ptr2: 6487580
Sau khi goi ham:
Gia tri cua ptr1: 6487580
Gia tri cua ptr2: 6487580
```

- Giải thích:
  - `change` thay đổi giá trị của ptr1 bằng cách truy xuất địa chỉ của nó qua &ptr1.
  - Nhờ sử dụng con trỏ cấp 2, hàm đã thay đổi thành công giá trị của con trỏ ptr1.

---

## 5. Con trỏ và Mảng một chiều

### 5.1. Con trỏ và Mảng

- Tên của một mảng (ví dụ: A[]) chính là một hằng con trỏ, chứa địa chỉ của phần tử đầu tiên trong mảng (&A[0]).
- Không thể thay đổi địa chỉ mà tên mảng trỏ tới.
- Với một mảng 1 chiều A[], con trỏ có thể được dùng để truy cập các phần tử:
  - A + i tương đương với &A[i] (địa chỉ phần tử A[i]).
  - \*(A + i) tương đương với A[i] (giá trị tại phần tử A[i]).

Ví dụ : Sử dụng Con trỏ với Mảng

```cpp
#include <stdio.h>

int main() {
    int n = 5;
    int a[5] = {3, 8, 4, 2, 9};
    printf("Gia tri cua a (dia chi cua A[0]): %d\n", a);

    for (int i = 0; i < n; i++) {
        printf("Dia chi cua a[%d]: %d\n", i, a + i); // a + i <=> &a[i]
    }

    printf("Mang a: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(a + i)); // *(a + i) <=> a[i]
    }
    return 0;
}
```

Output:

```
Gia tri cua a (dia chi cua A[0]): 6487520
Dia chi cua a[0]: 6487520
Dia chi cua a[1]: 6487524
Dia chi cua a[2]: 6487528
Dia chi cua a[3]: 6487532
Dia chi cua a[4]: 6487536
Mang a: 3 8 4 2 9
```

- Giải thích:
  - Mỗi phần tử trong mảng chiếm 4 byte (giả sử kiểu int), do đó địa chỉ của phần tử tăng dần theo bội số của 4.
  - Tên mảng a trỏ tới phần tử đầu tiên trong mảng.

### 5.2. Các phép tính với Con trỏ trong Mảng

- Sử dụng con trỏ để di chuyển qua các phần tử trong mảng bằng các phép toán:
  - ptr++, ptr-- (di chuyển từng bước).
  - ptr += n, ptr -= n (nhảy n bước).
- Lưu ý: Không thể thay đổi hằng con trỏ (ví dụ: không di chuyển trực tiếp a++).

Ví dụ: Di chuyển con trỏ trong mảng

```cpp
#include <stdio.h>

int main() {
    int n = 5;
    int a[5] = {3, 8, 4, 2, 9};
    int *ptr = &a[0];

    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); // Truy cập từng phần tử qua con trỏ
    }

    printf("\n");
    ++ptr; // Con trỏ trỏ tới a[1]
    printf("%d\n", *ptr);

    ptr += 2; // Con trỏ nhảy tới a[3]
    printf("%d\n", *ptr);

    --ptr; // Quay lại a[2]
    printf("%d\n", *ptr);

    return 0;
}
```

Output:

```
3 8 4 2 9
8
2
4
```

- Giải thích:
  - ++ptr: Con trỏ nhảy từ phần tử hiện tại (a[0]) sang phần tử kế tiếp (a[1]).
  - ptr += 2: Con trỏ nhảy từ a[1] sang a[3].

### 5.3. Ứng dụng phép toán con trỏ

- Phép tính trên con trỏ có thể dùng để tạo các thao tác phức tạp trong mảng.

Ví dụ: Phép toán nâng cao với con trỏ

```cpp
#include <stdio.h>

int main() {
    int n = 10;
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &a[3]; // ptr bắt đầu tại a[3]

    ptr += a[2]; // ptr += 3 (giá trị của a[2]) => tới a[6]
    printf("%d %d %d\n", ptr, &a[6], *ptr);

    --ptr; // Lùi lại a[5]
    printf("%d %d %d\n", ptr, &a[5], *ptr);

    return 0;
}
```

Output:

```
6487560 6487560 7
6487556 6487556 6
```

- Giải thích:
  - ptr += a[2]: Giá trị của a[2] là 3, nên con trỏ di chuyển từ a[3] tới a[6].
  - --ptr: Lùi lại một bước từ a[6] về a[5].

Lưu Ý:

- Chỉ được thay đổi địa chỉ con trỏ, không thể thay đổi hằng con trỏ (tên mảng).
- Việc sử dụng phép toán trên con trỏ cần thận trọng, tránh truy cập ra ngoài phạm vi mảng gây lỗi.

---

## 6. Cấp phát động

### 6.1. Tổng quan

- Cấp phát động diễn ra trên vùng nhớ heap, không giống vùng nhớ tĩnh trên stack.
- Cung cấp khả năng cấp phát và giải phóng vùng nhớ trong runtime.
- Trong C, thư viện <stdlib.h> hỗ trợ các hàm chính để thao tác với bộ nhớ động:
  - malloc()
  - calloc()
  - free()
  - realloc()

### 6.2. Hàm malloc()

- Mô tả:
  - Dùng để cấp phát một khối bộ nhớ động theo kích thước chỉ định (theo byte).
  - Trả về con trỏ kiểu void\* (cần ép kiểu sang con trỏ kiểu dữ liệu cụ thể).
  - Vùng nhớ được cấp phát chứa giá trị rác ban đầu.
- Cú pháp:

```cpp
ptr = (cast_type*) malloc(byte_size);
```

- Ví dụ:

```cpp
int *arr = (int*) malloc(5 * sizeof(int));
if (arr == NULL) {
    printf("Không thể cấp phát bộ nhớ.\n");
} else {
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    free(arr); // Giải phóng bộ nhớ
}
```

Output:

```
1 2 3 4 5
```

### 6.3. Hàm calloc()

- Mô tả:
  - Tương tự malloc(), nhưng đảm bảo tất cả vùng nhớ được khởi tạo bằng 0.
  - Cấp phát dựa trên số lượng phần tử và kích thước mỗi phần tử.
- Cú pháp:

```cpp
ptr = (cast_type*) calloc(n, element_size);
```

- Ví dụ:

```cpp
int *arr = (int*) calloc(5, sizeof(int));
if (arr == NULL) {
    printf("Không thể cấp phát bộ nhớ.\n");
} else {
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]); // In ra toàn 0
    }
    free(arr); // Giải phóng bộ nhớ
}
```

Output:

```
0 0 0 0 0
```

### 6.4. Hàm free()

- Mô tả:
  - Dùng để giải phóng vùng nhớ động đã được cấp phát bởi malloc() hoặc calloc().
  - Việc không giải phóng bộ nhớ có thể gây lãng phí tài nguyên (memory leak).
- Cú pháp:

```cpp
free(ptr);
```

- Ví dụ:

```cpp
int *arr = (int*) malloc(5 * sizeof(int));
if (arr != NULL) {
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }
    free(arr); // Giải phóng bộ nhớ
    printf("Bộ nhớ đã được giải phóng.\n");
}
```

### 6.5. Hàm realloc()

- Mô tả:
  - Dùng để thay đổi kích thước vùng nhớ đã được cấp phát bởi malloc() hoặc calloc().
  - Giữ nguyên dữ liệu cũ trong vùng nhớ (nếu có thể), bổ sung vùng nhớ mới với giá trị rác.
- Cú pháp:

```cpp
ptr = (cast_type*) realloc(ptr, new_size);
```

Ví dụ:

```cpp
int *arr = (int*) malloc(3 * sizeof(int));
if (arr != NULL) {
    for (int i = 0; i < 3; i++) {
        arr[i] = i + 1; // 1, 2, 3
    }
    arr = (int*) realloc(arr, 5 * sizeof(int));
    for (int i = 3; i < 5; i++) {
        arr[i] = i + 1; // 4, 5
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr); // Giải phóng bộ nhớ
}
```

Output:

```
1 2 3 4 5
```

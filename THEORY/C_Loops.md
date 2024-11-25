# Vòng lặp

---

## 1. Vòng lặp for

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

## 2. Vòng lặp while

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

## 3. Vòng lặp do-while

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

## 4. Câu lệnh break và continue

### 4.1. Câu lệnh break

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

---

### 4.2. Câu lệnh continue

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

---

### 4.3. So sánh break và continue

| **Tính năng**       | **`break`**                     | **`continue`**                     |
| ------------------- | ------------------------------- | ---------------------------------- |
| **Chức năng**       | Kết thúc vòng lặp.              | Bỏ qua phần còn lại của lần lặp.   |
| **Phạm vi áp dụng** | Dừng vòng lặp gần nhất chứa nó. | Chỉ bỏ qua trong lần lặp hiện tại. |

---

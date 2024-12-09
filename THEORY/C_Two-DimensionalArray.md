# Mảng 2 chiều - Two-dimensional Array

---

## 1. Mảng 2 chiều

Mảng 2 chiều trong ngôn ngữ C được sử dụng để lưu trữ dữ liệu dạng bảng, gồm các hàng và cột. Mảng 2 chiều là một mảng chứa các mảng 1 chiều, cho phép truy cập các phần tử thông qua chỉ số hàng và cột, bắt đầu từ 0.

- Cú pháp khai báo:
  ```cpp
  data_type array_name[rows][cols];
  ```
- Trong đó:

  - data_type: Kiểu dữ liệu (e.g., int, float, char).
  - array_name: Tên của mảng.
  - rows: Số hàng.
  - cols: Số cột.

- Ví dụ:

  ```cpp
  #include <stdio.h>

  int main() {
      int a[3][4] = {
          {1, 2, 3, 1},
          {4, 1, 5, 2},
          {3, 7, 9, 0}
      };
      printf("Phan tu o hang %d, cot %d la: %d\n", 1, 2, a[1][2]);
      printf("Phan tu o hang %d, cot %d la: %d\n", 2, 2, a[2][2]);
      return 0;
  }

  Output:
  Phan tu o hang 1, cot 2 la: 5
  Phan tu o hang 2, cot 2 la: 9
  ```

## 2. Nhập và Xuất Mảng 2 chiều

Để nhập và xuất mảng 2 chiều, sử dụng vòng lặp lồng nhau. Vòng lặp ngoài duyệt qua các hàng, vòng lặp trong duyệt qua từng cột.

- Ví dụ 1: Nhập và xuất mảng cố định

  ```cpp
  #include <stdio.h>

  int main() {
      int n, m; // n: số hàng, m: số cột
      int a[205][205];
      printf("Nhap so hang, cot: ");
      scanf("%d%d", &n, &m);

      for(int i = 0; i < n; i++) {
          for(int j = 0; j < m; j++) {
              printf("a[%d][%d] = ", i, j);
              scanf("%d", &a[i][j]);
          }
      }

      printf("Mang vua nhap:\n");
      for(int i = 0; i < n; i++) {
          for(int j = 0; j < m; j++) {
              printf("%d ", a[i][j]);
          }
          printf("\n");
      }
      return 0;
  }
  ```

- Ví dụ 2: Nhập mảng với số hàng và cột thay đổi

  ```cpp
  #include <stdio.h>

  int main() {
      int n, m; // n: số hàng, m: số cột
      printf("Nhap so hang, cot: ");
      scanf("%d%d", &n, &m);
      int a[n][m];

      for(int i = 0; i < n; i++) {
          for(int j = 0; j < m; j++) {
              printf("a[%d][%d] = ", i, j);
              scanf("%d", &a[i][j]);
          }
      }

      printf("Mang vua nhap:\n");
      for(int i = 0; i < n; i++) {
          for(int j = 0; j < m; j++) {
              printf("%d ", a[i][j]);
          }
          printf("\n");
      }
      return 0;
  }
  ```

## 3. Mảng 2 chiều và Hàm

Mảng 2 chiều có thể được truyền làm tham số cho hàm. Khi đó, bạn cần xác định số cột của mảng trong tham số.

- Ví dụ 1: Hàm nhập và xuất mảng

  ```cpp
  #include <stdio.h>

  void nhap(int a[][205], int n, int m) {
      for(int i = 0; i < n; i++) {
          for(int j = 0; j < m; j++) {
              printf("a[%d][%d] = ", i, j);
              scanf("%d", &a[i][j]);
          }
      }
  }

  void xuat(int a[][205], int n, int m) {
      printf("Mang 2 chieu:\n");
      for(int i = 0; i < n; i++) {
          for(int j = 0; j < m; j++) {
              printf("%d ", a[i][j]);
          }
          printf("\n");
      }
  }

  int main() {
      int n, m;
      int a[205][205];
      printf("Nhap so hang, cot: ");
      scanf("%d%d", &n, &m);

      nhap(a, n, m);
      xuat(a, n, m);

      return 0;
  }
  ```

- Ví dụ 2: Đếm số nguyên tố trong mảng 2 chiều

  ```cpp
  #include <stdio.h>
  #include <math.h>

  int isPrime(int n) {
      if (n < 2) return 0;
      for (int i = 2; i <= sqrt(n); i++) {
          if (n % i == 0) return 0;
      }
      return 1;
  }

  void nhap(int a[][205], int n, int m) {
      for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
              printf("a[%d][%d] = ", i, j);
              scanf("%d", &a[i][j]);
          }
      }
  }

  void xuat(int a[][205], int n, int m) {
      printf("Mang 2 chieu:\n");
      for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
              printf("%d ", a[i][j]);
          }
          printf("\n");
      }
  }

  int countPrimes(int a[][205], int n, int m) {
      int count = 0;
      for (int i = 0; i < n; i++) {
          for (int j = 0; j < m; j++) {
              if (isPrime(a[i][j])) {
                  count++;
              }
          }
      }
      return count;
  }

  int main() {
      int n, m;
      int a[205][205];
      printf("Nhap so hang, cot: ");
      scanf("%d%d", &n, &m);

      nhap(a, n, m);
      xuat(a, n, m);
      printf("So luong so nguyen to trong mang: %d\n", countPrimes(a, n, m));

      return 0;
  }
  ```

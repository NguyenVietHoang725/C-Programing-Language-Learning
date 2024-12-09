# Struct - Cấu trúc

---

## 1. Struct là gì?

### 1.1. Khái niệm

Struct (cấu trúc) là kiểu dữ liệu do người dùng tự định nghĩa, giúp nhóm nhiều kiểu dữ liệu khác nhau thành một kiểu dữ liệu chung để lưu trữ thông tin phức tạp.

### 1.2. Cú pháp

- Cú pháp khai báo:
  ```cpp
  struct ten_struct {
      data_type1 data_field1;
      data_type2 data_field2;
      ...
  };
  ```
- Ví dụ:
  ```cpp
  struct SinhVien {
      char hoten[50];
      char email[50];
      char lop[30];
      double gpa;
  };
  ```

### 1.3. Cách sử dụng

- Cách sử dụng:
  - Khai báo biến thuộc kiểu struct.
  - Truy cập các trường thông tin bằng toán tử.
- Ví dụ:
  ```cpp
  SinhVien sv;
  strcpy(sv.hoten, "Nguyen Van A");
  sv.gpa = 3.5;
  printf("Ho ten: %s\n", sv.hoten);
  printf("Diem GPA: %.2lf\n", sv.gpa);
  ```

---

## 2. Sử dụng typedef với Struct

Để tiện sử dụng, có thể dùng từ khóa typedef để đặt tên ngắn gọn cho struct.

- Ví dụ:

  ```cpp
  typedef struct SinhVien {
      char hoten[50];
      char email[50];
      char lop[30];
      double gpa;
  } SinhVien;

  SinhVien sv;
  ```

---

## 3. Struct lồng nhau

Struct có thể chứa một struct khác làm kiểu dữ liệu cho trường thông tin của nó.

- Ví dụ:

  ```cpp
  struct TacGia {
      char hoten[100];
      char quoctich[100];
  };

  struct Sach {
      TacGia tg;
      char tensach[100];
      int giaban;
  };
  ```

- Cách sử dụng:
  ```cpp
  Sach s;
  strcpy(s.tensach, "Lap Trinh C");
  strcpy(s.tg.hoten, "John Doe");
  printf("Sach: %s - Tac gia: %s\n", s.tensach, s.tg.hoten);
  ```

---

## 4. Struct làm tham số cho hàm

Struct có thể được truyền vào hàm hoặc được trả về từ hàm giống các kiểu dữ liệu khác.

- Ví dụ:

  ```cpp
  struct CauThu {
      char hoten[50];
      char clb[50];
      int banthang;
  };

  CauThu nhap() {
      CauThu ct;
      printf("Nhap ten cau thu: ");
      gets(ct.hoten);
      return ct;
  }

  void xuat(CauThu ct) {
      printf("Ten: %s - CLB: %s\n", ct.hoten, ct.clb);
  }

  int main() {
      CauThu ct = nhap();
      xuat(ct);
      return 0;
  }
  ```

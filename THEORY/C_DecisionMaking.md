# Cấu trúc rẽ nhánh - If Else

---

## 1. Câu lệnh if

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

---

## 2. Câu lệnh if else

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

---

## 3. Câu lệnh if else lồng nhau

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

---

## 4. Câu lệnh if else if

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

# Cấu trúc rẽ nhánh - Switch Case

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

# Câu lệnh goto

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

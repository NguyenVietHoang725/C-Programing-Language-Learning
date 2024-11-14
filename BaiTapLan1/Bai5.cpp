#include <stdio.h>

int main() {
    int n;
    
    repeat:
    printf("Nhap so tu nhien n (1 <= n <= 9): ");
    scanf("%d", &n);

    if (n < 1 || n > 9) {
        printf("Gia tri nhap vao khong hop le. Vui long nhap lai!.\n");
        goto repeat; 
    }

    printf("\nBang cuu chuong cua %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i); 
    }

    return 0;
}

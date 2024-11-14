#include <stdio.h>

int main() {
    int n, sum = 0;
// 	Cach 1:    
//    do {
//    	printf("Nhap so tu nhien n: ");
//    	scanf("%d", &n);
//	} while (n < 0);

// 	Cach 2:
	repeat:
	printf("Nhap so tu nhien n: ");
	scanf("%d", &n);
	if (n < 0) {
		printf("Gia tri cua n nhap vao khong hop le. Vui long nhap lai!\n");
		goto repeat;
	}

    while (n > 0) {
        sum += n % 10;  
        n /= 10;        
    }

    printf("Tong cac chu so cua so vua nhap la: %d", sum);

    return 0;
}
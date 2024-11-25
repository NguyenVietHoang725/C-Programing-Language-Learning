#include <stdio.h>

int main() {
	int n;
	
    repeat:
	printf("Nhap so tu nhien n: ");
	scanf("%d", &n);
	if (n < 0) {
		printf("Gia tri cua n nhap vao khong hop le. Vui long nhap lai!\n");
		goto repeat;
	}

    int a = 0, b = 1; 

    printf("Day so Fibonacci nho hon %d la: ", n);

    while (a < n) {
        printf("%d ", a); 
        int next = a + b; 
        a = b;            
        b = next;         
    }
}
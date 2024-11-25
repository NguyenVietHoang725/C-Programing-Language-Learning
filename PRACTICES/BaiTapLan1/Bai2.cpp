#include <stdio.h>

int main() {
    int n;
    repeat:
    printf("Nhap so tu nhien n: ");
    scanf("%d", &n);
    
    if (n <= 1) {
    	printf("So tu nhien vua nhap khong hop le. Vui long nhap lai!\n");
    	goto repeat;
	}

    printf("Cac so nguyen to nho hon %d la: ", n);

    for (int i = 2; i < n; i++) {
        int isPrime = 1;  
        for (int j = 2; j * j <= i; j++) { 
            if (i % j == 0) { 
                isPrime = 0; 
                break;       
            }
        }
        if (isPrime) {
            printf("%d ", i); 
        }
    }
    
    return 0;
}
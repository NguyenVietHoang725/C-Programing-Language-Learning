#include <stdio.h>

int main() {
	// Nhap n
	int n;
	do {
		printf("Nhap so luong so nguyen: ");
		scanf("%d", &n);
		if (n <= 0) {
			printf("Gia tri khong hop le. Vui long nhap lai!\n");
		}
	} while (n <= 0);
	
	// Nhap mang
	int a[100];
	printf("\nNhap lan luot %d phan tu cua mang:\n", n);
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
	}
	
	// Xuat mang
	printf("\nMang %d phan tu vua nhap la: ", n);
	for (int i = 0; i < n; i++) {
		if (i != n-1) printf("%d, ", a[i]);
		else printf("%d.\n", a[i]);
	}
	
	// Kiem tra va in ra cac so nguyen to
    printf("\nCac so nguyen to trong mang la: ");
    int count = 0;
    for (int i = 0; i < n; i++) {
        int num = a[i];
        if (num < 2) continue; // Loai bo cac so nho hon 2 (khong phai so nguyen to)
        
        int isPrime = 1; // Gia su num la so nguyen to
        for (int j = 2; j * j <= num; j++) {
            if (num % j == 0) {
                isPrime = 0; // num khong phai so nguyen to
                break;
            }
        }
        if (isPrime) {
            printf("%d ", num);
            count++;
        }
    }
    
    if (count != 0) {
    	printf("\nVay co tat ca %d so nguyen to trong mang.", count);
	}
    
    // Neu khong co so nguyen to nao
    if (count == 0) {
        printf("\nKhong co so nguyen to nao trong mang.");
    }
    
    return 0;
}
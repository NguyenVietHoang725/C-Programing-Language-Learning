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
	
	// Nhap yeu cau
	char q;
	re:
	getchar();
	printf("\nNhap yeu cau (t/g): ");
	scanf("%c", &q);
	
	// Sap xep
	if (q == 't') {
		for (int i = 0; i < n-1; i++) {
			for (int j = i+1; j < n; j++) {
				if (a[i] > a[j]) {
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		printf("\nMang sap xep tang dan la: ");
	} else if (q == 'g') {
		for (int i = 0; i < n-1; i++) {
			for (int j = i+1; j < n; j++) {
				if (a[i] < a[j]) {
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
			}
		}
		printf("\nMang sap xep giam dan la: ");
	} else {
		printf("Gia tri khong hop le. Vui long nhap lai!\n");
		goto re;
	}
	
	// In mang sau khi sap xep
	for (int i = 0; i < n; i++) {
		if (i != n-1) printf("%d, ", a[i]);
		else printf("%d.\n", a[i]);
	}
	
	return 0;
}
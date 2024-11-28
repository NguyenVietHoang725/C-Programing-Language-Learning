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
	
	// Nhap x
	int x;
	printf("Nhap so nguyen x bat ky: ");
	scanf("%d", &x);
	
	// Dem 
	int cntX = 0, cntL = 0, cntC = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == x) cntX++;
		
		if (a[i] % 2 == 0) cntC++;
		else cntL++;
	}
	
	// Dem so luong so x trong mang
	if (cntX == 0) printf("Khong ton tai so nguyen x trong mang!\n");
	else printf("Co tat ca %d so nguyen x trong mang!\n", cntX);
	
	// Nhap yeu cau
	re:
	getchar();
	char q;
	printf("\nNhap yeu cau (c/l): ");
	scanf("%c", &q);
	
	// Dem va in chan, le
	if (q == 'c') {
		if (cntC == 0) printf("Khong ton tai so chan nao trong mang!\n");
		else {
			printf("Co tat ca %d so chan, do la: ", cntC);
			for (int i = 0; i < n; i++) {
				if (a[i] % 2 == 0) {
					if (i != n-1) printf("%d, ", a[i]);
					else printf("%d.", a[i]);
				}
			}
		}
	} else if (q == 'l') {
		if (cntL == 0) printf("Khong ton tai so le nao trong mang!\n");
		else {
			printf("Co tat ca %d so le, do la: ", cntL);
			for (int i = 0; i < n; i++) {
				if (a[i] % 2 != 0) {
					if (i != n-1) printf("%d, ", a[i]);
					else printf("%d.", a[i]);
				}
			}
		}
	} else {
		printf("Gia tri khong hop le. Vui long nhap lai!\n");
		goto re;
	}
	
	return 0;	
}
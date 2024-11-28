#include <stdio.h>

int main() {
	int a[100];
	int n, sum = 0, max = -999999;
	do {
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d", &n);
		if (n <= 0) {
			printf("Gia tri nhap vao khong thoa man. Vui long nhap lai!\n");
		}
	} while (n <= 0);
	
	for (int i = 0; i < n; i++) {
		printf("Nhap a[%d] = ", i);
		scanf("%d", &a[i]);
		sum += a[i];
		if (a[i] > max) {
			max = a[i];
		}
	}
	
	printf("Mang vua nhap la: ");
	for (int i = 0; i < n; i++) {
		if (i != n-1) printf("%d, ", a[i]);
		else printf("%d.\n", a[i]);
	}
		
	char q;
	re:
	getchar();
	printf("\nNhap yeu cau (s/a): ");
	scanf("%c", &q);
	
	if (q == 's') {
		printf("Tong cac phan tu cua mang bang: %d", sum);
	} else if (q == 'a') {
		printf("Trung binh cong cac phan tu cua mang bang: %.2f", 1.0 * sum / n);
	} else {
		printf("Yeu cau khong ton tai. Vui long nhap lai!\n");
		goto re;
	}
	
	printf("\nPhan tu lon nhat trong mang co gia tri bang %d", max);
	
	return 0;
}
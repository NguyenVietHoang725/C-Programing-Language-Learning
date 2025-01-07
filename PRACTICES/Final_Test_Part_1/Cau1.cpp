#include <stdio.h>

typedef struct {
	float x, y;
} Diem;

int main() {
	int n;
	do {
		printf("Nhap so luong diem: ");
		scanf("%d", &n);
		if (n <= 0) {
			printf("Gia tri nhap vao khong hop le. Vui long nhap lai!\n");
		}
	} while(n <= 0);
	
	Diem a[100];
	printf("\nNhap lan luot toa do cua %d diem:\n", n);
	for (int i = 0; i < n; i++) {
		printf("\tToa do diem a[%d] = ", i);
		scanf("%f%f", &a[i].x, &a[i].y);
	}
	
	printf("\nDay diem vua nhap la: ");
	for (int i = 0; i < n; i++) {
		if (i != n-1) printf("(%.2f, %.2f), ", a[i].x, a[i].y);
		else printf("(%.2f, %.2f).\n", a[i].x, a[i].y);
	}
	
	int r;
	do {
		printf("\nNhap ban kinh R: ");
		scanf("%f", &r);
		if (r <= 0) {
			printf("Gia tri nhap vao khong hop le. Vui long nhap lai!\n");
		}
	} while(r <= 0);
	
	
	
	
}
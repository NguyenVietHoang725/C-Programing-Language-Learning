#include <stdio.h>
#include <math.h>

int main() {
	int n;
	do {
		printf("Nhap so luong phan tu cua mang: ");
		scanf("%d", &n);
		if (n <= 0) {
			printf("Gia tri khong hop le. Vui long nhap lai!\n");
		}
	} while (n <= 0);
	
	double a[100];
	int check = 0;
	printf("Nhap lan luot %d phan tu cua mang:\n", n);
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%lf", &a[i]);
		if (a[i] > 0) check = 1;
	}
	
	printf("Mang vua nhap la: ");
	for (int i = 0; i < n; i++) {
		if (i != n-1) {
			printf("%.2lf, ", a[i]);
		} else {
			printf("%.2lf.\n", a[i]);
		}
	}
	
	if (check == 0) printf("\nKhong co so duong ton tai trong mang!\n");
	else {
		double tbn = 1;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			if (a[i] > 0) {
				tbn *= a[i];
				cnt++;
			}
		}
		printf("Trung binh nhan cac phan tu duong trong mang bang: %.2lf\n", pow(tbn, 1.0/cnt));
	}
	
	double max = -1;
	for (int i = 0; i < n; i++) {
		if (sin(a[i]) > max) {
			max = sin(a[i]);
		}
	}
	printf("\nGia tri sin() lon nhat trong mang bang: %.2lf\n", max);

// 	Cach 1:
//	
//	if (a[0] > a[1]) check = 0;
//	else check = 1;
//	if (check == 0) {
//		for (int i = 1; i < n; i++) {
//			if (a[i-1] < a[i]) {
//				check = 2;
//				break;
//			}
//		}
//	} else {
//		for (int i = 1; i < n; i++) {
//			if (a[i-1] > a[i]) {
//				check = 2;
//				break;
//			}
//		}
//	}
//
//	if (check == 2) printf("\nDay so khong phai la day don dieu!\n");
//	else printf("\nDay so la mot day don dieu!\n");

// 	Cach 2:	
	check = 0;
	for (int i = 1; i < n; i++) {
		if (a[i-1] < a[i]) check++;
		else check--;
	}
	if (check != n-1) printf("\nDay so khong phai la day don dieu!\n");
	else if (check == n-1 || check == -(n-1)) printf("\nDay so la mot day don dieu!\n");
}
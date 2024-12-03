#include <stdio.h>
#include <math.h>

int main() {
	int n;
	do {
		printf("Nhap bac cua da thuc: ");
		scanf("%d", &n);
		if (n <= 0) {
			printf("Gia tri khong hop le. Vui long nhap lai!\n");
		}
	} while (n <= 0);
	
	float a[100];
	printf("Nhap lan luot %d he so cua da thuc:\n", n+1);
	for (int i = 0; i <= n; i++) {
		printf("a%d = ", i);
		scanf("%f", &a[i]);
	}
	
	printf("Da thuc bac %d vua nhap la: ", n);
	for (int i = 0; i <= n; i++) {
		if (i == 0) printf("%.2f ", a[i]);
		else {
			if (a[i] < 0) {
				printf("- %.2fx^%d ", -(a[i]), i);
			} else {
				printf("+ %.2fx^%d ", a[i], i);
			}
		}
	}
	
	float x;
	printf("\n\nNhap so thuc t: ");
	scanf("%f", &x);
	float res1 = 0;
	for (int i = 0; i <= n; i++) {
		res1 += a[i] * pow(x, i);
	} 
	if (res1) printf("So thuc x khong phai la nghiem cua da thuc!\n");
	else printf("So thuc x la nghiem cua da thuc!\n");
	
	float res2 = 0;
	for (int i = 1; i <= n; i++) {
		res2 += i * a[i] * pow(x, i-1);
	}
	printf("Dao ham P'[%.2f] = %.2f\n", x, res2);
	
	float max = -999999;
	for (int i = 0; i <= n; i++) {
		if (i % 2 != 0 && max < a[i]) {
			max = a[i];
		}
	}
	if (n < 1) printf("\nKhong ton tai he so bac le!\n");
	else {
		printf("\nHe so bac le lon nhat la: %.2f\n", max);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j <= n; j++) {
			float temp = a[i];
			if (a[i] < a[j]) {
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nHe so da thuc duoc sap xep giam dan la: ");
	for (int i = 0; i <= n; i++) {
		if (i != n) printf("%.2f, ", a[i]);
		else printf("%.2f.\n", a[i]);
	}
}
#include <stdio.h>

int main() {
	int n;
	printf("Nhap bac cua ma tran: ");
	scanf("%d", &n);
	
	printf("\nNhap lan luot cac phan tu cua ma tran:\n");
	float a[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("\ta[%d][%d] = ", i, j);
			scanf("%f", &a[i][j]);
		}
	}
	
	printf("\nMa tran vua nhap la:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%7.2f", a[i][j]);
		}
		printf("\n");
	}
	
	float res1 = 1;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			res1 *= a[i][j];
		}
	}
	printf("\nTich cac phan tu nam phia tren duong cheo chinh bang %.2f\n", res1);
	
	int check = 0;
	for (int j = 0; j < n; j++) {
		for (int i = j + 1; i < n; i++) {
			if (a[i][j] != 0) {
				check = 1;
				break;
			}
		}
	}
	if (check) printf("\nMa tran khong phai la ma tran tam giac tren\n");
	else printf("\nMa tran la ma tran tam giac tren\n");
	
	float res2 = 0;
	for (int i = 0; i < n; i++) {
		res2 += a[i][n - i - 1];
	}
	printf("\nTong cac phan tu thuoc duong cheo phu bang %.2f\n", res2);
}
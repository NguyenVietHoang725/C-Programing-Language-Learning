#include <stdio.h>
#include <limits.h>

int main() {
	int n;
	printf("Nhap so luong phan tu cua day so: ");
	scanf("%d", &n);
	
	int a[100];
	printf("\nNhap lan luot %d phan tu cua day so:\n", n);
	for (int i = 0; i < n; i++) {
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}
	
	printf("\nDay so vua nhap la: ");
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	
	int check = 0;
	int max = INT_MIN;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0 && a[i] > max) {
			max = a[i];
			check = 1;
		}
	}
	
	if (check) {
		printf("\nGia tri chan lon nhat trong day so la: %d\n", max);
	} else {
		printf("\nKhong ton tai gia tri chan trong day so!\n");
	}
	
	int cnt = 0, check1 = 0;
	int tong = 0, tich = 1, j = 1;
	for (int i = 0, j = 1; i < n-1; i++, j++) {
		tong = a[i] + a[j];
		tich = a[i] * a[j];
		if (tich % tong == 3 && tong != 0) {
			cnt++;
			check1 = 1;
		}
		tong = 0; 
		tich = 1;
	}
	
	if (check1) {
		printf("\nCo tat ca %d cap so lien tiep ma tich chia tong du 3\n", cnt);
		printf("Cac cap so do la: ");
		for (int i = 0, j = 1; i < n-1; i++, j++) {
			tong = a[i] + a[j];
			tich = a[i] * a[j];
			if (tich % tong == 3 && tong != 0) {
				printf("(a[%d], a[%d]) ", i, j);
			}
			tong = 0; 
			tich = 1;
		}
	} else {
		printf("\nKhong ton tai cap so nao ma tich chia tong du 3\n");
	}
	
	int x;
	printf("\nNhap so nguyen x bat ky: ");
	scanf("%d", &x);
	
	int sum = 0, check2 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] > x) {
			sum += a[i];
			check2 = 1;
		}
	}
	
	if (check2) {
		printf("\nTong tat ca phan tu lon hon x bang : %d", sum);
	} else {
		printf("\nKhong ton tai phan tu co gia tri lon hon x!");
	}
} 
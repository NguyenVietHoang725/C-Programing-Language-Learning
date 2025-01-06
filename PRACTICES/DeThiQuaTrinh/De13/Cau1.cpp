#include <stdio.h>

int main() {
	int n;
	printf("Nhap so luong phan tu cua day so: ");
	scanf("%d", &n);
	
	int arr[100];
	printf("\nNhap lan luot %d phan tu cua day so:\n", n);
	for (int i = 0; i < n; i++) {
		printf("\ta[%d] = ", i);
		scanf("%d", &arr[i]);
	}
	
	printf("\nDay so vua nhap la: ");
	for (int i = 0; i < n; i++) {
		if (i != n-1) {
			printf("%d, ", arr[i]);
		} else {
			printf("%d.\n", arr[i]);
		}
	}
	
	int a, b;
	printf("\nNhap lan luot hai so thuc a va b: ");
	scanf("%d%d", &a, &b);
	
	int avg = 0;
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] >= a && arr[i] <= b) {
			avg += arr[i];
			cnt++;
		}
	}
	printf("Trung binh cong cac phan tu nam trong [%d, %d] bang %.2f\n", a, b, avg*1.0 / cnt);
	
	int max = -999999;
	for (int i = 0; i < n; i++) {
		if (arr[i] > max && arr[i] % 2 == 0) {
			max = arr[i];
		}
	}
	printf("\nGia tri chan lon nhat cua day so la: %d\n", max);
	
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int temp = arr[i];
			if (arr[i] > arr[j]) {
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	
	printf("\nDay so vua sap xep la: ");
	for (int i = 0; i < n; i++) {
		if (i != n-1) {
			printf("%d, ", arr[i]);
		} else {
			printf("%d.\n", arr[i]);
		}
	}
}
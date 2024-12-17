#include <stdio.h>
#include <math.h>

int isPerfectSquare(int num) {
    if (num < 0) return 0; 
    int root = (int)sqrt(num);
    return root * root == num;
}

int main() {
	int n;
	do {
		printf("Nhap so luong phan tu cua day so: ");
		scanf("%d", &n);
		if (n <= 0) {
			printf("Gia tri khong hop le. Vui long nhap lai!\n");
		}
	} while (n <= 0);
	
	int check0 = 0; 
	int a[100];
	printf("\nNhap lan luot %d phan tu cua mang:\n", n);
	for (int i = 0; i < n; i++) {
		printf("a[%d] = ", i);
		scanf("%d", &a[i]);
		if (a[i] == 0) check0 = 1;
	}
	
	printf("\nMang vua nhap la: ");
	for (int i = 0; i < n; i++) {
		if (i != n-1) {
			printf("%d, ", a[i]);
		} else {
			printf("%d,\n", a[i]);
		}
	}
	
	int max = -9999999;
	int check4 = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 4 && a[i] > max) {
			max = a[i];
			check4 = 1;
		}
	}
	
	if (check4) {
		printf("\nPhan tu chia het cho 4 lon nhat trong day so la: %d\n", max);
	} else {
		printf("\nKhong ton tai phan tu nao chia het cho 4\n");
	}
	
	if (check0) {
		printf("\nKhong tinh duoc phep toan\n");
	} else {
		float res = 0;
		for (int i = 1; i < n; i++) {
			res += a[i-1]*1.0 / a[i];
		}
		printf("\nKet qua cua bieu thuc bang %.2f\n", res);
	}
	
	int allPerfectSquare = 1;
    for (int i = 0; i < n; i++) {
        if (!isPerfectSquare(a[i])) {
            allPerfectSquare = 0;
            break;
        }
    }

    if (allPerfectSquare) {
        printf("\nTat ca cac phan tu trong mang deu la so chinh phuong.\n");
    } else {
        printf("\nKhong phai tat ca cac phan tu trong mang deu la so chinh phuong.\n");
    }

    return 0;
}
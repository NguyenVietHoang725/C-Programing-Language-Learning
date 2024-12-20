#include <stdio.h>
#include <math.h>

#define PI 3.14

typedef struct {
	float x;
	float y;
} Diem;

void nhap(Diem a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("\t(x%d, y%d) = ", i, i);
		scanf("%f%f", &a[i].x, &a[i].y);
	}
}

void xuat(Diem a[], int n) {
	for (int i = 0; i < n; i++)
	{
		if (i != n-1) printf("(%.2f, %.2f), ", a[i].x, a[i].y);
		else printf("(%.2f, %.2f).\n", a[i].x, a[i].y);
	}
}

float tinhDuongGapKhuc(Diem a[], int n) {
	float dgk = 0, kc = 0;
	for (int i = 1; i < n; i++) {
		kc = sqrt(pow(a[i].x - a[i-1].x, 2) + pow(a[i].y - a[i-1].y, 2)); 
		dgk += kc;
	}
	return dgk;
}

int demDiemBenTrongDtron(Diem a[], int n, float r) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		float dodai = sqrt(pow(a[i].x, 2) + pow(a[i].y, 2)); 
		if (dodai < r) dem++;
	}
	return dem;
}

void inCacDiemBenTrongDtron(Diem a[], int n, float r) {
	for (int i = 0; i < n; i++)
	{
		float dodai = sqrt(pow(a[i].x, 2) + pow(a[i].y, 2));
		if (dodai < r)
		{
			if (i != n-1) printf("(%.2f, %.2f), ", a[i].x, a[i].y);
			else printf("(%.2f, %.2f).\n", a[i].x, a[i].y);
		}
	}
}

float tinhSDtronMin(Diem a[], int n) {
	float dienTich = 0;
	float banKinhMax = sqrt(pow(a[0].x, 2) + pow(a[0].y, 2));
	for (int i = 0; i < n; i++)
	{
		float temp = sqrt(pow(a[i].x, 2) + pow(a[i].y, 2));
		if (temp > banKinhMax) banKinhMax = temp;
	}
	dienTich = PI * pow(banKinhMax, 2);
	return dienTich;
}

int main() {
	int n;
	do {
		printf("Nhap so luong diem cua day: ");
		scanf("%d", &n);
		if (n <= 0) printf("Gia tri nhap khong hop le. Vui long nhap lai!\n");
	} while (n <= 0);
	
	Diem a[100];
	printf("Nhap lan luot toa do cua cac diem:\n");
	nhap(a, n);
	printf("\nDay diem la: ");
	xuat(a, n);
	
	printf("\nTong do dai duong gap khuc di qua tat ca cac diem bang %.3f\n", tinhDuongGapKhuc(a, n));
	
	float r;
	do {
		printf("Nhap ban kinh R: ");
		scanf("%f", &r);
		if (r <= 0) printf("Gia tri nhap khong hop le. Vui long nhap lai!\n");
	} while (r <= 0);
	
	printf("Co tat ca %d diem nam ben trong duong tron (O; %.2f)\n", demDiemBenTrongDtron(a, n, r), r);
	printf("Cac diem do lan luot la: ");
	inCacDiemBenTrongDtron(a, n, r);
	
	printf("Dien tich hinh tron nho nhat chua tat ca cac diem bang %.3f", tinhSDtronMin(a, n));
}
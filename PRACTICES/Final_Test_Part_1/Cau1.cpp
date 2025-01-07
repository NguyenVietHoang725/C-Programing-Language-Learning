#include <stdio.h>
#include <math.h>

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
	
	float r;
	do {
		printf("\nNhap ban kinh R: ");
		scanf("%f", &r);
		if (r <= 0) {
			printf("Gia tri nhap vao khong hop le. Vui long nhap lai!\n");
		}
	} while(r <= 0);
	
	int cnt1 = 0;
	for (int i = 0; i < n; i++) {
		if (sqrt(pow(a[i].x, 2) + pow(a[i].y, 2)) < r) {
			cnt1++;
		}
	}
	if (cnt1 == 0) printf("\nKhong ton tai diem nao nam trong duong tron (O, %.2f)\n", r);
	else printf("\nCo tat ca %d diem nam trong duong tron (O, %.2f)\n", cnt1, r);
	
	float sum1 = 0;
	for (int i = 1; i < n; i += 2) { 
        if (i + 2 < n) {
            sum1 += sqrt(pow(a[i+2].x - a[i].x, 2) + pow(a[i+2].y - a[i].y, 2));
        }
    }
	if (n <= 2) printf("\nSo luong diem khong du de thuc hien yeu cau!\n");
	else printf("\nDo dai duong gap khuc di qua cac diem chan la: %.2f\n", sum1);
	
	float d;
	do {
		printf("\nNhap do dai cua doan thang d: ");
		scanf("%f", &d);
		if (d <= 0) printf("Gia tri nhap vao khong hop le. Vui long nhap lai!\n");
	} while (d <= 0);
	
	int cnt2 = 0;
	float sum2 = 0;
	for (int i = 0; i < n-1; i++) {
		for (int j = i + 1; j < n; j++) {
			float dt = sqrt(pow(a[j].x - a[i].x, 2) + pow(a[j].y - a[i].y, 2));
			if (dt < d) {
				cnt2++;
				sum2 += dt;
			}
		}
	}
	if (cnt2 == 0) printf("\nKhong ton tai cap diem nao tao doan thang co do dai nho hon d!\n");
	else printf("\nTrung binh cong do dai cac doan thang tao tu cac cap diem bat ky nho hon d la: %.2f", sum2 / cnt2);
}
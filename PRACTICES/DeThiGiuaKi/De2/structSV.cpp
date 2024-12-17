#include <stdio.h>

typedef struct {
	char hoTen[20];
	char khoa[20];
	int tuoi;
	float diemToan;
} SinhVien;

int main() {
	int n;
	printf("Nhap so luong sv: ");
	scanf("%d", &n);
	SinhVien a[n+1];
	for(int i = 1; i <= n; i++){
		printf("nhap ten: ");
		getchar();
		gets(a[i].hoTen);
		printf("nhap khoa: ");
		gets(a[i].khoa);
		printf("nhap tuoi: ");
		scanf("%d", &a[i].tuoi);
		printf("nhap diem toan: ");
		scanf("%f", &a[i].diemToan);
	}
	for(int i = 1; i <= n; i++){
		printf("ten: %10s, khoa: %5s, tuoi: %5d, toan: %5.2f\n", 
				a[i].hoTen, a[i].khoa, a[i].tuoi, a[i].diemToan);
	}
	
	int max = 1;
	for (int i = 2; i <= n; i++) {
		if(a[max].tuoi < a[i].tuoi){
			max = i;
		}
	}
	printf("Cac sinh vien co tuoi lon nhat la: \n");
	for(int i = 1; i <= n; i++){
		if(a[i].tuoi == a[max].tuoi){
			printf("ten: %10s, khoa: %5s, tuoi: %5d, toan: %5.2f\n", 
				a[i].hoTen, a[i].khoa, a[i].tuoi, a[i].diemToan);
		}
			
	}
}
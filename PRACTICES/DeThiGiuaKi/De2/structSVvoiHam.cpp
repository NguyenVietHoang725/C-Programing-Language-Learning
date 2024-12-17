#include <stdio.h>

typedef struct {
	char hoTen[20];
	char khoa[20];
	int tuoi;
	float diemToan;
} SinhVien;

void input(SinhVien *a){
	printf("nhap ten: ");
	getchar();
	gets(a->hoTen);
	printf("nhap khoa: ");
	gets(a->khoa);
	printf("nhap tuoi: ");
	scanf("%d", &a->tuoi);
	printf("nhap diem toan: ");
	scanf("%f", &a->diemToan);
}

void output(SinhVien a){
	printf("ten: %10s, khoa: %5s, tuoi: %5d, toan: %5.2f\n", 
				a.hoTen, a.khoa, a.tuoi, a.diemToan);
}

void maxTuoi(SinhVien a[], int n){
	int max = 1;
	for (int i = 2; i <= n; i++) {
		if(a[max].tuoi < a[i].tuoi){
			max = i;
		}
	}
	printf("Cac sinh vien co tuoi lon nhat la: \n");
	for(int i = 1; i <= n; i++){
		if(a[i].tuoi == a[max].tuoi){
			output(a[i]);
		}
			
	}
}

int main() {
	int n;
	printf("Nhap so luong sv: ");
	scanf("%d", &n);
	SinhVien a[n+1];
	for(int i = 1; i <= n; i++){
		input(&a[i]);
	}
	for(int i = 1; i <= n; i++){
		output(a[i]);
	}
	maxTuoi(a, n);
	

}
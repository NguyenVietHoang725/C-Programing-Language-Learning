#include <stdio.h>
#include <string.h>

typedef struct{
	char hoTen[50];
	char chuyenMon[2];
	int nien;
}GiangVien;

void nhap(GiangVien *gv){
	printf("\nnhap ho ten gv: ");
	getchar();
	gets(gv->hoTen);
	printf("\nnhap chuyen mon: ");
	getchar();
	gets(gv->chuyenMon);
	printf("\nnhap so nam cong tac: ");
	scanf("%d", &gv->nien);
}

void xuat(GiangVien gv){
	printf("%s, %s, %d", gv.hoTen, gv.chuyenMon, gv.nien);
}

double nienTB(GiangVien gv[], int n, char chuyen[2]){
	double tb = 0;
	for(int i = 1; i <= n; i++){
		if(strcmp(gv[i].chuyenMon, chuyen) == 0){
			tb++;
		}
	}
	return tb;
}

GiangVien maxNien(GiangVien gv[], int n){
	int max = 1;
	for(int i = 2; i <= n; i++){
		if(gv[i].nien > gv[max].nien){
			max = i;
		}
	}
	return gv[max];
}

bool checkTen(GiangVien gv[], int n,char ten[50]){
	for(int i = 1; i <= n; i++){
		if(strcmp(gv[i].hoTen, ten) == 0){
			return true;
		}
	}
	return false;
}

int main(){
	int n;
	printf("nhap so giang vien: ");
	scanf("%d", &n);
	GiangVien gv[n+1];
	for(int i = 1; i <= n; i++){
		nhap(&gv[i]);
	}
	for(int i = 1; i <= n; i++){
		xuat(gv[i]);
		printf("\n");
	}
	
	
}
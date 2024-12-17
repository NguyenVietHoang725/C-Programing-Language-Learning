#include <stdio.h>
#include <string.h>

typedef struct{
	int ma;
	char tenSach[100];
	char tenTacGia[20];
	float tien;
}Sach;

void input(Sach *sach){
	printf("Nhap ma sach: ");
	scanf("%d", &sach->ma);
	printf("Nhap ten sach: ");
	getchar();
	gets(sach->tenSach);
	printf("Nhap ten tac gia: ");
	gets(sach->tenTacGia);
	printf("Nhap gia tien: ");
	scanf("%f", &sach->tien);
}

void output(Sach sach){
	printf("%5d %20s %10s %.2f\n", sach.ma, sach.tenSach, 
			sach.tenTacGia, sach.tien);
}

void timSachTacGia(Sach sach[], int n, char *timTG){
	int check = 0;
	printf("Cac cuon sach cua tac gia %s\n", timTG);
	for(int i = 1; i <= n; i++){
		if(strcmp(sach[i].tenTacGia, timTG) == 0){
			output(sach[i]);
			check = 1;
		}
	}
	if(check == 0){
		printf("Khong co cuon sach cua tac gia %s\n", timTG);
	}
}

void sachDatNhat(Sach sach[], int n){
	int max = 1;
	for(int i = 2; i <= n; i++){
		if(sach[i].tien > sach[max].tien){
			max = i;
		}
	}
	printf("\nNhung cuon dat nhat: \n");
	for(int i = 1; i <= n; i++){
		if(sach[i].tien == sach[max].tien){
			output(sach[i]);
		}
	}
}

void sachHon100(Sach sach[], int n){
	int check = 0;
	printf("\nSach co gia hon 100\n");
	for(int i = 1; i <= n; i++){
		if(sach[i].tien > 100){
			output(sach[i]);
			check = 1;
		}
	}
	if(check == 0){
		printf("Khong co cuon sach nao co gia lon hon 100");
	}
}

int main(){
	int n;
	printf("Nhap so luong sach: ");
	scanf("%d", &n);
	Sach sach[n+1];
	for(int i = 1; i <= n; i++){
		input(&sach[i]);
	}
	for(int i = 1; i <= n; i++){
		output(sach[i]);
	}
	char timTG[20];
	printf("Nhap ten tac gia muon tim: ");
	getchar();
	gets(timTG);
	timSachTacGia(sach, n, timTG);
	sachDatNhat(sach, n);
	sachHon100(sach, n);
}
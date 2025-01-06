#include <stdio.h>
#include <limits.h>

int main() {
	int m, n;
	printf("Nhap lan luot kich thuoc cua ma tran mxn: ");
	scanf("%d%d", &m, &n);
	
	int mt[100][100];
	printf("\nNhap lan luot cac phan tu cua ma tran mxn:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("mt[%d][%d] : ", i, j);
			scanf("%d", &mt[i][j]);
		}
	}
	
	printf("\nMa tran co kich thuoc mxn vua nhap la:\n\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("|%5d", mt[i][j]);
		}
		printf("|\n");
	}
	
	int sumOddCol = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (j % 2 == 0) {
				sumOddCol += mt[i][j];
			}
		}
	}
	printf("\nTong cac phan tu thuoc cot le cua ma tran bang : %d\n", sumOddCol);
	
	int cnt = 0, sumEven = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (mt[i][j] % 2 == 0 && mt[i][j] > 10) {
				cnt++;
				sumEven += mt[i][j];
			}
		}
	}
	if (cnt == 0) printf("\nKhong ton tai phan tu chan lon hon 10 trong ma tran!\n");
	else printf("\nTrung binh cong cac phan tu chan lon hon 10 trong ma tran bang : %.2f\n", sumEven * 1.0 / cnt);
	
	int max = INT_MIN;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (mt[i][j] > max) {
				max = mt[i][j];
			}
		}
	}
	printf("\nPhan tu co gia tri lon nhat trong ma tran bang : %d", max);
}
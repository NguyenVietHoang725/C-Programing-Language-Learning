#include <stdio.h>
#include <math.h>

int main() {
	float a, b, c;
	printf("Nhap lan luot cac he so cua phuong trinh: ");
	scanf("%f%f%f", &a, &b, &c);
	
	printf("Phuong trinh bac 2 ban vua nhap la: ");
 	printf("(%.2f)x^2 + (%.2f)x + (%.2f)\n\n", a, b, c);
	
	if (a == 0) {
		if (b == 0) {
			if (c != 0) {
				printf("Phuong trinh vo nghiem!");
			} else {
				printf("Phuong trinh nghiem dung voi moi x!");
			}
		} else {
			printf("Phuong trinh co nghiem duy nhat x = %.2f", (-1)*c/b);
		}
	} else {
		float delta = b*b - 4*a*c;
		if (delta < 0) {
			printf("Phuong trinh vo nghiem!");
		} else if (delta == 0) {
			float xkep = (-1)*b / (2*a);
			printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f", xkep);
		} else {
			float x1 = ((-1)*b - sqrt(delta)) / (2*a);
			float x2 = ((-1)*b + sqrt(delta)) / (2*a);
			printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f; x2 = %.2f", x1, x2);
		}
	}
}
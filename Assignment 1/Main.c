#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
	float a, b, c, d, x1, x2;
	printf("\nNhap so a: ");
	scanf("%f", &a);
	printf("\nNhap so b: ");
	scanf("%f", &b);
	printf("\nNhap so c: ");
	scanf("%f", &c);

	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				printf("\nPhuong trinh vo so nghiem");
			}
			else {
				printf("\nPhuong trinh vo nghiem");
			}
		}
		else {
			printf("\nPhuong trinh co 1 nghiem x = %.2f", -c / b);
		}
	}
	else {
		d = b * b - 4*a*c;
		if (d == 0) {
			printf("\nPhuong trinh co nghiem kep x1 = x2 = %.2f", -b / (2 * a));
		}
		else if (d < 0){
			printf("\nPhuong trinh vo nghiem");
		}
		else {
			printf("\nPhuong trinh co 2 nghiem phan biet: ");
			x1 = (-b + sqrt(d)) / (2 * a);
			x2 = (-b - sqrt(d)) / (2 * a);
			printf("\nx1 = %.2f", x1);
			printf("\nx2 = %.2f", x2);
		}
	}
}
	
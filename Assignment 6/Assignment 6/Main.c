#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <math.h>

struct KetQuaPhuongTrinh
{
	int count;
	float x1, x2;
};

typedef struct KetQuaPhuongTrinh kq;

kq PTB2(float a, float b, float c) {
	kq k;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				k.count = 100;
			}
			else {
				k.count = 0;
			}
		}
		else {
			k.count = 1;
			k.x1 = k.x2 = - c / b;
		}
	}
	else {
		float D = b * b - 4 * a * c;
		float e = sqrt(D);
		if (e > 0) {
			k.count = 2;
			k.x1 = (-b - e) / (2 * a);
			k.x2 = (-b + e) / (2 * a);
		}
		if (e == 0) {
			k.count = 1;
			k.x1 = k.x2 = -b / (2 * a);
		}
		else {
			k.count = 0;
		}
		return k;
	}
}

void main() {
	float a, b, c;
	printf("Nhap he so a: ");
	scanf("%f", &a);
	printf("Nhap he so b: ");
	scanf("%f", &b);
	printf("Nhap he so c: ");
	scanf("%f", &c);
	kq k;
	k = PTB2(a, b, c);
	printf("x1 la: %.2f\r\n",k.x1);
	printf("x2 la: %.2f\r\n", k.x2);
}

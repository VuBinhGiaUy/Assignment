#include <stdio.h>
#include <math.h>

void main() {
	float a, b, h, sum;
	int n;
	float f(float);
	printf("Nhap so a va b:");
	scanf_s("%f%f", &a, &b);
	printf("Nhap gia tri n: ");
	scanf_s("%d", &n);
	h = (b - a) / n;
	sum = (f(a) + f(a + n * h)) / 2;
	for (int i = 1; i < n; i++)
		sum += f(a + i * h);
	sum = sum * h;
	printf("Tich phan cua ham so f(x) la: %8.5f ", sum);
}

float f(float x) {
	return (x*x);
}
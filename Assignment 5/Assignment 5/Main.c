#include <stdio.h>
#include <malloc.h>

int main()
{
	int *a = NULL, dong, cot;
	printf("Nhap vao so dong = ");
	scanf("%d", &dong);
	printf("Nhap vao so cot = ");
	scanf("%d", &cot);
	a = (int *)malloc(dong * cot * sizeof(int));

	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%d", (a + i * dong + j));
		}
	}
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			printf("%d\t", *(a + i * dong + j));
		}
		printf("\n");
	}
	free(a);
	return 0;
}
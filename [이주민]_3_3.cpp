#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cha(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a, b;
	printf("���� 1 : ");
	scanf("%d", &a);
	printf("���� 2 : ");
	scanf("%d", &b);

	printf("Before\n");
	printf("> ����1 : %d, ����2 : %d\n", a, b);

	cha(&a, &b);
	printf("After\n");
	printf("> ����1 : %d, ����2 : %d\n", a, b);

	return 0;
}
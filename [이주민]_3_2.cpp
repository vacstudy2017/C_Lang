#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square(int *x)
{
	*x = *x * *x;
}

int main(void)
{
	int a;
	printf("���� �Է� : ");
	scanf("%d", &a);

	square(&a);
	printf("���� : %d\n", a);

	return 0;
}
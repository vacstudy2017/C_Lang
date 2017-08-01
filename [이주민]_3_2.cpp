#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void square(int *x)
{
	*x = *x * *x;
}

int main(void)
{
	int a;
	printf("숫자 입력 : ");
	scanf("%d", &a);

	square(&a);
	printf("제곱 : %d\n", a);

	return 0;
}
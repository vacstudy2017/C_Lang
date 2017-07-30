# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num(int a)
{
	int i;
	printf("%d단\n", a);
	for (i = 1; i < 10; i++)
		printf("%dx%d = %d\n", a, i, a*i);
	return a;
}

int main(void)
{
	int b;
	printf("단을 입력하시오: ");
	scanf("%d", &b);
	num(b);
}
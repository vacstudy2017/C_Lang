# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num(int a)
{
	int i;
	printf("%d��\n", a);
	for (i = 1; i < 10; i++)
		printf("%dx%d = %d\n", a, i, a*i);
	return a;
}

int main(void)
{
	int b;
	printf("���� �Է��Ͻÿ�: ");
	scanf("%d", &b);
	num(b);
}
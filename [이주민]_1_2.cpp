# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal(int a,int b)
{
	printf("��� ���\n");
	printf("+) %d\n", a + b);
	printf("-) %d\n", a - b);
	printf("*) %d\n", a * b);
	printf("/) %d\n", a / b);

	return 0;
}

int main(void)
{
	int i,j;
	printf("���� 1 : ");
	scanf("%d", &i);
	printf("���� 2 : ");
	scanf("%d", &j);

	cal(i,j);
}
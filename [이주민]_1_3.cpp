# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal2(int a,int b)
{
	int x;
	printf("� ������ �Ͻðڽ��ϱ�?(1.+ 2.- 3.* 4./): ");
	scanf("%d", &x);
	
	if (x == 1)
		printf("%d + %d = %d\n", a, b, a + b);
	else if (x == 2)
		printf("%d - %d = %d\n", a, b, a - b);
	else if (x == 3)
		printf("%d * %d = %d\n", a, b, a * b);
	else if (x == 4)
		printf("%d / %d = %d\n", a, b, a / b);
	else
		printf("����\n");

	return 0;
}

int main(void)
{
	int i,j;

	printf("���� 1 : ");
	scanf("%d", &i);
	printf("���� 2 : ");
	scanf("%d", &j);

	cal2(i,j);
}
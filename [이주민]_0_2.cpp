# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	int n = 1;

	printf("������ �Է��ϼ���(ex. 1 100 �̶�� 1���� 100) : ");
	scanf("%d %d", &x, &y);

	printf("�������� Ȧ���� : ");
	for (n = x; n <= y; n++)
	{
		if (n % 2 == 1)
			printf("%d ", n);
	}
	printf("\n�������� ¦���� : ");
	for (n = x; n <= y; n++)
	{
		if (n % 2 == 0)
			printf("%d ", n);
	}
	printf("\n");

	return 0;
}
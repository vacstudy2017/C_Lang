# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;

	printf("���ϴ� ���� �Է��ϼ��� : ");
	scanf("%d", &n);
	printf("* %d��\n", n);

	for (i = 1; i < 6; i++)
		printf("%d x %d = %d	", n, i, n*i);

	printf("\n");

	for (i=6;i<10;i++)
		printf("%d x %d = %d	", n, i, n*i);

	return 0;
}
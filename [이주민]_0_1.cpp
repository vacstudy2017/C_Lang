# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int x, y, z;
	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);
	printf("�� ���� ��ȯ�� ��� : %d %d \n", b, a);

	printf("\n");
	printf("10~99�� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &x);

	y = x / 10;
	z = x % 10;
	printf("10�� �ڸ� �� : %d\n", y);
	printf("1�� �ڸ� �� : %d\n", z);
	printf("��ȯ�� ��� : %d\n", 10 * z + y);

	return 0;
}
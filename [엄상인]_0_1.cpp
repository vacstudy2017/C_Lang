#include <stdio.h>
int main()
{
	int a, b, c, d;
	int num;

	printf("�� ���� �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);
	printf("�� ���� ��ȯ�� ��� : %d %d \n\n", b, a);
	printf("10~99�� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	c = num / 10;
	d = num % 10;
	printf("1�� �ڸ� �� : %d \n", c);
	printf("10�� �ڸ� �� : %d \n", d);
	printf("��ȯ�� ��� : %d \n", 10 * d + c);

	return 0;
}
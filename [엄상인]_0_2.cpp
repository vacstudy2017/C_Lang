#include <stdio.h>
int main()
{
	int a, b, i;

	printf("������ �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);
	printf("�������� Ȧ���� :");
	for (i = a; i <= b; i++)
	{
		if (i % 2 == !0)
			printf("%3d", i);
	}
	printf("\n");
	printf("�������� ¦���� :");
	for (i = a; i <= b; i++)
	{
		if (i % 2 == 0)
			printf("%3d", i);
	}
	printf("\n");

	return 0;
}
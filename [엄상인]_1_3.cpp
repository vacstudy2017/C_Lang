#include <stdio.h>
int cal(int a, int b);
int main()
{
	int a, b;

	printf("���� 1 : ");
	scanf("%d", &a);
	printf("���� 2 : ");
	scanf("%d", &b);

	cal(a, b);
}
int cal(int a, int b)
{
	int num;

	printf("� ������ �Ͻðڽ��ϱ�?(1.+, 2.-, 3.*, 4./) : ");
	scanf("%d", &num);
	if (num == 1)
		printf("%d+%d+%d", a, b, a + b);
	else if (num == 2)
		printf("%d-%d=%d", a, b, a - b);
	else if (num == 3)
		printf("%d*%d=%d", a, b, a*b);
	else if (num == 4)
		printf("%d/%d=%d", a, b, a / b);
	printf("\n");
}
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
	printf("��� ���\n");
	printf("+) %d\n", a + b);
	printf("-) %d\n", a - b);
	printf("*) %d\n", a*b);
	printf("/) %d\n", a / b);
}
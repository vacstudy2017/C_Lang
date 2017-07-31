#include <stdio.h>
int cal(int a, int b);
int main()
{
	int a, b;

	printf("숫자 1 : ");
	scanf("%d", &a);
	printf("숫자 2 : ");
	scanf("%d", &b);

	cal(a, b);
}
int cal(int a, int b)
{
	printf("계산 결과\n");
	printf("+) %d\n", a + b);
	printf("-) %d\n", a - b);
	printf("*) %d\n", a*b);
	printf("/) %d\n", a / b);
}
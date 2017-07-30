# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal(int a,int b)
{
	printf("계산 결과\n");
	printf("+) %d\n", a + b);
	printf("-) %d\n", a - b);
	printf("*) %d\n", a * b);
	printf("/) %d\n", a / b);

	return 0;
}

int main(void)
{
	int i,j;
	printf("숫자 1 : ");
	scanf("%d", &i);
	printf("숫자 2 : ");
	scanf("%d", &j);

	cal(i,j);
}
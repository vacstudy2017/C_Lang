# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int cal2(int a,int b)
{
	int x;
	printf("어떤 연산을 하시겠습니까?(1.+ 2.- 3.* 4./): ");
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
		printf("오류\n");

	return 0;
}

int main(void)
{
	int i,j;

	printf("숫자 1 : ");
	scanf("%d", &i);
	printf("숫자 2 : ");
	scanf("%d", &j);

	cal2(i,j);
}
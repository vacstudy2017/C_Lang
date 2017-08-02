#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void cha(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

int main(void)
{
	int a, b;
	printf("숫자 1 : ");
	scanf("%d", &a);
	printf("숫자 2 : ");
	scanf("%d", &b);

	printf("Before\n");
	printf("> 숫자1 : %d, 숫자2 : %d\n", a, b);

	cha(&a, &b);
	printf("After\n");
	printf("> 숫자1 : %d, 숫자2 : %d\n", a, b);

	return 0;
}
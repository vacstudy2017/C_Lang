# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	int x, y, z;
	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	printf("두 수를 교환한 결과 : %d %d \n", b, a);

	printf("\n");
	printf("10~99의 숫자를 입력하세요 : ");
	scanf("%d", &x);

	y = x / 10;
	z = x % 10;
	printf("10의 자리 수 : %d\n", y);
	printf("1의 자리 수 : %d\n", z);
	printf("교환한 결과 : %d\n", 10 * z + y);

	return 0;
}
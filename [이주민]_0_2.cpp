# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	int n = 1;

	printf("범위를 입력하세요(ex. 1 100 이라면 1부터 100) : ");
	scanf("%d %d", &x, &y);

	printf("범위에서 홀수는 : ");
	for (n = x; n <= y; n++)
	{
		if (n % 2 == 1)
			printf("%d ", n);
	}
	printf("\n범위에서 짝수는 : ");
	for (n = x; n <= y; n++)
	{
		if (n % 2 == 0)
			printf("%d ", n);
	}
	printf("\n");

	return 0;
}
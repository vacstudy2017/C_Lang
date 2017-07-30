# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;

	printf("원하는 단을 입력하세요 : ");
	scanf("%d", &n);
	printf("* %d단\n", n);

	for (i = 1; i < 6; i++)
		printf("%d x %d = %d	", n, i, n*i);

	printf("\n");

	for (i=6;i<10;i++)
		printf("%d x %d = %d	", n, i, n*i);

	return 0;
}
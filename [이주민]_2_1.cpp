# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[5] = { 0 };
	int i, j, k;

	printf("정수 5개 입력: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &num[i]);

	for (i = 0; i < 5; i++)
	{
		for (k = 0; k < 4 - i; k++)
		{
			if (num[k] > num[k + 1])
			{
				j = num[k];
				num[k] = num[k + 1];
				num[k + 1] = j;
			}
		}
	}
	printf("정렬: ");

	for (i = 0; i < 5; i++)
		printf("%d ", num[i]);
	printf("\n");

	return 0;
}
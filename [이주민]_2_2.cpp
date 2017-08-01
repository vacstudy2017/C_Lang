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
	printf("두 번째로 낮은 숫자는 %d입니다. \n", num[1]);

	return 0;
}
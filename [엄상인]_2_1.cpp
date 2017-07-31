#include <stdio.h>
int main()
{
	int num[5] = { 21, 30, 1, 99, 52 };
	int i, j, tmp;

	printf("정수 5개 입력 : ");
	for (i = 0; i < 5; i++)
		printf("%-4d", num[i]);
	printf("\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4 - i; j++)
		{
			if (num[j] > num[j + 1])
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
			}
		}
	}
	printf("정렬 : ");
	for (j = 0; j < 5; j++)
		printf("%-4d", num[j]);
	printf("\n");

	return 0;
}
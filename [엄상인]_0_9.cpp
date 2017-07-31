#include <stdio.h>
int main()
{
	int num;
	int i, j;

	printf("출력할 알파벳을 선택하세요 : ");
	scanf("%d", &num);

	if (num == 1)
	{
		printf("B 출력 \n");
		for (i = 1; i <= 2; i++)
		{
			printf("*****\n");
			for (j = 1; j <= 2; j++)
				printf("**   *\n");
			printf("*****\n");
		}
	}
	if (num == 2)
	{
		printf("C 출력 \n");
		printf(" *****\n");
		for (i = 1; i <= 3; i++)
			printf("**\n");
		printf(" *****\n");
	}
	if (num == 3)
	{
		printf("D 출력 \n");
		printf("*****\n");
		for (i = 1; i <= 3; i++)
			printf("*   **\n");
		printf("*****\n");
	}
	if (num == 4)
	{
		printf("E 출력 \n");
		for (i = 1; i <= 2; i++)
		{
			printf("*****\n");
			printf("*\n");
		}
		printf("*****\n");
	}
	
	return 0;
}
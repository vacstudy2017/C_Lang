#include <stdio.h>
int main()
{
	int num;
	int i, j;

	printf("����� ���ĺ��� �����ϼ��� : ");
	scanf("%d", &num);

	if (num == 1)
	{
		printf("B ��� \n");
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
		printf("C ��� \n");
		printf(" *****\n");
		for (i = 1; i <= 3; i++)
			printf("**\n");
		printf(" *****\n");
	}
	if (num == 3)
	{
		printf("D ��� \n");
		printf("*****\n");
		for (i = 1; i <= 3; i++)
			printf("*   **\n");
		printf("*****\n");
	}
	if (num == 4)
	{
		printf("E ��� \n");
		for (i = 1; i <= 2; i++)
		{
			printf("*****\n");
			printf("*\n");
		}
		printf("*****\n");
	}
	
	return 0;
}
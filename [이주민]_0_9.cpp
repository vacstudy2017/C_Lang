# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y;
	printf("����� ���ĺ��� �����ϼ���[B=1,C=2,D=3,E=4] : ");
	scanf("%d", &x);

	if (x == 1)
	{   
		printf("B ���\n");
		for (y = 1; y < 3; y++)
		{
			printf("*****\n");
			printf("**   *\n");
			printf("**   *\n");
			printf("*****\n");
		}
	}
	else if (x == 2)
	{
		printf("C ���\n");
		printf(" *****\n");
		for (y = 1; y < 7; y++)
			printf("**\n");
		printf(" *****\n");
	}
	else if (x == 3)
	{
		printf("D ���\n");
		printf("*****\n");
		printf("**   *\n");
		for (y = 1; y < 5; y++)
			printf("**    *\n");
		printf("**   *\n");
		printf("*****\n");
	}
	else
	{
		printf("E ���\n");
		for (y = 1; y < 3; y++)
		{
			printf("******\n");
			printf("**\n");
			printf("**\n");
			printf("******\n");
		}
	}
	return 0;
}

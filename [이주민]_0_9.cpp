# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 0;
	int y;
	printf("출력할 알파벳을 선택하세요[B=1,C=2,D=3,E=4] : ");
	scanf("%d", &x);

	if (x == 1)
	{   
		printf("B 출력\n");
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
		printf("C 출력\n");
		printf(" *****\n");
		for (y = 1; y < 7; y++)
			printf("**\n");
		printf(" *****\n");
	}
	else if (x == 3)
	{
		printf("D 출력\n");
		printf("*****\n");
		printf("**   *\n");
		for (y = 1; y < 5; y++)
			printf("**    *\n");
		printf("**   *\n");
		printf("*****\n");
	}
	else
	{
		printf("E 출력\n");
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

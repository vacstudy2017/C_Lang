#include <stdio.h>
int main()
{
	int i, j;

	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 13 - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++)
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i - 1; j++)
			printf(" ");
		for (j = 1; j <= 2 * (13 - i) + 1; j++)
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4 - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * (8 + i) + 1; j++)
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 8 + i; j++)
			printf(" ");
		for (j = 1; j <= 2 * (4 - i) + 1; j++)
			printf("*");
		printf("\n");
	}

	return 0;
}
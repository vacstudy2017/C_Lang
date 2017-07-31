#include <stdio.h>
int main()
{
	int i, j;

	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4 - i; j++)
			printf(" ");
		for (j = 1; j <= 2 * (i + 3); j++)
			printf("*");
		for (j = 1; j <= 2 * (5 - i); j++)
			printf(" ");
		for (j = 1; j <= 2 * (i + 3); j++)
			printf("*");
		printf("\n");
	}
	for (i = 1; i <= 15; i++)
	{
		for (j = 1; j <= i - 1; j++)
			printf(" ");
		for (j = 1; j <= 2 * (16 - i); j++)
			printf("*");
		printf("\n");
	}

	return 0;
}


# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int x, y;

	for (x = 1; x < 5; x++)
	{
		for (y = 1; y < 5 - x; y++)
			printf(" ");
		for (y = 1; y <= 2 * (x + 3); y++)
			printf("*");
		for (y = 1; y <= 2 * (5 - x); y++)
			printf(" ");
		for (y = 1; y <= 2 * (x + 3); y++)
			printf("*");
		printf("\n");
	}
	for (x = 1; x < 16; x++)
	{
		for (y = 1; y < x; y++)
			printf(" ");
		for (y = 1; y <= 2 * (16 - x); y++)
			printf("*");
		printf("\n");
	}

	return 0;
}

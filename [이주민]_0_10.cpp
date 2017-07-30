# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int x, y;

	for (x = 1; x < 5; x++)
	{
		for (y = 1; y < 13 - x; y++)
			printf(" ");
		for (y = 1; y <= 2 * x - 1; y++)
			printf("*");
		printf("\n");
	}
	for (x = 1; x < 5; x++)
	{
		for (y = 1; y < x; y++)
			printf(" ");
		for (y = 1; y <= 2 * (13 - x) + 1; y++)
			printf("*");
		printf("\n");
	}
	for (x = 1; x < 6; x++)
	{
		for (y = 1; y < 6 - x; y++)
			printf(" ");
		for (y = 1; y <= 2 * (x + 8) - 1; y++)
			printf("*");
		printf("\n");
	}
	for (x = 1; x < 5; x++)
	{
		for (y = 1; y < x + 8; y++)
			printf(" ");
		for (y = 1; y <= 2 * (4 - x) + 1; y++)
			printf("*");
		printf("\n");
	}
	return 0;
}
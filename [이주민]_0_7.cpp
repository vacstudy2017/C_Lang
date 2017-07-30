# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int x, y;

	for (x = 1; x < 16; x++)
	{
		for (y = 1; y <= x; y++)
			printf(" ");
		for (y = 1; y <= 2 * (3 - x) + 1; y++)
			printf("*");
		printf("\n");
	}

	return 0;
}

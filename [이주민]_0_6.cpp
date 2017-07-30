# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, n;
	
	for (n = 1; n <6; n++)
	{
		for (i = 0; i < n; i++)
			printf("*");
		printf("\n");
	}

	for (n = 4; n > 0; n--)
	{
		for (i = 0; i < n; i++)
			printf("*");
		printf("\n");
	}
	return 0;
}
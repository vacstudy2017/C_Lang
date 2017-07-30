#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int i = 1;

	for (n = 9; n > 0; n--)
	{
		for (i = 1; i < 10; i++)
			printf("%d x %d = %d\n", n, i, n*i);
		printf("\n");
	}
	return 0;
}
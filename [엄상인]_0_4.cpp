#include <stdio.h>
int main()
{
	int i, j;

	for (i = 9; i >= 1; i--)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d*%d=%d ", i, j, i*j);
		}
		printf("\n");
	}

	return 0;
}
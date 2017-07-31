#include <stdio.h>
int main()
{
	int i, j;

	printf("원하는 단을 입력하세요 : ");
	scanf("%d", &i);
	printf("* %d단 \n", i);
	for (j = 1; j <= 9; j++)
	{
		printf("%d*%d=%d ", i, j, i*j);
	}

	return 0;
}
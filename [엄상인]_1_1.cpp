#include <stdio.h>
int mul(int i);
int main()
{
	int i;

	printf("단을 입력하시오 : ");
	scanf("%d", &i);

	mul(i);
}
int mul(int i)
{
	int j;

	for (j = 1; j <= 9; j++)
		printf("%d*%d=%d\n", i, j, i*j);
}
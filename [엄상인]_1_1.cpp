#include <stdio.h>
int mul(int i);
int main()
{
	int i;

	printf("���� �Է��Ͻÿ� : ");
	scanf("%d", &i);

	mul(i);
}
int mul(int i)
{
	int j;

	for (j = 1; j <= 9; j++)
		printf("%d*%d=%d\n", i, j, i*j);
}
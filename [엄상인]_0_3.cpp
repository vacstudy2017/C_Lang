#include <stdio.h>
int main()
{
	int i, j;

	printf("���ϴ� ���� �Է��ϼ��� : ");
	scanf("%d", &i);
	printf("* %d�� \n", i);
	for (j = 1; j <= 9; j++)
	{
		printf("%d*%d=%d ", i, j, i*j);
	}

	return 0;
}
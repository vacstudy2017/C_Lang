# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{

	int i;
	int n;
	int a = 0;
	int b = 0;
	int c = 1;

	printf("�Ǻ���ġ �� �Է� : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) 
	{
		printf("%d ", a);
		b = a + c;
		a = c;
		c = b;
	}

	printf("\n\n");

	return 0;
}

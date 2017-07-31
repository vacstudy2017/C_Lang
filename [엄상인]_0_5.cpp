#include <stdio.h>
int main()
{
	int num, i;
	int n1 = 0, n2 = 1, n3;

	printf("피보나치 수 입력 : ");
	scanf("%d", &num);
	if (num == 1)
		printf("%d", n1);
	else printf("%d %2d", n1, n2);

	for (i = 3; i <= num; i++)
	{
		n3 = n1 + n2;
		printf("%5d", n3);
		n1 = n2;
		n2 = n3;
	}
	printf("\n");

	return 0;
}


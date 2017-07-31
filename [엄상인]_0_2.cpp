#include <stdio.h>
int main()
{
	int a, b, i;

	printf("범위를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	printf("범위에서 홀수는 :");
	for (i = a; i <= b; i++)
	{
		if (i % 2 == !0)
			printf("%3d", i);
	}
	printf("\n");
	printf("범위에서 짝수는 :");
	for (i = a; i <= b; i++)
	{
		if (i % 2 == 0)
			printf("%3d", i);
	}
	printf("\n");

	return 0;
}
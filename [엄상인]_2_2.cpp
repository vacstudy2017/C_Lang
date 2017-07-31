#include <stdio.h>
int main()
{
	int num[5];
	int i=0;
	int low1=99999, low2=99999;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
		if (num[i] < low1)
		{
			low2 = low1;
			low1 = num[i];
		}
		else if (num[i] < low2)
			low2 = num[i];
	}
	printf("두번째로 작은 수 : %d\n", low2);

	return 0;
}
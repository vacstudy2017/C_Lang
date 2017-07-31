#include <stdio.h>
int main()
{
	int num[5], max, min;
	int i;

	for (i = 0; i < 5; i++)
		scanf("%d", &num[i]);

	max = min = num[0];
	for (i = 1; i < 5; i++)
	{
		if (max < num[i])
			max = num[i];
		else if (min > num[i])
			min = num[i];
	}
	printf("ÃÖ´ñ°ª : %d, ÃÖ¼Ú°ª : %d\n", max, min);

	return 0;
}
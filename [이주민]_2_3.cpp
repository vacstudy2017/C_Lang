# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[7] = { 0 };
	int i, j, k;

	printf("���� 7�� �Է�: ");
	for (i = 0; i < 7; i++)
		scanf("%d", &num[i]);

	for (i = 0; i < 7; i++)
	{
		for (k = 0; k < 6 - i; k++)
		{
			if (num[k] > num[k + 1])
			{
				j = num[k];
				num[k] = num[k + 1];
				num[k + 1] = j;
			}
		}
	}
	printf("�ִ� ���ڴ� %d�Դϴ�. \n", num[6]);
	printf("�ּ� ���ڴ� %d�Դϴ�. \n", num[0]);

	return 0;
}
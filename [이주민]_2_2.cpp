# define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num[5] = { 0 };
	int i, j, k;

	printf("���� 5�� �Է�: ");
	for (i = 0; i < 5; i++)
		scanf("%d", &num[i]);

	for (i = 0; i < 5; i++)
	{
		for (k = 0; k < 4 - i; k++)
		{
			if (num[k] > num[k + 1])
			{
				j = num[k];
				num[k] = num[k + 1];
				num[k + 1] = j;
			}
		}
	}
	printf("�� ��°�� ���� ���ڴ� %d�Դϴ�. \n", num[1]);

	return 0;
}
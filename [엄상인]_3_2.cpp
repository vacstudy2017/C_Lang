#include <stdio.h>
void square(int *p);
int main()
{
	int num;

	printf("���� �Է� : ");
	scanf("%d", &num);

	square(&num);

	return 0;
}
void square(int *p)
{
	*p = *p * *p;
	printf("���� : %d\n", *p);
}
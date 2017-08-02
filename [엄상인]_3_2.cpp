#include <stdio.h>
void square(int *p);
int main()
{
	int num;

	printf("숫자 입력 : ");
	scanf("%d", &num);

	square(&num);

	return 0;
}
void square(int *p)
{
	*p = *p * *p;
	printf("제곱 : %d\n", *p);
}
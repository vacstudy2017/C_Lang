#include <stdio.h>
void change(int *p1, int *p2);
int main()
{
	int num1, num2;

	printf("����1 : ");
	scanf("%d", &num1);
	printf("����2 : ");
	scanf("%d", &num2);
	printf("\n");
	printf("Before\n");
	printf("> ����1 : %d, ����2 : %d\n", num1, num2);

	change(&num1, &num2);

	return 0;
}
void change(int *p1, int *p2)
{
	int tmp;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("After\n");
	printf("> ����1 : %d, ����2 : %d\n", *p1, *p2);
}

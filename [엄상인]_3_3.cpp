#include <stdio.h>
void change(int *p1, int *p2);
int main()
{
	int num1, num2;

	printf("숫자1 : ");
	scanf("%d", &num1);
	printf("숫자2 : ");
	scanf("%d", &num2);
	printf("\n");
	printf("Before\n");
	printf("> 숫자1 : %d, 숫자2 : %d\n", num1, num2);

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
	printf("> 숫자1 : %d, 숫자2 : %d\n", *p1, *p2);
}

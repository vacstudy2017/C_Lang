#include <stdio.h>
int main()
{
	int a, b, c, d;
	int num;

	printf("두 수를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	printf("두 수를 교환한 결과 : %d %d \n\n", b, a);
	printf("10~99의 숫자를 입력하세요 : ");
	scanf("%d", &num);
	c = num / 10;
	d = num % 10;
	printf("1의 자리 수 : %d \n", c);
	printf("10의 자리 수 : %d \n", d);
	printf("교환한 결과 : %d \n", 10 * d + c);

	return 0;
}
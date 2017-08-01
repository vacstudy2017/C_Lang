#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main(void)
{
	int num;
	int *pnum = &num;

	printf("숫자 입력 : ");
	scanf("%d", &num);

	printf("num : %d\n", num);
	printf("*pnum : %d\n", *pnum);

	printf("&num : %p\n", &num);
	printf("pnum : %p\n", pnum);

}
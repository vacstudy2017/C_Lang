#include <stdio.h>
int main()
{
	int ndata;
	int *pndata = &ndata;

	printf("���� �Է� : ");
	scanf("%d", &ndata);
	printf("num : %d\n", ndata);
	printf("*pnum : %d\n", *pndata);
	printf("&num : %p\n", &ndata);
	printf("pnum : %p\n", pndata);

	return 0;
}
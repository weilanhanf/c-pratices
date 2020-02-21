#include<stdio.h>

int main()
{
	int a;
	int *p = &a;
	a = 233;
	printf("%d %d\n", *p, a);
	*p = 244;
	printf("%d %d", *p, a);
	return 0;
 } 

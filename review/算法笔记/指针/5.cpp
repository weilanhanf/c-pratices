#include<stdio.h>

int main()
{
	int a[10]={1,2,3,4,5};
	int *p=a, *q=&a[5];
	printf("a[0]=%d\n", *p);
	printf("a[5]=%d\n", *q);
	printf("q-p=%d", q-p);
	return 0;
}

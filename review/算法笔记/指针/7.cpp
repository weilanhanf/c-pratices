#include<stdio.h>

void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	int a=0, b=1;
	int *p=&a, *q=&b;
	printf("before swap, a=%d, b=%d\n", a, b);
	swap(p,q);
	printf("after swap, a=%d, b=%d", a, b);
	return 0; 
}

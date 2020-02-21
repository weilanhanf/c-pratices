#include<stdio.h>

int main()
{
	int a[10] = {1, 1, 0, 2};
	int *p = a;
	printf("%d\n", *p);
	
	printf("%d\n", *(p+1)); 
	
	printf("%d\n", *(p+2)); 
	
	printf("%d", *(p+3)); 
	return 0;
} 

#include<stdio.h>

int main()
{
	int a[10], *p, i;
	for(i=0;i<10;i++)
		scanf("%d", &a[i]);
	printf("\n");
	for(i=0;i<10;i++)
		printf("%d\t", *(a+i));
	return 0;
}

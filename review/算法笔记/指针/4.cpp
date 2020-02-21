#include<stdio.h>

//Ö¸ÕëÆ«ÒÆ 
int main()
{
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	for(int *p=a;p<a+10;p++)
		printf("%d\t", *p); 
	return 0;
}

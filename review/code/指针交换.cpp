#include<stdio.h>

void swap(int x, int y)
{
	int temp;
	temp=x; x=y; y=temp;
 } 
 
 int main()
 {
 	int a, b;
 	int *point_a, *point_b;
 	scanf("%d, %d", &a, &b);
 	point_a = &a; point_b = &b;
 	if(a<b)
 		swap(*point_a, *point_b);
 	printf("\n%d, %d\n", a, b);
 }

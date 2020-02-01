#include<stdio.h>

double fab(double n)
{
	if(n==1)
		return n;
	else
		return n*fab(n-1);
 } 
 
 int main()
 {
 	int i;
    double s;
	for(i=1;i<=20;i++)
	{
		printf("%lf\n", (double)i);
		s += fab((double)i);	
	}	
 	printf("sum=%lf", s);
 }

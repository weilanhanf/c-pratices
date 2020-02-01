#include<stdio.h>

int fab(int n)
{
	if(n==1)
		return n;
	else
		return n*fab(n-1);
 } 
 
  int main()
 {
 	int i=5;	
 	printf("sum=%d", fab(i));
 }

#include<stdio.h>
#include<math.h>
#include<string.h>

//用*打印菱形，*中间以空格隔开
//如n=5时打印
//  *  
// ***
//***** 
// ***
//  *

int main()
{
	int n, half;
	scanf("%d", &n); 
	half = n/2;
	for(int i=1;i<=half+1;i++)
	{
		for(int j=i;j<=half;j++)
			printf("  ");
		for(int j=1;j<=(2*i-1);j++)
			printf("* ");
		printf("\n");
	}
	
	
	for(int i=half+2;i<=n;i++)
	{
		for(int j=i;j>half+1;j--)
			printf("  ");
		for(int j=1;j<=((n+1-i)*2-1);j++)
			printf("* ");
		printf("\n");
	}
	
	
	return 0;
}

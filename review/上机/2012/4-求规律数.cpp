#include<stdio.h>
#include<string.h>

//求出10-99之间所有每位数的乘积大于每位数之和的数，如98满足：9*8>9+8

int main()
{
	int n, x, y;
	for(n=10;n<=99;n++)
	{
		x = n/10;
		y = n%10;
		if(x*y>x+y)
		printf("%d\n", n);
	}
	
	return 0;
}

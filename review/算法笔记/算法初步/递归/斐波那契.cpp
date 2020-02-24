#include<stdio.h>

//int f(int n)
//{
//	if(n==0||n==1)
//		return n;
//	else
//		return f(n-1) + f(n-2);
//}

int f(int n)
{
	int x, y, z;
	x = 0;
	y = 1;
	for(int i=2;i<=n;i++)
	{
		z = x+y;
		x = y;
		y = z;
	}
	return y;
}

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++) 
		printf("%d ", f(i));
	return 0;
 } 

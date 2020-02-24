#include<stdio.h>

int f(int n)
{
	if(n==1)
		return n;
	else
		return f(n-1)*n;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", f(n));
}

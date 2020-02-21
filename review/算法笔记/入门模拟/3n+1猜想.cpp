#include<stdio.h>

int main()
{
	int T=0, n;
	scanf("%d", &n);
	while(n!=1)
	{
		T++;
		if(n%2==0)
			n /= 2;
		else
			n = (3*n+1)/2;
	}
	printf("%d", T);
	return 0;
}

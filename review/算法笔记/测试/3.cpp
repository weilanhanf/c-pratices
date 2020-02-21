#include<stdio.h>

int main()
{
	int T, n, x, sum;
	scanf("%d", &T);
	while(T--)
	{	sum = 0;
		scanf("%d", &n);
		for(int i=0;i<n;i++)
		{
			scanf("%d", &x);
			sum += x;
		}
		printf("sum=%d\n", sum);
	}

//	int T, a, b;
//	scanf("%d", &T);
//	while(T--)
//	{
//		scanf("%d %d", &a, &b);
//		printf("%d\n", a+b);
//	}
	return 0;
}

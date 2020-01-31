#include<stdio.h>

int main()
{
	int k, n, sum=0, t;
	scanf("%d %d", &k, &n);
	t = k; 
	for(int i=1;i<=n;i++)
	{
		printf("%d\n", t);
		sum += t;
		t = 10*t;
		t += k;
	}
	printf("a+aa+...=%d\n", sum);
 } 

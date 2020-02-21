#include<stdio.h>
#define maxSize 200

int main()
{
	int a[maxSize];
	int n, x, k;
	while(scanf("%d", &n)!=EOF)
	{
		for(int i=0;i<n;i++)
			scanf("%d", &a[i]);
		scanf("%d", &x);
		for(k=0;k<n;k++)
			if(a[k]==x)
			{
				printf("%d\n", k);
				break;
			}
		if(k==n)
			printf("-1\n");
		
	}
	return 0;
}

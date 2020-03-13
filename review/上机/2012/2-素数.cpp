#include<stdio.h>

const int maxn = 101;

int num=0;
int p[maxn]={0}, prime[maxn]={0};


void primeTable()
{
	int i, j;
	for(i=2;i<maxn;i++)
	{
		if(p[i]==0)
		{
			prime[num++] = i;
			for(j=i*2;j<maxn;j+=i)
				p[j]=1;
		}
	}
}


int main()
{
	int n;
	scanf("%d", &n);	
	primeTable();
	for(int i=0;i<n;i++)
	{
		printf("%d", prime[i]);
		if(i!=n-1)
			printf(" ");
		
	}
	
	return 0;
}

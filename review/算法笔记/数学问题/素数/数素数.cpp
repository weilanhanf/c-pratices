#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

// PAT B 1013 

const int maxn=100001;
int pNum=0;
int p[maxn]={0}, prime[maxn]={0};


void findPrime(int n)
{
	for(int i=2;i<maxn;i++)
		if(p[i]==0)
		{
			prime[pNum++] = i;
			if(pNum>=n)
				break;
			for(int j=i+i;j<maxn;j+=i)
				p[j]=1;
		}
	
	return ; 
 } 

int main()
{
	int m, n, i=1;
	scanf("%d %d", &m ,&n);
	findPrime(n);
	for(int k=m-1;k<n;k++)
	{
		printf("%3d ", prime[k]);
		if((i)%10==0)
			printf("\n");
		i++;
	}
	return 0;
}

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

const int maxn=10010;
int prime[maxn]={0}, p[maxn]={0};
int num=0;
int a[maxn]={0}, t=0;

void primeTable()
{
	int i, j;
	for(i=2;i<maxn;i++)
	{
		if(p[i]==0)
		{
			prime[num++] = i;//是素数加入prime数组 
			for(j=2*i;j<maxn;j+=i)
				p[j] = 1;//表示j不是素数 
		}
	}
}


void dpSubset(int s[], int n, int M)
{
	bool subset[n+1][M+1];
	int i,j;
	for(i=0;i<=n;i++)
		subset[i][0] = true;
	
	
	for(j=0;j<=M;j++)
		subset[0][j] = false;
		
	subset[0][s[0]] = true;
	
	for(i=0;i<=n;i++)
		for(j=0;j<=M;j++)
			if(j<s[i-1])
				subset[i][j] = subset[i-1][j];
			else
				subset[i][j] = subset[i-1][j] || subset[i-1][j-s[i-1]];
				
	if(subset[n][M]==true)
		i=n;
		while(i>=0)
		{
			if(subset[i][M]==true&&subset[i-1][M]==false)
			{
				a[t++] = s[i-1];
				M -= s[i-1];
			}
			if(M==0)
				break;
			i--;
		}

	for(i=0;i<t;i++)
		printf("%d\n", a[i]);

}


int main()
{
	int sums, k, i;
	primeTable();
	sums = 0;
	k = 0;
	for(i=0;i<num;i++)
		if(sums<2008)
		{
			sums += prime[i];
			k++; 
		}
	sums = 0;
	for(i=0;i<k;i++)
	{
		sums += prime[i];
		printf("%d, sums=%d\n", prime[i], sums);
	}
	
	printf("asdf\n");
	
	dpSubset(prime, 34, 2006);
	
	return 0;
 } 


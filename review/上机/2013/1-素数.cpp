#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;


const int manx=101;

int pNum=0;
int p[maxn]={0}, prime[maxn]={0};


void creatPrimeTable()
{
	int i,j;
	for(i=2;i<maxn;i++)
	{
		if(p[i]==0)
		{
			prime[pNum++] = i;
			for(j=i+1;j<maxn;j+=i)
				p[j] = 1;
		}
	}
}



bool isPrime(int n)
//ÅÐ¶ÏÊÇ·ñÎªËØÊý 
{
	int i;
	for(i=2;i<=(n/2);i++)
		if(n%i==0)
			return false;
	return true;
}


int main()
{
	int n, j;
	scanf("%d", &n);
	for(j=2;j<=n;j++)
	{
		if(isPrime(j)==true)
		{
			printf("%d", j);
			if(j!=n-1)
				printf(" ");
		}
	}
	
	return 0;
 } 

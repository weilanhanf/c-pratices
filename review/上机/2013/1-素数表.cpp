#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

const int maxn = 101;
int num = 0;
int p[maxn]={0}, prime[maxn]={0};
//用数组prime存储素数
//p[i]=0表示i为素数，p[i]=1表示i不是素数 


void creatPrimeTable() 
{
	for(int i=2;i<maxn;i++)
	{
		if(p[i]==0)
		{
			prime[num++] = i;
			for(int j=2*i;j<maxn;j+=i)
			//这里是 j=i+i，表示如果i不是素数，那么i的整数倍都不是素数 
				p[j] = 1;
		}
	}
}


int main()
{
	creatPrimeTable();
	for(int i=0;i<10;i++)
	{
		printf("%d", prime[i]);
		if(i!=9)
			printf(" ");
	}
	
	return 0;
}

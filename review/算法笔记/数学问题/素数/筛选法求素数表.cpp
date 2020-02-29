#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

const int maxn=101;
int prime[maxn]={0}, p[maxn]={0};
int pNum=0;


void findPrime()
{
	for(int i=2;i<maxn;i++)
		if(p[i]==0)
		{
			prime[pNum++] = i;
			for(int j=i+i;j<maxn;j+=i)
				p[j] = 1;		
		}
	return ;
}

int main()
{
	findPrime();
	for(int i=0;i<pNum;i++)
		printf("%dÊÇËØÊý\n", prime[i]);
	return 0;
 } 

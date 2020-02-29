#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;


bool isPrime(int n)
{
	if(n<=1)
		return false;
	else
		for(int i=2;i*i<n;i++)
			if(n%i==0)
				return false;	
	return true;
}


const int maxn=10;
int pNum=0;
int prime[maxn]={0};

void findPrime()
{
	for(int i=1;i<100;i++)
	{
		if(pNum>=10)
			break;
		if(isPrime(i)==true)
			prime[pNum++]=i;
	}
	
	return ;
}


struct factor{
	int x;
	int cnt;
}fac[10];


int  main(){
	int n, num=0, k;
	scanf("%d", &n);
	k = n;
	if(n==1)  //特殊情况 
		printf("1=1");
	else
	{
		findPrime();  // 生成素数表prime[] 
//		for(int i=0;i<maxn;i++)
//			printf("%d ", prime[i]);
		for(int i=0;i<maxn;i++)
		{
			if(n%prime[i]==0)
			{
				fac[num].x = prime[i];
				fac[num].cnt = 0;
				while(n%prime[i]==0)
				{
					n /= prime[i];
					fac[num].cnt++;	
				} 
					num++;
			}
			if(n==1)
				break;
		} 
		
		if(n!=1)
		{
			fac[num].x = n;
			fac[num++].cnt = 1;
		}
		for(int j=0;j<num;j++)
		{
			printf("%d^%d", fac[j].x, fac[j].cnt);
			if(j!=num-1)
				printf(" * ");
		}
		printf(" = %d", k);
		
	}
	return 0; 
} 

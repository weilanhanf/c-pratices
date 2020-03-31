#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;


//如果一个数是素数，并且能被分解为C（C>=2）个连续素数的和，则称这个数为“超素数”，请编程判断一个数是否是超素数。


const int maxn=10000;
int p[maxn]={0};
int prime[maxn]={0};
int num=0;


void primeTable(int x)
{
    for(int i=2;i<=x;i++)
    {
        if(p[i]==0)
        {
            prime[num++] = i;
            for(int j=2*i;j<maxn;j+=i)
                p[j] = 1;
        }
    }
}


bool isPrime(int x)
{
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return false;
	return true;
}
 
 

int main()
{
	int x;
	scanf("%d", &x);
	primeTable(x);
	
	if(isPrime(x)==false)
	{
		printf("no\n");
		return 0;
	}
	
	for(int i=0;i<=10;i++)
		printf("%d ", prime[i]);
	printf("\n");
	
	int sums=0, count=0;
	int i=0, j=0;
	int flag = false;
	
	while(!flag)
	{
		sums+=prime[j];
		count++;
		if(sums<x)
			j++;
		else if(sums==x)
		{
			flag=true;
			break;
		}
		else if(sums>x)
			break;
	}
	for(;i<=j;i++)
		printf("%d ", prime[i]);
	printf("\nsums1=%d\n", sums);
	
	if(sums>x)
	{
		while(sums>x&&!flag&&count>1)
		{
			sums-=prime[i];
			i++;
			count--;
			if(sums==x&&count>1)
			{
				flag=true;
				break;
			}
			else if(sums<x&&count<1)
			{
				j++;
				sums+=prime[j];
				continue;
			}
			
		}
		
	}
	
	for(;i<=j;i++)
		printf("%d ", prime[i]);
	printf("\nsums2=%d\n", sums);
	
	if(flag==true)
	{
		for(;i<=j;i++)
			printf("%d ", prime[i]);
		printf("\nyes\n");
	}
	
	else
		printf("no\n");
	 
	 
	return 0;
}



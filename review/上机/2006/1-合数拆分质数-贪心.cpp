#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;


//出错 
//sums=2127, diff=121
//sums-diff=2006
//diff=8, a[0]=113
//diff=1, a[1]=7
//需要剔除   7
//需要剔除 113
//最后diff是1不是0 

const int maxn=2009;

int num=0;
int p[maxn]={0}, prime[maxn]={0}; 


void primeTable()
//求素数表存储在prime数组中 
{
	int i;
	for(i=2;i<maxn;i++)
	{
		if(p[i]==0)
		{
			prime[num++]=i;
			for(int j=2*i;j<maxn;j+=i)
				p[j]=1;
		}
	}
}


int main()
{
	int i, j; 
	int sums, k;
	sums = 0;
	
	primeTable();
	
//	for(int i=0;i<num;i++)
//		printf("%d ", prime[i]);
	
	for(k=0;k<num;k++)
	{
		sums += prime[k];
		if(sums>=2006)
			break;
	}//跳出循环时，i指向prime数组和相应的最后一个元素 
	
	if(sums==2006)//刚好求得一定prime数组中下标为0,1,2...i的元素和符合要求 
	{
		for(i=0;i<=k;i++)
			printf("%4d\n", prime[i]);
	}
	else if(sums>2006)
	{
		int a[maxn]={0};//prime表中需要剔除的元素 
		int diff, t;
		
		t=0;//用t来记录剔除元素表a中的元素 
		diff = sums-2006;
		printf("sums=%d, diff=%d\n",sums, diff);	
		printf("sums-diff=%d\n",sums-diff);	
		
		for(i=k;i>=0&&diff!=0;i--)//找到需要剔除的元素并且放入数组a中 
		{
			if(prime[i]==diff||(prime[i]<diff&&prime[i+1]>diff))
			{
				diff = diff-prime[i];
				a[t++] = prime[i];	
				printf("diff=%d, a[%d]=%d\n", diff, t-1, prime[i]);
			}
		}
		printf("diff=%d\n", diff);
		
		int flag;
		int num = 1;
		for(i=0;i<=k;i++)
		{
			printf("第%d个：", num++);
			flag=0;//如果prime[i]剔除数组a中，则flag=1，默认不需要剔除 
			for(j=0;j<t;j++)
				if(prime[i]==a[j])
					flag=1;
			if(flag==0)//不需要剔除，正常输入 
				printf("%4d\n", prime[i]);
			else if(flag==1)
				printf("需要剔除%4d\n", prime[i]);
				
			
		} 
	}
	
	return 0;
}




































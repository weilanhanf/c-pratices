#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

const int maxn=10010;
int prime[maxn]={0}, p[maxn]={0};
int num=0;

//如果用贪心从右往左一次递减，最后剩1无法消去， 求不出 
//用动态规划按照子集和问题求解，只能求出来其中一个方案，没办法求出来最佳方案 
//太菜了，想不出来更好的办法
//参考： 
//https://www.bilibili.com/video/av18512769
//https://zhuanlan.zhihu.com/p/37822898


void primeTable()
//生成素数表prime  保存10010以内的素数 
{
	p[2] = 0;
	for(int i=2;i<maxn;i++)
	{
		if(p[i]==0)
		{
			prime[num++] = i;
			for(int j=2*i;j<maxn;j+=i)
				p[j] = 1;
		}
	}
}
 

void dpSubset(int arr[], int n, int S)
//从长度为n数组arr中找出和为S的一组组合 
{
	int subset[n][S+1]={0};
	
	//初始化 
	for(int i=0;i<n;i++)
		subset[i][0] = 1;
	for(int j=0;j<=S;j++)
		subset[0][j] = 0;
	subset[0][arr[0]] = 1;
	
	
	for(int i=1;i<n;i++)//动态规划 
		for(int j=1;j<=S;j++)
			if(arr[i] > j)//只能不选 
				subset[i][j] = subset[i-1][j];
			else //选或者不选 
				subset[i][j] = subset[i-1][j] || subset[i-1][j-arr[i]]; 
				
	if(subset[n-1][S]==1)//回溯法 
	{
		int i = n-1, k=0;
		int sol[maxn] = {0};
		while(i>=0)
		{
			if((subset[i][S]==1)&&(subset[i-1][S]==0))
			{
				sol[k++] = arr[i];
				S -= arr[i];
			}
			if(S==0)
				break;
		 	i--;
		}
		int sums = 0;
		printf("solution exist:\n");
		for(int j=0;j<k;j++)
		{
			sums += sol[j];
			printf("%4d ", sol[j]);
		}
		printf("\nsums=%d", sums);
	}
	else
		printf("no solution\n");

 } 


int main()
{
	
	int S = 2008; 
	int sums=0, n=0;
	primeTable();
	for(int i=0;i<num;i++)
	//从左到右找出最少需要多少prime数组中的素数可以满足和S=2008 
	{
		sums += prime[i];
		n++;
		if(sums>S)
			break;
	}
	
	dpSubset(prime, n, S); 
	
	return 0;
 } 

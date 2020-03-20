#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

const int maxn=10010;
int prime[maxn]={0}, p[maxn]={0};
int num=0;

//�����̰�Ĵ�������һ�εݼ������ʣ1�޷���ȥ�� �󲻳� 
//�ö�̬�滮�����Ӽ���������⣬ֻ�����������һ��������û�취�������ѷ��� 
//̫���ˣ��벻�������õİ취
//�ο��� 
//https://www.bilibili.com/video/av18512769
//https://zhuanlan.zhihu.com/p/37822898


void primeTable()
//����������prime  ����10010���ڵ����� 
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
//�ӳ���Ϊn����arr���ҳ���ΪS��һ����� 
{
	int subset[n][S+1]={0};
	
	//��ʼ�� 
	for(int i=0;i<n;i++)
		subset[i][0] = 1;
	for(int j=0;j<=S;j++)
		subset[0][j] = 0;
	subset[0][arr[0]] = 1;
	
	
	for(int i=1;i<n;i++)//��̬�滮 
		for(int j=1;j<=S;j++)
			if(arr[i] > j)//ֻ�ܲ�ѡ 
				subset[i][j] = subset[i-1][j];
			else //ѡ���߲�ѡ 
				subset[i][j] = subset[i-1][j] || subset[i-1][j-arr[i]]; 
				
	if(subset[n-1][S]==1)//���ݷ� 
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
	//�������ҳ�������Ҫ����prime�����е��������������S=2008 
	{
		sums += prime[i];
		n++;
		if(sums>S)
			break;
	}
	
	dpSubset(prime, n, S); 
	
	return 0;
 } 

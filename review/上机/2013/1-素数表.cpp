#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

const int maxn = 101;
int num = 0;
int p[maxn]={0}, prime[maxn]={0};
//������prime�洢����
//p[i]=0��ʾiΪ������p[i]=1��ʾi�������� 


void creatPrimeTable() 
{
	for(int i=2;i<maxn;i++)
	{
		if(p[i]==0)
		{
			prime[num++] = i;
			for(int j=2*i;j<maxn;j+=i)
			//������ j=i+i����ʾ���i������������ôi������������������ 
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

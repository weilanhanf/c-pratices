#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;


//���� 
//sums=2127, diff=121
//sums-diff=2006
//diff=8, a[0]=113
//diff=1, a[1]=7
//��Ҫ�޳�   7
//��Ҫ�޳� 113
//���diff��1����0 

const int maxn=2009;

int num=0;
int p[maxn]={0}, prime[maxn]={0}; 


void primeTable()
//��������洢��prime������ 
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
	}//����ѭ��ʱ��iָ��prime�������Ӧ�����һ��Ԫ�� 
	
	if(sums==2006)//�պ����һ��prime�������±�Ϊ0,1,2...i��Ԫ�غͷ���Ҫ�� 
	{
		for(i=0;i<=k;i++)
			printf("%4d\n", prime[i]);
	}
	else if(sums>2006)
	{
		int a[maxn]={0};//prime������Ҫ�޳���Ԫ�� 
		int diff, t;
		
		t=0;//��t����¼�޳�Ԫ�ر�a�е�Ԫ�� 
		diff = sums-2006;
		printf("sums=%d, diff=%d\n",sums, diff);	
		printf("sums-diff=%d\n",sums-diff);	
		
		for(i=k;i>=0&&diff!=0;i--)//�ҵ���Ҫ�޳���Ԫ�ز��ҷ�������a�� 
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
			printf("��%d����", num++);
			flag=0;//���prime[i]�޳�����a�У���flag=1��Ĭ�ϲ���Ҫ�޳� 
			for(j=0;j<t;j++)
				if(prime[i]==a[j])
					flag=1;
			if(flag==0)//����Ҫ�޳����������� 
				printf("%4d\n", prime[i]);
			else if(flag==1)
				printf("��Ҫ�޳�%4d\n", prime[i]);
				
			
		} 
	}
	
	return 0;
}




































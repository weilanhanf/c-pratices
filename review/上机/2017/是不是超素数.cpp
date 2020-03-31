#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;


//���һ�����������������ܱ��ֽ�ΪC��C>=2�������������ĺͣ���������Ϊ�����������������ж�һ�����Ƿ��ǳ�������


const int maxn=10000;
int p[maxn]={0};
int prime[maxn]={0};//������ 
int num=0;


void primeTable(int x)//��������� 
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


bool isPrime(int x)//�ж��Ƿ�Ϊ���� 
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
	
	if(isPrime(x)==false)//���x����������ֱ���˳� 
	{
		printf("no\n");
		return 0;
	}
	
	for(int i=0;i<=10;i++)
		printf("%d ", prime[i]);
	printf("\n");
	
	int sums=0, count=0;
	int i=0, j=0;//i��j�ֱ�ָ�������ļ�����������β 
	int flag = false;
	
	while(!flag) 
	{
		sums+=prime[j];
		count++;
		if(sums<x)//С��һֱ�� 
			j++;
		else if(sums==x)//ǡ�õ��� 
		{
			flag=true;
			break;
		}
		else if(sums>x)//�ҵ�����x��sums���˳� 
			break;
	}

	
	if(sums>x)
	{
		while(sums>x&&!flag&&count>1)
		{
			sums-=prime[i];
			i++;//ָ��i���� 
			count--;
			if(sums==x&&count>1)
			{
				flag=true;
				break;
			}
			else if(sums<x&&count>1)//ָ��i��j���� 
			{
				j++;
				sums+=prime[j];
				count++; 
				continue;
			}
			
		}
		
	}

	
	if(flag==true)//i��jָ��������ӡ 
	{
		for(int t=i;t<=j;t++)
			printf("%d ", prime[t]);
		printf("\nyes\n");
	}
	
	else
		printf("no\n");
	 
	 
	return 0;
}



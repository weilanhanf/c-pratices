#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;


// �������ɸ������������ж������ĸ�����
//  �����������Ȱ���һ������N��1<=N<=100����ʾ���ݵĸ�����Ȼ����N������1С��10000��������

const int maxn=10000;
int p[maxn];


bool isPrime(int x)//�ж��Ƿ�Ϊ���� 
{
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return false;
	return true;
}


int main()
{
	int n, count;
	count = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &p[i]);
		if(isPrime(p[i])==true)
			count++;
	}
	
	printf("%d\n", count++);
	return 0;
}


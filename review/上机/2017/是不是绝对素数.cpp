#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int p[10];
int num;

//    ����������ָ������������������Ҳ���������������磺107��701�Ǿ�����������[m,n]��Χ֮�ڵ����о���������

bool isPrime(int x)//�ж��Ƿ�Ϊ���� 
{
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return false;
	return true;
}


 
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	for(int i=m;i<=n;i++)
	{
		int x, y;
		x = i;
		y = 0;
		num = 0;
		while(x!=0)
		{
			p[num++] = x%10;
			x /= 10;
		}
			
		for(int t=0;t<num;t++) // yΪi������ ��i=123, y=321 
			y += (int)pow(10.0, num-1-t)*p[t];	
				
		if(isPrime(i)&&isPrime(y))
			printf("%d�Ǿ�������\n", i);
		
	}	
	
	return 0;
}

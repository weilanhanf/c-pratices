#include<stdio.h>

using namespace std;


const int maxn=3000;


int main()
{
	int N, len, carry, temp;
	while(scanf("%d", &N)!=EOF)
	{
		len = 0;
		int data[maxn];
		for(int i=0;i<maxn;i++)
			data[i] = 0;
		
		data[0] = 1;
		for(int i=1;i<=N;i++)
		{
			carry = 0;
			for(int j=0;j<=len;j++)
			{
				temp = (data[j]*i+carry);
				data[j] = (data[j]*i+carry)%10;
				carry = temp/10;
			}
			while(carry!=0)
			{
				data[++len] = carry%10;
				carry /= 10;
			}
		}
		
		for(int i=len;i>=0;i--)
			printf("%d", data[i]);
		printf("\n");
	}
	
	
	return 0;
}

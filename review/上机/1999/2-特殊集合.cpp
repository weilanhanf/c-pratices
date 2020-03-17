#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

const int maxn = 10001;


int main()
{
	int a[maxn], M[maxn], num=0;
	fill(a, a+maxn, 1);
	fill(M, M+maxn, 0);
	a[1]=0;
	for(int i=1;i<maxn;i++)
	{
		if(a[i]==0&&num<100)
		{
			M[num++] = i;
			a[2*i+1] = 0;
			a[3*i+1] = 0;
		}
			
	}
	
	for(int i=0;i<num;i++)
		printf("%d, %d\n", i+1, M[i]);
		
	return 0;
}

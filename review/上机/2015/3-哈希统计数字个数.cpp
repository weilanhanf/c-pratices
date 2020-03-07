#include<stdio.h>
#include<algorithm>
using namespace std;

 
const int maxn=100;

int main()
{
	int count[100], num[100];
	int n=0, x, k=0;
	fill(count, count+100, 0);
	while(scanf("%d", &x))
	{
		if(x!=0)
		{
			num[n++]=x;
			count[x]++;
		}
		else
			break;	
	}
	for(int i=1;i<maxn;i++)
	{
		if(count[i]>count[k])
			k=i; 
	}
	for(int i=0;i<n;i++)
		printf("%d ", num[i]);
	printf("%d %d", n, k);
	
	
	
	return 0;
 } 

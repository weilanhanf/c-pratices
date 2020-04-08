#include<stdio.h>
#include<algorithm>

using namespace std;


const int maxn=1000;

int a[maxn], dp[maxn];


int main()
{
	int N;
	scanf("%d", &N);
	
	for(int i=0;i<N;i++)
	{
		scanf("%d", &a[i]);
		dp[i] = 1;	//³õÊ¼»¯ 
	}
	
	int ans=0;
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(a[i]>=a[j]&&dp[j]+1>dp[i]) 
				dp[i] = max(dp[j]+1, dp[i]);
		}
		ans = max(dp[i], ans);
	}
	printf("%d\n", ans);
	
	
	return 0;
}

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

const int maxn = 10010;
int dp[maxn], a[maxn];


int main()
{
	int n, i, j, ans;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
		scanf("%d", &a[i]);
		
	ans = -1;
	for(i=1;i<=n;i++)
	{
		dp[i] = 1;
		
		for(j=1;j<i;j++)
			if(a[i]>=a[j]&&dp[j]+1>dp[i])
				dp[i] = dp[j] + 1;
		
		ans = max(dp[i], ans);
	}

	printf("%d", ans);

	return 0;
 } 

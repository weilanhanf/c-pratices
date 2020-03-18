#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;


const int maxn=10010;
int dp[maxn], a[maxn];

int main()
{
	int n, i;
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
		
	dp[0] = a[0];
	for(i=1;i<n;i++)
		dp[i] = max(dp[i], dp[i-1]+a[i]);
	
	for(i=0;i<n;i++)
		printf("%d ", dp[i]);
	
	return 0;
}

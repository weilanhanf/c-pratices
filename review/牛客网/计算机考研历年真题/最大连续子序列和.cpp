#include<stdio.h>
#include<algorithm>

using namespace std;


const int maxn=1000;

int a[maxn], dp[maxn];


//dp[i] = max(dp[i-1]+a[i], a[i])

int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0;i<N;i++)
		scanf("%d", &a[i]);
		
	dp[0] = a[0];
	
	for(int i=1;i<N;i++)
		dp[i] = max(dp[i-1]+a[i], a[i]);
		
	int k=-10000;
	for(int i=0;i<N;i++)
		if(dp[i]>k)
			k = dp[i];
			
	printf("%d\n", k);
	
	return 0;
}

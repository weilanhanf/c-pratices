#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

const int maxn=1000;

int dp[maxn][maxn];
int w[maxn], c[maxn];



int main()
{
	int n, V;
	scanf("%d %d", &n, &V);
	for(int i=0;i<n;i++)
		scanf("%d", &w[i]);
	for(int i=0;i<n;i++)
		scanf("%d", &c[i]);
		
	for(int v=0;v<=V;v++)
		dp[0][v] = 0;

	for(int i=1;i<=n;i++)
		for(int v=w[i];v<=V;v++)
				dp[i][v] = max(dp[i-1][v], dp[i-1][v-w[i]]+c[i]);
				
	for(int i=0;i<=n;i++)
	{
		for(int v=0;v<=V;v++)
			printf("%3d", dp[i][v]);
		printf("\n");
	}

	return 0;
}

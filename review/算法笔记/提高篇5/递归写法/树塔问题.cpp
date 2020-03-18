#include<stdio.h>
#include<string.h> 
#include<math.h>
#include<algorithm>
using namespace std;


const int maxn=101;
int dp[maxn][maxn];
int a[maxn][maxn];



int main()
{
	int n, i, j;
	scanf("%d", &n);
	memset(a, -1, maxn*maxn); 
	memset(dp, -1, maxn*maxn); 
	
	for(i=1;i<=n;i++)
		for(j=1;j<=i;j++)
			scanf("%d", &a[i][j]);

	for(i=1;i<=n;i++)
		dp[n][i] = a[n][i];
		
	for(i=n-1;i>=1;i--)
		for(j=1;j<=i;j++)
			dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]) + a[i][j];

			

	printf("%d\n", dp[1][1]);

//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//			printf("%d ", dp[i][j]);
//		printf("\n");
//	}


	return 0;
 } 

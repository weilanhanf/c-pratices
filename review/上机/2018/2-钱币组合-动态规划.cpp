#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>

using namespace std;


// 如果有1000元
//不使用coin[5]=100面额的， 就是用前5种硬币组合，不使用这个100纸币的组合数为dp[4][1000]
// 如果使用coin[5]=100的面额，至少使用了1张，还剩下900元，使用这个100硬币的组合数为dp[5][900] 
// 使用与不使用两种情况 
// dp[5][1000]=dp[4][1000]+dp[5][9000] 

//如果有5元
//只使用1元的表示为1种方案， 使用5元和1元 的表示就有2中方案
//dp[1][5]=dp[0][5]+1  5=coin[1]



//dp(i, j) =
//    dp(i-1, j)                   j 小于面额 p[i] 时
//    dp(i-1, j) + dp(i, j - p[i])   大于时
//    dp(i-1, j) + 1                等于时


const int maxn=100;
int dp[maxn][maxn];



int main()
{
	int n;
	int coin[6] = {1, 5, 10, 20, 50, 100};
	scanf("%d", &n);
	
	//边界条件初始化 
	for(int i=0;i<6;i++)// 钱为0 
		dp[i][0] = 0;
	for(int j=0;j<=n;j++)// 只用面值为1的纸币表示 
		dp[0][j] = 1;
	
	//状态转移方程 
	for(int i=1;i<6;i++)
		for(int j=1;j<=n;j++)
		{
			if(coin[i] > j)
				dp[i][j] = dp[i-1][j];
			else if(coin[i] == j)
				dp[i][j] = dp[i-1][j] + 1;
			else if(coin[i] < j)
			{
				int x, y;
				x = dp[i-1][j];
				y = dp[i][j-coin[i]];
				dp[i][j] = x+y;
			}
		 } 
		 
//	for(int i=0;i<6;i++)
//	{
//		for(int j=0;j<=n;j++)
//			printf("%3d ", dp[i][j]);
//		printf("\n");
//	}
		 
	printf("组合方案一共%d种\n", dp[5][n]); 
	
	
	return 0;
 } 

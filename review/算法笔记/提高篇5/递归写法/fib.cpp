#include<stdio.h>
#include<algorithm>
using namespace std;


const int maxn=100;
int dp[maxn];


int f(int n)
{
	if(n==1||n==0)
		return 1;
	else if(dp[n]!=-1)
		return dp[n];
	else 
	{
		dp[n] = f(n-1) + f(n-2);
		return dp[n];
	}
}



int main()
{
	int n=5;
	fill(dp, dp+maxn, -1);
	printf("%d\n", f(n));
	for(int i=0;i<n;i++)
		printf("%d ", dp[i]);
	return 0;
 } 

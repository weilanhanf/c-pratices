#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h> 

using namespace std;

 
//a = sads， b = admi 
//状态方程：
//dp[i][j] =
//1  dp[i-1][j-1]+1  a[i]=b[j] 
//2   max(dp[i-1][j], dp[i][j-1])  a[i]!=b[j] 

const int maxn=1000;
char a[maxn], b[maxn];//a,b分别为输入串 
int dp[maxn][maxn]={0};
char c[maxn]; //c为公共传最长 
int num=0;


int main()
{
	//从下标1开始记录 
	gets(a+1);
	gets(b+1);
	
	//长度也从下标1记录 
	int alen, blen;
	alen = strlen(a+1);
	blen = strlen(b+1);
	
	//边界值初始化 
	for(int i=0;i<=alen;i++)
		dp[i][0] = 0;
	for(int j=0;j<=blen;j++)
		dp[0][j] = 0;
	
	//动态规划，状态转移方程 
	for(int i=1;i<=alen;i++)
		for(int j=1;j<=blen;j++)
		{
			if(a[i]==b[j])//如果相同，则长度加一 
				dp[i][j] = dp[i-1][j-1] + 1;
			else if(a[i]!=b[j])//否则从下标前一位中找最长长度 
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	
	int len = dp[alen][blen];//最长公共串长度 
	
//	for(int i=0;i<=alen;i++)
//	{
//		for(int j=0;j<=blen;j++)
//			printf("%d ", dp[i][j]);
//		printf("\n"); 
//	}

	//回溯找公共子串'
	for(int i=alen;i>=1;i--)
	{
		for(int j=blen;j>=1;j--)
		{
			int x, y, z;
			z = dp[i][j];
			if(a[i]==b[j]&&z==len&&z==dp[i-1][j-1]+1)//是否满足条件 
				c[--len] = b[j];	//存放到数组c中				
		}
		if(len<=0)//全找到退出 
			break;
	}
	
	printf("最长公共串为：%s, 长度为%d\n",  c, dp[alen][blen]);
	
	return 0;
}

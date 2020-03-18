#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

const int maxn = 100;
int dp[maxn][maxn];
char a[maxn];
int len = 0;

int main()
{
	int i, j;
	int len1, len2;
	char str1[maxn], str2[maxn];
	
	gets(str1+1);
	gets(str2+1);
	
	len1 = strlen(str1+1);
	len2 = strlen(str2+1);
	
	for(i=0;i<=len1;i++)
		dp[i][0] = 0;

	for(j=0;j<=len2;j++)
		dp[0][j] = 0;

	for(i=1;i<=len1;i++)
	{
		for(j=1;j<=len2;j++)
			if(str1[i]==str2[j])
			{
				dp[i][j] = dp[i-1][j-1]+1;
				a[len++] = str1[i];
			}
			else
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		
			a[len++] = '*';
	}
	printf("%d\n", dp[len1][len2]);
	for(i=0;i<len;i++)
		printf("%c", a[i]);
	
	return 0;
}

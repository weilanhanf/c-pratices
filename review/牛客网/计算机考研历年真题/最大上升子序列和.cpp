#include<stdio.h>
#include<math.h> 
#include<algorithm>
using namespace std;


int n[1000], dp[1000];

int main()
{
	int N;
	while(scanf("%d", &N)!=EOF)
	{
		for(int i=0;i<N;i++)
		{
			scanf("%d", &n[i]);
			dp[i] = n[i];
		}
		
		int ans=0; 
		for(int i=0;i<N;i++)
		{
			for(int j=0;j<i;j++)
				if(n[i]>n[j])
					dp[i] = max(dp[j]+n[i], dp[i]);
			ans = max(dp[i], ans);
		} 
		printf("%d\n", ans);
		
	}
	
	
	return 0;
}

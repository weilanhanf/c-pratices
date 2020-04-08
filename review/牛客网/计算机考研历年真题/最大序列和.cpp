#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h>

using namespace std;

const int maxn = 10000000;



//×´Ì¬·½³Ì
//dp[i] = max(a[i], dp[i-1]+a[i])

int main()
{
    int n;
    while(scanf("%d", &n)!=EOF)
    {
        int dp[maxn]={0};
        int a[maxn]={0};
        
        for(int i=0;i<n;i++)
            scanf("%d", &a[i]);
        
        dp[0] = a[0];
        
        for(int i=1;i<n;i++)
            dp[i] = max(dp[i-1]+a[i], a[i]);
        
        printf("%d\n", dp[n-1]);
        
    }
    
    return 0;
}

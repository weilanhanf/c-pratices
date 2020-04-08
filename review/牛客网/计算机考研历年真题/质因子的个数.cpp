#include<stdio.h>
#include<algorithm>
#include<math.h>

int main()
{
    long i, n;
    while(scanf("%d", &n)!=EOF)
    {
        int count=0;
        for(i=2;i<=n;i++)
        {
            while(n%i==0)
            {
                 n = n/i;
                 count++;
            }
            if(n<=1)
                break;
        }

        printf("%d\n", count);  
    }
    
    return 0;
}

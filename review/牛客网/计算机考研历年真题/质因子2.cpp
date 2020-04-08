#include<stdio.h>
#include<algorithm>
#include<math.h>

int main()
{
    long i, n;
    while(scanf("%d", &n)!=EOF)
    {
        int count=0;
        long a = (long)sqrt((double)n); 
        for(i=2;i<=a;i++)
        {
            while(n%i==0)
            {
                 n = n/i;
                 count++;
            }
            if(n<=1)
                break;
        }
        if(n>1)
        	count++;
        printf("%d\n", count);  
    }
    
    return 0;
}

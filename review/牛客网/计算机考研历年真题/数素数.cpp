#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

const int maxn = 10000;

int num=1;
int prime[maxn]={0}, p[maxn]={0};


void primeTable()
{
    for(int i=2;i<maxn;i++)
    {
        if(p[i]==0)
        {
            prime[num++] = i;
            for(int j=2*i;j<maxn;j+=i)
                p[j] = 1;
        }
    }
}


int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    primeTable();
    
    int count=0;
    for(int i=x;i<=y;i++)
    {
        count++;
        printf("%d", prime[i]);
        if(count%10==0)
            printf("\n");
        else if(count!=y)
            printf(" ");
        else
        {
		}
    }
    return 0;
}

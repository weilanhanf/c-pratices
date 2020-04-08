#include<stdio.h>

const int maxn=10000;


int main()
{
    int sums[maxn]={0};
    int a0, a1, p, q, k;
    scanf("%d %d %d %d %d", &a0, &a1, &p, &q, &k);
    sums[0] = a0;
    sums[1] = a1;
    for(int i=2;i<=k;i++)
    {
        sums[i] = (p*sums[i-1] + q*sums[i-2])%10000;
    }
    printf("%d\n", sums[k]);
    
    return 0;
}

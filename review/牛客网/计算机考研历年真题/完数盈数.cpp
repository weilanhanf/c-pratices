#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

const int maxn=60;

int a[maxn], b[maxn];
int anum=0, bnum=0;
int factor[maxn], fnum=0;


void generateFactor(int x)
{
    fnum = 0;
    for(int i=1;i<=x/2;i++)
        if(x%i==0)
            factor[fnum++] = i;
}


bool isCompleteNumber(int x)
{
    int sums = 0;
    
    for(int i=0;i<fnum;i++)
        sums += factor[i];
    if(sums==x)
        return true;
    else
        return false;
}


bool isProfitNumber(int x)
{
    int sums = 0;
    for(int i=0;i<fnum;i++)
        sums += factor[i];
    if(sums>x)
        return true;
    else
        return false;
}


int main()
{
    
    for(int i=2;i<=60;i++)
    {
        generateFactor(i);
        if(isCompleteNumber(i)==true)
            a[anum++] = i;
        if(isProfitNumber(i)==true)
            b[bnum++] = i;
    }
    
    printf("E: ");
    for(int i=0;i<anum;i++)
    {
        printf("%d", a[i]);
        if(i<anum-1)
            printf(" ");
        else if(i==anum-1)
            printf("\n");
    }
    
    printf("G: ");
    for(int i=0;i<bnum;i++)
    {
        printf("%d", b[i]);
        if(i<bnum-1)
            printf(" ");
        else if(i==bnum-1)
            printf("\n");
    }
    
    return 0;
}

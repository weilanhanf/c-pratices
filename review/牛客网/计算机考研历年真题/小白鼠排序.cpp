#include<string.h>
#include<algorithm>
#include<math.h> 
#include<stdio.h>

using namespace std;

const int maxn=100;

typedef struct Mouse{
    char color[10];
    int weigh;
}Mouse;

Mouse m[maxn];

bool cmp(Mouse a, Mouse b)
{
    if(a.weigh>b.weigh)
        return true;
    else 
    	return false;
}

int main()
{
    int N;
    while(scanf("%d", &N)!=EOF)
    {
        for(int i=0;i<N;i++)
            scanf("%d %s", &(m[i].weigh), m[i].color);
        stable_sort(m, m+N, cmp);
        for(int i=0;i<N;i++)
            printf("%s\n", m[i].color);
        
    }
    
    return 0;
}

#include<string.h>
#include<stdio.h>
#include<algorithm>

const int maxn=60;

int main()
{
    char a[maxn], b[maxn], c[maxn], d[maxn];
    char week[7][maxn] = {
        "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN",
    };
    int m[2] = {-1}, n, i;
    
    scanf("%s %s %s %s", a, b, c, d);
    
    for(i=0;i<60;i++)
    {
        if('A'<=a[i]&&a[i]<='Z'&&a[i]==b[i]&&m[0]==-1)
        {
            m[0] = a[i] - 'A';
            continue;
        }
        if(m[0]!=-1&&a[i]==b[i])
        {
            if('A'<=a[i]&&a[i]<='Z')
                m[1] = a[i] - 'A' + 10;
            else 
                m[1] = a[i] - '0';
            break;
        }
    }
    
    for(i=0;i<60;i++)
        if(c[i]==d[i]&&((c[i]>='a'&&c[i]<='z')||(c[i]>='A'&&c[i]<='Z')))
        {
            n = i;
            break;
        }
//    printf("m0=%d m1=%d, n=%d\n", m[0], m[1], n);
    
    printf("%s ", week[m[0]]);
    if(m[1]>=10)
        printf("%d:", m[1]);
    else if(m[1]<10)
        printf("0%d:", m[1]);
    if(n>10)
        printf("%d", n);
    else if(n<10)
        printf("0%d", n);
    
    return 0;
}

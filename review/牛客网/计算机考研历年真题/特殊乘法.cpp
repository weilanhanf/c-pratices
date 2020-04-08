#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

const int maxn=100;


int main()
{
    char str1[maxn], str2[maxn];
    while(scanf("%s %s", str1, str2)!=EOF)
    {
        int len1, len2;
        int sums=0;
        len1 = strlen(str1);
        len2 = strlen(str2);
        for(int i=0;i<len1;i++)
            for(int j=0;j<len2;j++)
                sums += (str1[i]-'0')*(str2[j]-'0');
                
        printf("%d\n", sums);
    }
    
    return 0;
}













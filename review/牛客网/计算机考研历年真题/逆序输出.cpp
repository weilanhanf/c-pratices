#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

const int maxn=100;


int main()
{
    char str[maxn];
    int len;
    while(gets(str)!=NULL)
    {
        len = strlen(str);
        reverse(str, str+len);
        puts(str);
    } 
    return 0;
}

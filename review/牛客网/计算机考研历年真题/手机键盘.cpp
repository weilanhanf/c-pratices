#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

const int maxn=1000;

int press[maxn] = {
    1,2,3,  1,2,3,  1,2,3,  1,2,3, 1,2,3,
    1,2,3,4,  1,2,3,  1,2,3,4,
};

int loc[maxn] = {
	1,1,1,  2,2,2,  3,3,3, 4,4,4, 5,5,5,
    6,6,6,6,  7,7,7, 8,8,8,8,
};

char str[maxn];


int main()
{
    int len;
    
    while(gets(str)!=NULL)
    {
        int tim=0;
        len = strlen(str);
        
        for(int i=0;i<len;i++)
        {
            tim += press[str[i]-'a'];
            if(i+1<len)
                if(loc[str[i+1]-'a']==loc[str[i]-'a'])
                    tim += 2;
        }
        printf("%d\n", tim);
    }
    
    
    return 0;
}

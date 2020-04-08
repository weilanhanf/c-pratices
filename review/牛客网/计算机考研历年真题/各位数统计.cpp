#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;


const int maxn=1000;

int main()
{
    char str[maxn];
    int a[10];
    int len;
    while(gets(str)!=NULL)
    {
        len = strlen(str);
        fill(a, a+10, 0);
	    for(int i=0;i<len;i++)
		    a[str[i]-'0']++;
    	for(int i=0;i<10;i++)
			if(a[i]!=0)
				printf("%d:%d\n", i, a[i]); 
               
    }
    
    
    return 0;
}

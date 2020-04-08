#include<stdio.h>
#include<string.h>

const int maxn=80;

int main()
{
    char str1[maxn], str2[maxn];
    char str[maxn];
    bool flag = false;
    int len1, len2, num;
    num = 0;
    gets(str1);
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    
    for(int i=0;i<len1;i++)
    {
        flag = false;
        for(int j=0;j<len2;j++)
        {
        	if(str1[i]<='z'&&str1[i]>='a')
            		str1[i] -= 32;
            if(str2[i]<='z'&&str2[i]>='a')
            		str2[i] -= 32;
		    if(str1[i]==str2[j])
            {
                flag = true;
                break;
            }
		}
        if(flag==false)
        {
            bool t=false;
            for(int k=0;k<num;k++)
                if(str[k]==str1[i])
                {
                    t = true;
                    break;
                }
            if(t==false)
                str[num++] = str1[i];
        }
            
    }
    
	puts(str);  
		
    return 0;
}

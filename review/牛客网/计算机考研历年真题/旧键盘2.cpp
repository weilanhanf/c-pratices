#include<stdio.h>
#include<string.h>

const int maxn=80;

int main()
{
	char str1[maxn], str2[maxn];
    bool flag[256]={false};
    int len1, len2;
    gets(str1);
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);

	for(int i=0;i<len2;i++)
	{
		if(str2[i]<='z'&&str2[i]>='a')
    		str2[i] -= 32;
		flag[str2[i]] = true;
	}
	
	for(int i=0;i<len1;i++)
	{
        if(str1[i]<='z'&&str1[i]>='a')
    		str1[i] -= 32;		
		if(flag[str1[i]]==false)
			printf("%c", str1[i]);
		flag[str1[i]] = true;
	}

}

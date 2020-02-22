#include<stdio.h>
#include<string.h>

int main()
{
	char str[100], i, j;
	int len, sign=1;
	gets(str);
	len = strlen(str);
	for(i=0,j=len-1;i<j;i++,j--)
		if(str[i]!=str[j])
		{
			sign=0;
			break;
		}
	if(sign==0)
		printf("%s不是回文串", str);
	else
		printf("%s是回文串", str);
 } 

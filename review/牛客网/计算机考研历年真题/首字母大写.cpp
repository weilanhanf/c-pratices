#include<stdio.h>
#include<string.h>


void upper(char &ch)
{
	if(ch>='a'&&ch<='z')
		ch -= 32;
}


bool isalpa(char ch)
{
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		return true;
	return false;
}


int  main()
{
	char str[100];	
	while(gets(str)!=NULL)
	{
		int len = strlen(str);
			
		for(int i=0;i<len;i++)
		{
			if(i==0)
			{
				upper(str[i]);
				continue;
			}
			if(str[i-1]==' '||str[i-1]=='\t'||str[i-1]=='\r'||str[i-1]=='\n')
			{
				if(isalpa(str[i])==true)
				upper(str[i]);
			}
		 } 
		puts(str);
	}
	
	return 0;
}

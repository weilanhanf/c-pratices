#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;


//判断输入的字符串是否为合法字符串，下划线或者字母开头 

bool isalpha(char ch)
{
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		return true;
	return false;
}


bool isnumber(char ch)
{
	if(ch<='9'&&ch>='0')
		return true;
	return false;
}


int main()
{
	char str[100];
	while(gets(str)!=NULL)
	{
		bool flag=false;
		int len = strlen(str);
		for(int i=0;i<len;i++)
			if(str[i]>='A'&&str[i]<='Z')
				str[i] += 32;
				
		if(str[0]=='_'||isalpha(str[0]))
		{
			for(int i=1;i<len;i++)
				if(isalpha(str[i])||isnumber(str[i])||str[i]=='_')
					flag = true;
				else
					flag = false;
		}		 
		
		if(flag==true)
			printf("yes\n");
		else
			printf("no\n"); 
		
	} 


    return 0;
}

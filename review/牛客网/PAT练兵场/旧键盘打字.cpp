#include<stdio.h>
#include<string.h>

const int maxn=100000;


void lower(char ch)
{
	if(ch<='Z'&&ch>='A')
		ch += 32;
}


bool isUpper(char ch)
{
	if(ch<='Z'&&ch>='A')
		return true;
	else
		return false;

}


bool isLower(char ch)
{
	if(ch<='z'&&ch>='a')
		return true;
	else
		return false;

}

int main()
{
	char str1[67], str2[maxn];	
	bool a[256]={false};	
	gets(str1);
	gets(str2);
	
	bool isShiftBreak=false;
	for(int i=0;i<strlen(str1);i++)
	{
		if(str1[i]=='+')
			isShiftBreak=true;
	}
		
			
	for(int i=0;i<strlen(str1);i++)
	{
		a[str1[i]] = true;
		if(isLower(str1[i]))
			a[str1[i]-32] = true;

		if(isUpper(str1[i]))
			a[str1[i]+32] = true;		
		
	}


	for(int i=0;i<strlen(str2);i++)
	{
		if(isUpper(str2[i])==true&&isShiftBreak==true)
			continue;
			
		if(a[str2[i]]==false)
			printf("%c", str2[i]);
	}

	
	return 0;
} 

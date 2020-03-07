#include<stdio.h>
#include<string.h>

const int maxn = 100;

bool isalpa(char ch)
{
	if((ch<='z'&&ch>='a')||(ch<='Z'&&ch>='A'))
		return true;
	else
		return false;
}


bool islower(char ch)
{
	if(ch<='z'&&ch>='a')
		return true;
	else
		return false;
}


int main()
{
	char a[maxn];
	gets(a);
	int len=strlen(a), num=0;
	
	for(int i=1;i<len;i++)
	{
		if((i-1==0)&&isalpa(a[i-1]))
		{
			num++;
			if(islower(a[i-1]))
				a[i-1] -= 32;
		}
		if(a[i-1]==' '&&isalpa(a[i]))
		{
			num++;			
			if(islower(a[i]))
				a[i] -= 32;
		}
		if(a[i]=='\''&&isalpa(a[i+1]))  //缩写 
			num++; 
	}		
	puts(a);
	printf("\n单词个数为：%d", num);
	return 0;
 } 

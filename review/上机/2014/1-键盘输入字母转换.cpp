#include<stdio.h> 
#include<string.h>



int main()
{
	char ch; 
	while((ch=getchar())!=NULL)
	{
		if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
			printf("0");
		else if(ch>='0'&&ch<='9')
			printf("1");
	}
	
	return 0;
 } 

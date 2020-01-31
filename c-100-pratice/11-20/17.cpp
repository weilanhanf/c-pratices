#include<stdio.h>

int main(){
	char ch;
	int letters=0, digits=0,spaces=0,others=0;
	while((ch=getchar())!='\n')
	{
		if((ch<='z'&&ch>='a')||(ch<='Z'&&ch>='A'))
			letters++;
		else if(ch>='0'&&ch<='9')
			digits++;
		else if(ch==' ')
			spaces++;
		else
			others++;
	}
	printf("letters=%d, digits=%d, spaces=%d, others=%d", letters, digits, spaces, others);
}

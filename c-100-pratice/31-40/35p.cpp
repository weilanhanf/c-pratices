#include<stdio.h>
#include<string.h> 

int main(){
	char str[100], ch;
	int i, j, length;
	printf("ÇëÊäÈëÒ»´®×Ö·û£º");
	scanf("%s", str);
	length = strlen(str);
	for(i=1,j=length-1;i<j;i++,j--)
	{
		ch = str[i];
		str[i] = str[j];
		str[j] = ch;
	}
	puts(str);
}

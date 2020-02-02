#include<stdio.h>
#include<string.h>

void swap(char *a, char* b)
{
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

char* reverseStr(char* str)
{
	int length, i, j;
	length = strlen(str);
	for(i=0, j=length-1;i<j;i++,j--)
		swap(&str[i], &str[j]);
	
	return str;
}

int main(){
	char str[100];
	printf("请输入一串字符：");
	scanf("%[^\n]", str);
	printf("反转后为：%s", reverseStr(str));
} 

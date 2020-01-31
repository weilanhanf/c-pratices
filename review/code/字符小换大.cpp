#include<stdio.h>

int main(){
	
	char c;
	printf("输入一个小写字符："); 
	c = getchar();
	c = c - 32;
	printf("\n输出字符的大写形式：");
	putchar(c);
	return 0; 
} 

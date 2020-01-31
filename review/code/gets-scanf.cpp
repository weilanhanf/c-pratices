#include<stdio.h>

int main(){
	char str[5];
	
	printf("输入字符(gets接收)："); 
	gets(str);//gets输入只一起换行后的，但是没有上限控制，有可能造成数据溢出 
	/*
	printf("输入字符(scanf接收)："); 
	scanf("%s", str); //%s与scanf，字符中空格或者换行包括后面的会被一起 
	
	printf("输入字符(scanf处理空格后接收)："); 
	scanf("%[^\n]", str); 
	*/
	printf("printf打印\n"); 
	printf("%s\n", str);
	
	printf("puts打印\n"); 
	puts(str);
	
	return 0;
} 

#include<stdio.h>

int main(){
	char c;
	printf("请输入一个字符：");
	c = getchar();
	printf("输出输入字符：%c\n", c);
	printf("输出输入字符ASCII码：%d\n", c);
	 
	if(c<32) 
		printf("控制字符");
	else if(c>='0'&&c<='9')
		printf("数字");
	//else if(c>='A'&&c<='Z')
	else if(c>=65&&c<=90)
		printf("大写字母");
	else if(c>'a'&&c<'z')
		printf("小写字母");
	else
		printf("其他字符");
		
	return 0; 
	
} 

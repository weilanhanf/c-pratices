#include<stdio.h>
#include<string.h> 
// str1必须为字符数组，str1的空间必须足够容纳str2的内容。
// str2可以为字符串常量，也可以为字符数组 
// 不能用赋值语句为字符数组赋值
// c[34]='asdfasdf' 

int main(){
	char str1[6], str2[5];
	scanf("%s%s", str1, str2);
	puts(str1);
	puts(str2); 
	strcat(str1, str2);
	printf("输出str1：%s\n", str1);
	printf("输出str2：%s\n", str2);
	return 0;
}  

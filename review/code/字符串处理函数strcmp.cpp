#include<stdio.h>
#include<string.h> 

//str1和str2可以是字符串常量，字符数组。 
//不能用“==”比较两个字符串是否相同。 

int main(){
	int a, b, c;
	a = strcmp("ABC", "ABC"); //相等返回0 
	b = strcmp("abc", "ABC"); //逐个比较前面大于后面 则返回1，否则返回-1 
	c = strcmp("ABC", "abc");
	printf("a=%d, b=%d, c=%d", a, b, c);
	return 0;
} 

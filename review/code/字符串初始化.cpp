#include<stdio.h>
#include<string.h> 
//两种初始化方式，'\0'可以加可以不加 


int main(){
	char str1[] = "asdf";
	char str2[] = {'h', 'd', 'c', '\0'};
	int a, b;
	a = strlen(str1);
	b = strlen(str2); 
	printf("输出str1：%s, 长度为%d\n", str1, a);
	printf("输出str2：%s, 长度为%d\n", str2, b);
	return 0;
}  

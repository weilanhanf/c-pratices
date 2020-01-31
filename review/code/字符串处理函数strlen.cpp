#include<stdio.h>
#include<string.h> 

int main(){
	int c;
	int num = 123;
	c = strlen("abcd efgh\\\123");
	// 结束标记'\0'空格不算，\\算两个，\123是八进制转义字符 3*8^0+2*8^1+1*8^2=82
	printf("%d\n", c);
	printf("num的八进制为%o\n", num);
	return 0;
} 

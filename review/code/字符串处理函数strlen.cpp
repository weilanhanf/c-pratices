#include<stdio.h>
#include<string.h> 

int main(){
	int c;
	int num = 123;
	c = strlen("abcd efgh\\\123");
	// �������'\0'�ո��㣬\\��������\123�ǰ˽���ת���ַ� 3*8^0+2*8^1+1*8^2=82
	printf("%d\n", c);
	printf("num�İ˽���Ϊ%o\n", num);
	return 0;
} 

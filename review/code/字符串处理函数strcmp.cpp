#include<stdio.h>
#include<string.h> 

//str1��str2�������ַ����������ַ����顣 
//�����á�==���Ƚ������ַ����Ƿ���ͬ�� 

int main(){
	int a, b, c;
	a = strcmp("ABC", "ABC"); //��ȷ���0 
	b = strcmp("abc", "ABC"); //����Ƚ�ǰ����ں��� �򷵻�1�����򷵻�-1 
	c = strcmp("ABC", "abc");
	printf("a=%d, b=%d, c=%d", a, b, c);
	return 0;
} 

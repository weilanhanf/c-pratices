#include<stdio.h>

int main(){
	
	char c;
	printf("����һ��Сд�ַ���"); 
	c = getchar();
	c = c - 32;
	printf("\n����ַ��Ĵ�д��ʽ��");
	putchar(c);
	return 0; 
} 

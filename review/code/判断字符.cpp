#include<stdio.h>

int main(){
	char c;
	printf("������һ���ַ���");
	c = getchar();
	printf("��������ַ���%c\n", c);
	printf("��������ַ�ASCII�룺%d\n", c);
	 
	if(c<32) 
		printf("�����ַ�");
	else if(c>='0'&&c<='9')
		printf("����");
	//else if(c>='A'&&c<='Z')
	else if(c>=65&&c<=90)
		printf("��д��ĸ");
	else if(c>'a'&&c<'z')
		printf("Сд��ĸ");
	else
		printf("�����ַ�");
		
	return 0; 
	
} 

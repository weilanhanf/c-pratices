#include<stdio.h>

int main(){
	char str[5];
	
	printf("�����ַ�(gets����)��"); 
	gets(str);//gets����ֻһ���к�ģ�����û�����޿��ƣ��п������������� 
	/*
	printf("�����ַ�(scanf����)��"); 
	scanf("%s", str); //%s��scanf���ַ��пո���߻��а�������Ļᱻһ�� 
	
	printf("�����ַ�(scanf����ո�����)��"); 
	scanf("%[^\n]", str); 
	*/
	printf("printf��ӡ\n"); 
	printf("%s\n", str);
	
	printf("puts��ӡ\n"); 
	puts(str);
	
	return 0;
} 

#include<stdio.h>
#include<string.h> 
// str1��str2����Ϊ�ַ����飬str1�Ŀռ�����㹻����str2�����ݡ�
// �����ø�ֵ���Ϊ�ַ����鸳ֵ
// c[34]='asdfasdf' 

int main(){
	char str1[6], str2[5];
	scanf("%s%s", str1, str2);
	puts(str1);
	puts(str2); 
	strcpy(str1, str2);
	printf("���str1��%s\n", str1);
	printf("���str2��%s\n", str2);
	return 0;
}  

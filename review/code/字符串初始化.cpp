#include<stdio.h>
#include<string.h> 
//���ֳ�ʼ����ʽ��'\0'���Լӿ��Բ��� 


int main(){
	char str1[] = "asdf";
	char str2[] = {'h', 'd', 'c', '\0'};
	int a, b;
	a = strlen(str1);
	b = strlen(str2); 
	printf("���str1��%s, ����Ϊ%d\n", str1, a);
	printf("���str2��%s, ����Ϊ%d\n", str2, b);
	return 0;
}  

#include<stdio.h>  
// Сд��ĸת��Ϊ��д��ĸ��ֱ���������ĸ�ַ� 
int main(){
	char c;
	while(1){
	//	printf("������һ���ַ���");
		scanf("%c", &c);
		if(c>='a'&&c<='z')
			putchar(c-32);
		else if(c>='A'&&c<='Z')
			putchar(c);
		else
		{ 
			printf("\n����ѭ��");
			break;
		}  
	}
	
} 

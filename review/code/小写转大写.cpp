#include<stdio.h>  
// Сд��ĸת��Ϊ��д��ĸ��ֱ���������ĸ�ַ� 
int main(){
	char c;
	/* 
	while(1){
	//	printf("������һ���ַ���");
		c = getchar();
	//	printf("\n"); 
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
	*/
	
	while((c=getchar())!='0')
	{
		if(c>='a'&&c<='z')
		{
			putchar(c-32);
			printf("\n");
		}
		else if(c>='A'&&c<='Z')
		{
			putchar(c);
	 		printf("\n");
	 	}
	 } 
	
} 

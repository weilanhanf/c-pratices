#include<stdio.h>
#define LETTER 1 
/*
�������룺�ǶԲ�������ָ�������������ʹ��ֻ������һ�������Ž��б��롣
*/

// ����һ����ĸ�ַ���������Ҫ�����������룬
//ʹ֮�ܹ�����ĸȫ����Ϊ��д����� ��ĳ�ȫ��Сд��� 
int main(){
	char str[20]="C language", c, str1[23];
	scanf("%s", str1);
//	gets(str1);
//	puts(str1);  //Ĭ�ϻ��� 
	printf("str1=%s", str1);
	int i=0;
	while((c=str[i])!='\0')
	{
		i++; 
		#if LETTER
			if(c>='a'&&c<='z')
				c=c-32;
		#else
			if(c>='A'&&c<='Z')
				c=c+32;
		#endif
		printf("%c", c);
	 } 
}



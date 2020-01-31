#include<stdio.h>
#define LETTER 1 
/*
条件编译：是对部分内容指定编译的条件，使其只在满足一定条件才进行编译。
*/

// 输入一行字母字符，根据需要进行条件编译，
//使之能够将字母全部改为大写输出， 或改成全部小写输出 
int main(){
	char str[20]="C language", c, str1[23];
	scanf("%s", str1);
//	gets(str1);
//	puts(str1);  //默认换行 
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



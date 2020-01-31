#include<stdio.h>  
// 小写字母转换为大写字母，直到输入非字母字符 
int main(){
	char c;
	/* 
	while(1){
	//	printf("请输入一个字符：");
		c = getchar();
	//	printf("\n"); 
		if(c>='a'&&c<='z')
			putchar(c-32);
		else if(c>='A'&&c<='Z')
			putchar(c);
		else
		{ 
			printf("\n跳出循环");
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

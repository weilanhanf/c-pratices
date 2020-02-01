#include<stdio.h>

void reversePrint(int n)
{
	char next;
	if(n<=1)
	{
		next = getchar();
		printf("逆序输出字符：");
		putchar(next); 
	}
	else
	{
		next = getchar();
		reversePrint(n-1);
		putchar(next);
	}
}

int main(){	
	int i;
	printf("请输入一个整数："); 
	scanf("%d", &i);
	getchar();
	printf("请输入%d个字符：", i);
	reversePrint(i); 
} 

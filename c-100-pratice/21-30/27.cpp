#include<stdio.h>

void reversePrint(int n)
{
	char next;
	if(n<=1)
	{
		next = getchar();
		printf("��������ַ���");
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
	int i=5;
	printf("������5���ַ���");
	reversePrint(i); 	
} 

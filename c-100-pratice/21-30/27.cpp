#include<stdio.h>

void reversePrint(int n)
{
	char next;
	if(n<=1)
	{
		next = getchar();
		printf("ÄæÐòÊä³ö×Ö·û£º");
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
	printf("ÇëÊäÈë5¸ö×Ö·û£º");
	reversePrint(i); 	
} 

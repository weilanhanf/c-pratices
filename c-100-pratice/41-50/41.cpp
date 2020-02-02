#include<stdio.h>


int main()
{
	void fun();
	for(int i=1;i<=3;i++)
		fun();	
	
}

void fun()
{
	int i=0;
	static int static_i=0;
	printf("i=%d\n", i);
	printf("static_i=%d\n", static_i);
	i++;
	static_i++;
}


#include<stdio.h>

//ÒıÓÃ 

void change(int &a)
{
	a += 1;
}

int main()
{
	int a=1;
	change(a);
	printf("%d", a);
	return 0;
}

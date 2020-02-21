#include<stdio.h>

void change(int p)
{
	p += 1;
}

void change_p(int *p)
{
	*p += 1;
}

int main()
{
	int a=10;
	change(a);
	printf("change->%d\n", a);
	change_p(&a);
	printf("change_p->%d", a);
	return 0;
}

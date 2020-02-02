#include<stdio.h>

int mul(int x, int y)
{
	printf("x*y");
	return x*y;
}

int process(int a, int b, int (*fun)(int, int))
{
	int result;
	result = (*fun)(a, b);
	printf("=%d", result);
}

int main()
{
	int (*fun)(int, int);
	int a, b;
	printf("请输入两个整数：");
	scanf("%d %d", &a, &b);
	process(a, b, mul);
}

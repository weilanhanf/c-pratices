#include<stdio.h>

void swap(int *x, int *y)
{
	int t;
	t = *x, *x = *y; *y = t;
}

int main(){
	int a, b, c;
	printf("请输入三个整数：");
	scanf("%d %d %d", &a, &b, &c);
	if(a>b)	swap(&a, &b);
	if(a>c) swap(&a, &c);
	if(b>c) swap(&b, &c);
	printf("%d<%d<%d", a,b,c);
	
}

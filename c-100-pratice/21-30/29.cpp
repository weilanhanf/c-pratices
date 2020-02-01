#include<stdio.h>

int main(){
	int a, b, c, d, e;
	long x;
	printf("请输入一个5位数字："); 
	scanf("%ld", &x);
	a = x/10000;
//	b = x%10000/1000;
	b = x/1000%10;
//	c = x%1000/100;
	c = x/100%10;
//	d = x%100/10;
	d = x/10%120;
	e = x%10;
	if(a!=0)
		printf("5位数逆序为：%d,%d,%d,%d,%d\n", e,d,c,b,a);
	else if(b!=0)	
		printf("4位数逆序为：%d,%d,%d,%d\n", e,d,c,b);
	else if(c!=0)	
		printf("3位数逆序为：%d,%d,%d\n", e,d,c);
	else if(d!=0)	
		printf("2位数逆序为：%d,%d\n", e,d);
	else if(e!=0)	
		printf("1位数逆序为：%d\n", e);
} 

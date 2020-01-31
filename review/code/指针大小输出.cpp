#include<stdio.h>
//输入a和b两个整数，用指针的方法按照先大后小顺序输出 

int main(){
	
	int *p1, *p2, *p, a, b;
	scanf("%d %d", &a, &b);
	p1 = &a;
	p2 = &b;
	if(a<b)
	{
		p=p1;
		p1=p2;
		p2=p;
	}
	printf("\na=%d, b=%b\n", a, b);
	printf("max=%d, min=%d\n", *p1, *p2); 
}

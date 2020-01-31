#include<stdio.h>

int main(){
	int a, b;
	printf("请输入一个数：");
	scanf("%d", &a);
	printf("请再输入一个数："); 
	scanf("%d", &b);
	if(a==b)
		printf("相等");
	else
		printf("不相等"); 
} 

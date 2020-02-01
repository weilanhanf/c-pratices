#include<stdio.h>

int main(){
	int i, x, y;
	x=1;  //第十天的桃子 
	for(i=1;i<=9;i++)
	{
		y = (x+1)*2;
		x = y; 
	}
	printf("总共有%d个桃子。", x);
} 

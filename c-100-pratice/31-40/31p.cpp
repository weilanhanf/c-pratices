#include<stdio.h>

int main(){
	int n;
	char a, b;
	printf("请输入一个数字："); 
	scanf("%d", &n); 
	while(n>0)
	{
		scanf("%c%c", &a, &b);
		printf("%c%c\n", a, b);
		n--;
	}
}

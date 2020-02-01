#include<stdio.h>

int main(){
	int n;
	char a, b;
	printf("请输入一个数字："); 
	scanf("%d", &n); 
	getchar(); //清楚缓冲区换行 
	while(n>0)
	{
		scanf("%c%c", &a, &b);
		getchar();
		printf("%c%c\n", a, b);
		n--;
	}
}

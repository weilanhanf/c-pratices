#include<stdio.h>

int main(){
	char a[15], b[5], c[5];
	scanf("%s%s%s", a, b, c);
	printf("a=%s\nb=%s\nc=%s\n", a,b,c);
	scanf("%s", a);
	printf("a=%s\n", a);
	return 0;
} 

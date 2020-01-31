#include<stdio.h>

int main(){
	char str[5];
	int i;
	for(i=0;i<5;i++)
		scanf("%c", &str[i]);
	for(i=0;i<5;i++)
		printf("%c", str[i]);
	return 0;
}

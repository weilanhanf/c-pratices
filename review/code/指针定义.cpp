#include<stdio.h>

int main(){
	int i = 10;
	int *ip;
	ip=&i;
	printf("i=%d, &i=%d\n", i, &i);
	printf("ip=%d, *ip=%d", ip, *ip);	
}   

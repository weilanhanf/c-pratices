#include<stdio.h>

int main(){
	char a[]="come on", b[20];
	char *p1=a, *p2=b;
	int i;
	for(;*p1!='\0';p1++,p2++)
		*p2=*p1;
	*p2='\0';
	printf("string a is:%s\n", p1);
	printf("string b is:%s\n", p2);
}

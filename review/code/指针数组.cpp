#include<stdio.h>

int main(){
	char a[]="hello";
	char b[]="world";
	char *p[4];
	p[0]=a, p[1]=b;
	for(int i=0;i<4;i++)
		printf("%s\n", p[i]);
	
}

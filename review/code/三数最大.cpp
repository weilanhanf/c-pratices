#include<stdio.h>

int main(){
	
	int max, a, b, c;
	a = 100, b = 20, c = 90; 
	if(a>b&&a>c)
		printf("max=%d", a);
	if(b>c&&b>a)
		printf("max=%d", b);
	if(c>b&&c>a)
		printf("max=%d", c);
	
}

#include<stdio.h>


int main(){
	int max(int,int), (*p)(int,int);
	int a, b, c;
	scanf("%d, %d", &a, &b);
	p = max;
	c=(*p)(a,b);
	printf("a=%d, b=%d, max=%d\n", a,b,b);
}

int max(int x, int y){
	int z;
	if(x>y) z=x;
	else z=y;
	return z;
}

#include<stdio.h>

int max (int x, int y){
	printf("max=");
	return (x>y?x:y);
}

int min(int x, int y)
{
	printf("min=");
	return (x<y?x:y);
}

int add(int x, int y)
{
	printf("sum=");
	return (x+y);
}

void process(int x, int y, int (*func)(int, int))
{
	int result;
	result=(*func)(x, y);
	printf("%d\n", result);
}

int main(){
	int (*func)(int, int);
	int a, b;
	
	printf("enter two numbers:");
	scanf("%d %d", &a, &b);
	
	process(a, b, max);
	process(a, b, min);
	process(a, b, add);
	
	return 0;

}

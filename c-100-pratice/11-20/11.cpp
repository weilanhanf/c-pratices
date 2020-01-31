#include<stdio.h>
e
int fib(int n){
	if(n==1||n==0)
		return n;
	else
		return fib(n-1) + fib(n-2);
}

int main(){
	int f1=1, f2=1, m, n;
	scanf("%d", &n);
	m = fib(n);
	printf("%d", m);
	
} 

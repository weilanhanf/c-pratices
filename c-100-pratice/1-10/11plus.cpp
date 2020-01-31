#include<stdio.h>

int main(){
	int f1=1, f2=1, m, n;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{	
		printf("%d\n", f1);
		m = f1+f2;
		f1 = f2;
		f2 = m; 
	}
} 

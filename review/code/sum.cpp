/*计算两数之和*/ 

#include<stdio.h>

int add(int x, int y)
{
	int z;
	z = x + y;
	return z;
}

int main(){
	int a, b, sum;
	a = 10;
	b = 20;
	sum = add(a, b);
	printf("sum=%d\n", sum);
	return 0;	
} 



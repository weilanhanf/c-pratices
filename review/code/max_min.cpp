/*求两个数最大最小*/
#include <stdio.h>

int max(int x, int y){
	if(x > y)
		return x;
	else if(y > x)
		return y; 
} 

int min(int x, int y){
	if(x < y)
		return x;
	else if(y < x)
		return y; 
}

int main(){
	int a, b;
	int c ,d;
	a = 10;
	b = 20;
	c = min(a, b);
	d = max(a, b);
	printf("最大为%d\n", d);
	printf("最小为%d", c);
}

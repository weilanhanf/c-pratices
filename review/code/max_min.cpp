/*�������������С*/
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
	printf("���Ϊ%d\n", d);
	printf("��СΪ%d", c);
}

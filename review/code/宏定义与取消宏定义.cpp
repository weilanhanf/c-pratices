#include<stdio.h>
#include<math.h>
#define PI 3.14

/*
c语言中没有专门的函数来平方 x*X 
引入math，使用pow(被平方数，方数)函数 
*/

//#undef PI

int main(){
	int rad = 6;
	
	printf("radius=%d, area=%f\n", rad, PI*rad*rad);
	printf("radius=%d, area=%f", rad, PI*pow(rad, 2));
} 

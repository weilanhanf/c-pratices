#include<stdio.h>

int main(){
	double d1 = 1234.89, d2 = 1234.89;
	
	float f1 = 1234.89,  f2 = 1234.89;
	printf("float %f\n ", f1*f2);  //只有5-6位的精度 
	printf("double %f ", d1*d2);  //15-16位的精度 
}

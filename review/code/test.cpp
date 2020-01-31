#include<stdio.h>

int main(){
	int sign = 1;
	float term, deno=2.0, sum=1.0;
	while(deno<=100){
		sign=-sign;
		term=sign/deno;
		sum+=term;
		deno+=1;
	}
	printf("sum=%f", sum); 
	return 0;	
//	printf("%f\n", 1/3.0);	
//	printf("%d", 1/3);
} 

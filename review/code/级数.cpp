#include <stdio.h>

int main(){
	
	int sign = 1;
	float deno=2, sum=1.0, term;
	while(deno<=100){
		sign=-sign;
		term=sign/deno;
		sum+=term;
		deno+=1;
	} 
	printf("sum=%f\n", sum);
	
	return 0;
	 
} 

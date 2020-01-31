#include <stdio.h>

int main(){
	int sum = 0, term=1;
	while(term<=100){
		sum += term;
		term += 1;
	}
	printf("sum=%d", sum);
	return 0;
}

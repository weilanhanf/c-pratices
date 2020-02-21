#include<stdio.h>

int main(){
	int n = 12345, count = 0;
	while(n){
		count = count + n % 10;
		n = n / 10;
	}
	printf("count=%d\n",count);
	return 0;
}

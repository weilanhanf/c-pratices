#include<stdio.h>
#define PI 3.14159

int main(){
	int r;
	float area;
	for(r=1;r<=10;r++){
		area=PI*r*r;
		if(area>100) break;
		printf("r=%d, area=%f\n", r, area);
	}
	
} 

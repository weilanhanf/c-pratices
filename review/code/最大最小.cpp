#include<stdio.h>

int main(){
	float num[5], max, min;
	int i;
	for(i=0;i<5;i++)
		scanf("%f", &num[i]); 
	
	max=num[0];
	for(i=1;i<5;i++)
		if(num[i]>max)
			max=num[i];
	
	min=num[0];
	for(i=1;i<5;i++)
		if(num[i]<min)
			min=num[i];
	
	
	printf("max=%f, min=%f", max, min);

}
 

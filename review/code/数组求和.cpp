#include<stdio.h>

int main(){
	int s[5], i, sum=0;
	float ave;
	for(i=0;i<5;i++)
		scanf("%d", &s[i]);
	for(i=0;i<5;i++)
		sum+=s[i];
	ave = sum/5.0;
	printf("sum=%5.2f",ave);

}
 

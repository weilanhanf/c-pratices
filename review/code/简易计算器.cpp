#include<stdio.h>


float add(float a, float b)
{
	return (a+b);
}

float sub(float a, float b){
	return (a-b);
}

float mul(float a, float b){
	return (a*b);
}

float div(float a, float b){
	if(b==0){
		printf("除数不能为0"); 
		return 0;
	} 
	else
		return (a/b);
}


int main(){
	char ch;
	float a, b, c;
	scanf("%f%c%f=", &a, &ch, &b);
	switch(ch){
		case '+': c=add(a,b); break;
		case '-': c=sub(a,b); break;
		case '*': c=mul(a,b); break;
		case '/': c=div(a,b); break;
		default: c=0;break;
	}
	printf("%f%c%f=%f", a, ch, b, c);
} 

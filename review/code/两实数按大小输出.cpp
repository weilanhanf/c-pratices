#include<stdio.h>

int main(){
	
	float a, b, t;
	printf("����������ʵ����");
	scanf("%f %f", &a, &b);
	if(a<b)
	{ t = a; a = b; b = t; }
	printf("%5.2f>=%5.2f", a, b);
	return 0;
}

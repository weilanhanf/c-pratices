#include<stdio.h>
//����a��b������������ָ��ķ��������ȴ��С˳����� 

int main(){
	
	int *p1, *p2, *p, a, b;
	scanf("%d %d", &a, &b);
	p1 = &a;
	p2 = &b;
	if(a<b)
	{
		p=p1;
		p1=p2;
		p2=p;
	}
	printf("\na=%d, b=%b\n", a, b);
	printf("max=%d, min=%d\n", *p1, *p2); 
}

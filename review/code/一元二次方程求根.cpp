#include<stdio.h>
#include<math.h>

int main(){
	float a, b, c, dis, p, q, x1, x2;
	scanf("a=%f,b=%f,c=%f", &a, &b, &c);
	dis = b*b-4*a*c;
	p = -b/(2*a);
	q = sqrt(dis)/(2*a);
	x1 = p+q;
	x2 = p-q;
	printf("\nx1=%5.2f, x2=%5.2f", x1, x2); 
}

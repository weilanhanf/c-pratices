#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, s, area;
	scanf("%f %f %f", &a, &b, &c);
	//a=3, b=4, c=5;
	s = 1.0/2*(a+b+c);
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%f,b=%f,c=%f,s=%f\n",a,b,c,s);
	printf("area=%.2f\n", area);
	
}

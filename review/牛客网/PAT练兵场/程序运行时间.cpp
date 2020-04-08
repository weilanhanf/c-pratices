#include<stdio.h>


const int CLK_TCK=100;


int main()
{
	int c1, c2;
	int h, m, s;
	int f;
	
	scanf("%d %d", &c1, &c2);
	
	f = (int)(1.0*(c2-c1)/CLK_TCK+0.5);
	
	h = f/3600;
	m = (f%3600)/60;
	s = f%60;
	printf("%02d:%02d:%02d\n", h, m, s);
	
	
	
	return 0;
}

#include<stdio.h>

int main(){
	int i;
	double deno, s=0, m, n, z;//m,n,z都要与deno同类型 
	m=2; n=1;
	deno = m/n;
	s += deno;
	for(i=2;i<=20;i++)
	{
		z = m+n;
		n = m;
		m = z;
		deno = m/n;
		s += deno;
		printf("%.f/%.f=%f\n", m,n,deno);
	}
	printf("sum=%9.6f\n", s);
}

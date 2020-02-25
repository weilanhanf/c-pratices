#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int a = 12, b = 24, d = -1;
	double c = -1.23;
	printf("%d > %d\n", max(a, b), min(a, b));
	printf("abs(%d) = %d\n", d, abs(d));  // abs作用int 
	printf("fabs(%.2f) = %.2f", c, fabs(c)); // fabs作用double 
	
	return 0;
 } 

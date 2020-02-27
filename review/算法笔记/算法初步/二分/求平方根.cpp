#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

const double epx=1e-5;


double f(double x)
{
	return x*x;
 } 


double calSqrt(int x)
{
	double mid, left=1,right=x;
	while(right-left>epx)
	{
		mid = (right+left)/2;
		if(f(mid)>x)
			right = mid;
		else
			left = mid;
	}
	return mid;
}

int main()
{
	int n;
	scanf("%d", &n);
	printf("%.3f\n", calSqrt(n));
	return 0;
 } 

#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

const double epx=1e-5;


// Çóx*x-1µÄ¸ù 

double f(double x)
{
	return x*x - 1;
 } 


double calSqrt(double l, double r)
{
	double mid, left=l,right=r;
	while(right-left>epx)
	{
		mid = (right+left)/2;
		if(f(mid)>0)
			right = mid;
		else
			left = mid;
	}
	return mid;
}

int main()
{
	double n, l, r;
	scanf("%lf %lf", &l, &r);
	printf("%.3f\n", calSqrt(l, r));
	return 0;
 } 

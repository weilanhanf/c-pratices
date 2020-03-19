#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;


int main()
{
	int n;
	double x, y, z, sums, c=0.8, d=0.9;
	x=1.0/20;//甲单独工作 
	y=1.0/30;//乙单独工作 
	z = x*c + y*d;//甲乙合作效率 
	
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		sums = i*z + x*(n-i);
		if(sums>=1)
		{
			printf("甲乙合作%d天", i);
			break;
		}
	}
	
	
	return 0;	
}

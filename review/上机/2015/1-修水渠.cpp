#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;


int main()
{
	int n;
	double x, y, z, sums, c=0.8, d=0.9;
	x=1.0/20;//�׵������� 
	y=1.0/30;//�ҵ������� 
	z = x*c + y*d;//���Һ���Ч�� 
	
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		sums = i*z + x*(n-i);
		if(sums>=1)
		{
			printf("���Һ���%d��", i);
			break;
		}
	}
	
	
	return 0;	
}

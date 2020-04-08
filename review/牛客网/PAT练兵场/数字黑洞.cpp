#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;


bool cmp(int m, int n)
{
	return m>n;
}


int change(int a[])
{
	int sums=0;
	int k=1;
	for(int i=3;i>=0;i--)
	{
		sums += a[i]*k; 
		k *= 10;
	}
	return sums;
}


void transform(int n, int a[])
{
	
	for(int i=3;i>=0;i--)
	{
		a[i] = n%10;
		n /= 10;
	}
}


int main()
{
	int x, y, z, n;
	int a[4]={0};
	scanf("%d", &n);
	
	do{
		transform(n, a);
		sort(a, a+4);
		x = change(a);
		sort(a, a+4, cmp);
		y = change(a);
		z = y-x;
		printf("%04d - %04d = %04d\n", y, x, z);
		n = z;
	}while(n!=0&&n!=6174);
	
	return 0;
}

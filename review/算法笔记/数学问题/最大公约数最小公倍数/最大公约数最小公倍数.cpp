#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;


int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}


int gcd_non_recur(int a, int b)
{
	int x=a, y=b, z;
	do{
		z = b;
		b = a%b;
		a = z;
	}while(b!=0);
	return a;
}

int main()
{
	int x,y;
	scanf("%d %d", &x, &y);
	printf("%d, %d的最大公约数为%d\n", x, y, gcd_non_recur(x,y));	
	printf("%d, %d的最小公倍数为%d\n", x, y, (x/gcd(x,y))*y);
	return 0;
}

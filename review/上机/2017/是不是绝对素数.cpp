#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int p[10];
int num;

//    绝对素数是指本身是素数，其逆序也是素数的数，例如：107与701是绝对素数。求[m,n]范围之内的所有绝对素数。

bool isPrime(int x)//判断是否为素数 
{
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return false;
	return true;
}


 
int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	for(int i=m;i<=n;i++)
	{
		int x, y;
		x = i;
		y = 0;
		num = 0;
		while(x!=0)
		{
			p[num++] = x%10;
			x /= 10;
		}
			
		for(int t=0;t<num;t++) // y为i的逆序 ，i=123, y=321 
			y += (int)pow(10.0, num-1-t)*p[t];	
				
		if(isPrime(i)&&isPrime(y))
			printf("%d是绝对素数\n", i);
		
	}	
	
	return 0;
}

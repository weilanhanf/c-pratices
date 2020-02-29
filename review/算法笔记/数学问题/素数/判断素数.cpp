#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;

bool isPrime(int n)
{
	if(n<=1)
		return false;
	for(int i=2;i*i<=n;i++)
		if(n%i==0)
			return false;
	return true;
}

int main()
{
	int n, i, j, flag;
	for(i=101;i<=200;i++)
	{
		if(isPrime(i)==true)
			printf("%dÊÇËØÊý\n", i);
	}
 } 

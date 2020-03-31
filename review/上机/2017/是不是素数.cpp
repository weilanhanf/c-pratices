#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

//    给定一个正整数，请判断其是否为素数（除了1和本身，没有其它约数的数称为素数）



bool isPrime(int x)//判断是否为素数 
{
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return false;
	return true;
}


int main()
{
	int x;
	scanf("%d", &x);
    if (isPrime(x)) 
		printf("是素数\n");
    else
		printf("不是素数\n");
    return 0;
}

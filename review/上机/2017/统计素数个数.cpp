#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;


// 给定若干个正整数，请判断素数的个数。
//  输入数据首先包含一个整数N（1<=N<=100）表示数据的个数，然后是N个大于1小于10000的整数。

const int maxn=10000;
int p[maxn];


bool isPrime(int x)//判断是否为素数 
{
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return false;
	return true;
}


int main()
{
	int n, count;
	count = 0;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &p[i]);
		if(isPrime(p[i])==true)
			count++;
	}
	
	printf("%d\n", count++);
	return 0;
}


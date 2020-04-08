#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

const int maxn=1000;


int main()
{
	int x, y, z;
	int N;
	int num=0;
	int a[maxn]={0};
	scanf("%d %d %d", &x, &y, &N);
	
	z = x+y;
	while(z!=0)
	{
		a[num++] = z%N;
		z /= N;
	}
	
	for(int i=num-1;i>=0;i--)
		printf("%d", a[i]);
	
	return 0;
}

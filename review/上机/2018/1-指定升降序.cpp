#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

const int maxn = 100;


bool cmp(int a, int b)
{
	return a>b;
}


int main()
{
	int a[maxn]={0};
	int x, n=0, k;
	while(scanf("%d", &x)!=EOF)
	{
		if(x==0)
			break;
		a[n++]=x;
	}
	scanf("%d", &k);
	sort(a+k, a+n, cmp);
	for(int i=0;i<n;i++)
		printf("%d ", a[i]);
	
	return 0;
}

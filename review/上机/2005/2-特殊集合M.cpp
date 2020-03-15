#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

const int maxn=10000;

int num=0;
int a[maxn]={0}, p[maxn]={0};


int main()
{
	int i;
	fill(p,p+maxn, 0);
	
	p[1] = 1;
	for(i=1;i<maxn;i++)
	{
		if(p[i]==1&&num<=100)
		{
			a[num++] = i;
			p[2*i+1] = 1;
			p[3*i+1] = 1;
		}
		else if(num>100)
			break;
	}

	for(i=0;i<100;i++)
		printf("%d\n", a[i]);
	

	return 0;
 } 

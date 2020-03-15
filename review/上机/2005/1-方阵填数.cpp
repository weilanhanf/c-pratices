#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

const int maxn=11;

int num=1;
int a[maxn][maxn]={0};

int main()
{
	int n, k, i, j;
	int x, y;
	scanf("%d", &n);
	k = 1; x = 1;
	y = n;
	a[x][y] = 1;
	
	while(k<n*n)
	{
		while(x+1<=n&&(a[x+1][y]==0))
			a[++x][y] = ++k;
		while(y-1>=1&&(a[x][y-1]==0))
			a[x][--y] = ++k;
		while(x-1>=1&&(a[x-1][y]==0))
			a[--x][y] = ++k;
		while(y+1<=n&&(a[x][y+1]==0))
			a[x][++y] = ++k;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			printf("%4d", a[i][j]);
		printf("\n"); 
	}
	
	return 0;
 } 

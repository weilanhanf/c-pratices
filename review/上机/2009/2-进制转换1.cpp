#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;


const int maxn=20;
char B[maxn];
int num=0;


void tenTransformB(int x, int n)
//将十进制的x转为B进制并存放在数组B中 
{
	int y;
	while(x!=0) 
	{
		y = x%n;
		if(y>=10)
			B[num++] = y-10+'A';
		else 
			B[num++] = y + '0';
		x /= n;
	}
	for(int i=num-1;i>=0;i--)
		printf("%c", B[i]);
}

	
	
	

int main()
{
	int n, x;
	fill(B, B+maxn, 0);
	scanf("%d %d", &x, &n);
	tenTransformB(x, n);


	return 0;
 } 

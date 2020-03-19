#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;


const int maxn=20;
char B[maxn];
int num=0;



void bTransformTen(int b)
//b进制的数存放在B数组中，转换成十进制的x 
{
	int x, n;
	int temp=0, product=1;
	x = 0;
	n = strlen(B);
	for(int i=n-1;i>=0;i--)
	{
		if(B[i]>='A')
			temp = B[i]-'A'+ 10;
		else
			temp = B[i] - '0';
			
		x += temp*product;
		product *= b;
	}

	printf("%d\n", x);
	
}
	
	
	

int main()
{
	int b, x;
	fill(B, B+maxn, '0');
	scanf("%s %d", B, &b);
	bTransformTen(b);
	
	return 0;
 } 

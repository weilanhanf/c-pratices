#include<stdio.h>
#include<math.h>

int OtherConvertToTen(int x, int p)  //p进制的x转换为十进制的y 
{
	int y=0, product=1;
	while(x!=0)
	{
		y = y + x%10*product;
		x /= 10;
		product = product*p;
	}
	return y;
}

int TenConvertToOther(int x, int p) // 十进制的x转换为p进制的y 
{
	int i, num=0, m[40]={0}, y=0;
	while(x!=0)
	{
		m[num++] = x%p;
		x /= p;
	}
	for(i=0;i<=num-1;i++)
	{
		y = y + pow(10.0, (double)i)*m[i];	
	}
	return y;
}

//把a+b转换为b进制 
int main()
{
	int a, b, d;
	scanf("%d %d", &a, &b);
	printf("%d进制的%d转换为十进制为%d", b, a, OtherConvertToTen(a, b));
//	scanf("%d %d %d", &a, &b, &d);
//	printf("%d转换为%d进制为%d", a+b, d, TenConvertToOther(a+b, d));
	return 0;
 } 

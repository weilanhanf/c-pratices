#include<stdio.h>
#include<string.h>

//���10-99֮������ÿλ���ĳ˻�����ÿλ��֮�͵�������98���㣺9*8>9+8

int main()
{
	int n, x, y;
	for(n=10;n<=99;n++)
	{
		x = n/10;
		y = n%10;
		if(x*y>x+y)
		printf("%d\n", n);
	}
	
	return 0;
}

#include<stdio.h>
#include<math.h>


void count(int num[], int n)
{
	int x, k=0;
	while(n!=0)
	{
		x = n%10;
		n /= 10;
		if(x==6)
			k++;// k记录数字n中6的个数 
	}
	num[k-1]++;
}


int main()
{
	int i, num[3]={0}; //用num数组记录个数 
	for(i=100;i<=999;i++)
		count(num, i);
	printf("含1个6的数字的个数为：%d\n", num[0]);
	printf("含2个6的数字的个数为：%d\n", num[1]);
	printf("含3个6的数字的个数为：%d\n",num[2]);
	return 0;
}

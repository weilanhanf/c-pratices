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
			k++;// k��¼����n��6�ĸ��� 
	}
	num[k-1]++;
}


int main()
{
	int i, num[3]={0}; //��num�����¼���� 
	for(i=100;i<=999;i++)
		count(num, i);
	printf("��1��6�����ֵĸ���Ϊ��%d\n", num[0]);
	printf("��2��6�����ֵĸ���Ϊ��%d\n", num[1]);
	printf("��3��6�����ֵĸ���Ϊ��%d\n",num[2]);
	return 0;
}

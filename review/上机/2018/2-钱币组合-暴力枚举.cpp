#include<stdio.h>


int main()
{
	int x;
	int i, j, k, t, m, n;
	int coin[6]={100, 50, 20, 10, 5, 1};
	int nums[6]={0};
	int minn = n/coin[5];
	
	scanf("%d", &x);
	int count=0;
	
	for(i=0; i<=x/coin[0];i++)//100���ܳ��ֵ����� 
		for(j=0; j<=x/coin[1];j++)//50���ܳ��ֵ�����
			for(k=0; k<=x/coin[2];k++)//20���ܳ��ֵ�����
				for(t=0; t<=x/coin[3];t++)//10���ܳ��ֵ�����
					for(m=0; m<=x/coin[4];m++)//5���ܳ��ֵ�����
						for(n=0; n<=x/coin[5];n++)//1���ܳ��ֵ�����
						{
							int y = i*coin[0]+j*coin[1]+k*coin[2]+t*coin[3]+m*coin[4]+n*coin[5];
							int num = i+j+k+t+m+n;
							if(y==x)
							{
								count++;//��¼������ 
								if(num<minn)//���ʹ��ֽ�Ҹ�С�����¼ 
								{
									minn = num;
									nums[0] = i;
									nums[1] = j;
									nums[2] = k;
									nums[3] = t;
									nums[4] = m;
									nums[5] = n;
								}
							}
						}
		
	printf("��������Ϊ��%d\n", count);	
	printf("����ֽ������Ϊ��\n");			
	for(int z=0;z<6;z++)
		printf("��ֵ%d��%d��\n", coin[z], nums[z]);					
	
	return 0;
 } 

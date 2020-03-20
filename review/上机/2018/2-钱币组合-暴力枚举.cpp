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
	
	for(i=0; i<=x/coin[0];i++)//100可能出现的张数 
		for(j=0; j<=x/coin[1];j++)//50可能出现的张数
			for(k=0; k<=x/coin[2];k++)//20可能出现的张数
				for(t=0; t<=x/coin[3];t++)//10可能出现的张数
					for(m=0; m<=x/coin[4];m++)//5可能出现的张数
						for(n=0; n<=x/coin[5];n++)//1可能出现的张数
						{
							int y = i*coin[0]+j*coin[1]+k*coin[2]+t*coin[3]+m*coin[4]+n*coin[5];
							int num = i+j+k+t+m+n;
							if(y==x)
							{
								count++;//记录排列数 
								if(num<minn)//如果使用纸币更小，则记录 
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
		
	printf("总排列数为：%d\n", count);	
	printf("最少纸币排列为：\n");			
	for(int z=0;z<6;z++)
		printf("面值%d的%d张\n", coin[z], nums[z]);					
	
	return 0;
 } 

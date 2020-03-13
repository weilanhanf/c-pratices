#include<stdio.h>
#include<math.h>
#include<string.h>

//李白街上走，提壶去买酒。遇店加一倍，见花喝一斗。N 遇店和花，喝光壶中
//酒。借问此壶中，原有多少酒。编程输入 N，输出原来的酒数和遇店、遇花的过
//程。

//2*(2*(2x-1)-1)-1 = 0 


int main()
{
	int N, j;
	double res;
	scanf("%d", &N);
	
	res = 0;
	for(int i=0;i<N;i++)
		res = (res+1)/2;
	printf("壶中原有酒为%6.3f\n", res);
	
	j=1;
	while(ceil(res)!=0)
	{
		res *= 2;
		printf("第%d次遇店加一倍，剩下%6.3f斗。\n", j, res);
		res -= 1;
		printf("第%d次遇花喝一斗，剩下%6.3f斗。\n", j, res);
		j++; 
	}
	
	
	return 0;
} 

#include<stdio.h>
#include<algorithm>

using namespace std;

typedef struct cake{
	double stock;
	double price;
	double aver;
}cake;

const int maxn=1000;

cake cakes[maxn];

bool cmp(cake a, cake b)
{
	return a.aver > b.aver;
}


int main()
{
	int N, M;
	while(scanf("%d %d", &N, &M)!=EOF)
	{
		for(int i=0;i<N;i++)
			scanf("%lf", &cakes[i].stock);
		
		for(int i=0;i<N;i++)
		{
			scanf("%lf", &cakes[i].price);
			cakes[i].aver = cakes[i].price/cakes[i].stock;
		}
		
		stable_sort(cakes, cakes+N, cmp);
		
//		for(int i=0;i<N;i++)
//			printf("%d %.2f %.2f %.2f\n",i, cakes[i].aver, cakes[i].price, cakes[i].stock);
//		

		double sums=0;
		int n=0;
		while(M!=0)
		{
			if(M>=cakes[n].stock)
			{
				M-=cakes[n].stock;
				sums+=cakes[n].price;
				n++;
			}
			else
			{
				sums+=M*cakes[n].aver;
				M=0;
			}
		}
		printf("%.2f\n", sums);
	}
	

	return 0;
} 

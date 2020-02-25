#include<stdio.h>
#include<algorithm>
using namespace std;
#define N 6
#define W 21

int B[N][W] ={0};
int w[6] = {0,2,3,4,5,9};
int v[6] = {0,3,4,5,8,10};


void knapsack()
{
	int c,k;
	for(k=1;k<N;k++)  //N-1件物品 
		for(c=1;c<W;c++)  // W-1容量的背包 
		{
			if(w[k] > c)	// 此时W[k]比c重，第k件物品装不下 
			{
				B[k][c] = B[k-1][c];
			}
			else  //能装下 
			{
				int value1 = B[k-1][c-w[k]]+v[k];  // 能装下并且装入 
				int value2 = B[k-1][c];
				B[k][c] = max(value1, value2);
			 } 
		}	
}


int main()
{	int i, j;
	knapsack();
	for(i=0;i<N;i++)
	{
		for(j=0;j<W;j++)
			printf("%3d", B[i][j]);
		printf("\n");
		
	}
	printf("%d\n", B[5][20]);
	return 0;
 } 

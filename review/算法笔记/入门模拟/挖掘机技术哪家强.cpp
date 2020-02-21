#include<stdio.h>
#define MaxSize 100000

int main()
{
	int n, x, T, k, max;
	k = 0;  max = -1;
	int score[MaxSize+1]={0};
	scanf("%d", &T);
	for(int i=0;i<=T;i++)
		score[i] = 0;
	for(int i=1;i<=T;i++)
	{
		scanf("%d %d", &n, &x);
		score[n] += x;
	
	}
	
	for(int i=1;i<=T;i++)
		if(score[i] > max){
			k = i;
			max = score[i];
		}
	printf("%d %d\n", k, max);		
	return 0;
 } 

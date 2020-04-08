#include<stdio.h>
#include<algorithm>

using namespace std;


const int maxn=100000;


int main()
{
	int N, K; 
	int s;
	int score[101], stu[maxn];
	fill(score, score+101, 0);
	scanf("%d", &N);
	for(int i=0;i<N;i++)
	{
		scanf("%d", &s);
		score[s]++;
	}
	
	scanf("%d", &K);
	for(int i=0;i<K;i++)
		scanf("%d", &stu[i]);
		
	for(int i=0;i<K;i++)
	{
		printf("%d", score[stu[i]]);
		if(i<K-1)
			printf(" ");
		else
			printf("\n");	
	}
	
	return 0;
}

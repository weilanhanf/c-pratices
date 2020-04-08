#include<stdio.h>
#include<algorithm>

using namespace std;


const int maxn = 100001;

bool cmp(int a, int b)
{
	return a>b;
}


int main()
{
	int score[maxn+1];
	fill(score, score+maxn, 0);
	
	int N;
	int n, s;
	scanf("%d", &N);
	for(int i=0;i<N;i++)
	{
		scanf("%d %d", &n, &s);
		score[n] += s;
	}

	int k=0;
	int m=score[0];
	for(int i=1;i<maxn;i++)
		if(score[i]>m)
		{
			k = i;
			m = score[i];
		}
	
	printf("%d %d\n", k, score[k]);
	
	return 0;
} 

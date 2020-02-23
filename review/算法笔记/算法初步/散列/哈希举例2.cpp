#include<stdio.h>
#define M 100
int hashTable[M] = {0};
// m个数， n个数，n个数中的每个数在m个数中出现的次数 

int main()
{
	int m, n, i, j, x;
	scanf("%d %d", &m, &n);
	for(i=0;i<m;i++)
	{
		scanf("%d", &x);
		hashTable[x]++;
	}
	for(j=0;j<n;j++)
	{
		scanf("%d", &x);
		printf("%d在集合n中出现的次数为%d\n", x, hashTable[x]);
	}
	return 0;
}

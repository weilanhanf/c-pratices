#include<stdio.h>
#define M 100
int hashTable[M] = {0};
// m������ n������n�����е�ÿ������m�����г��ֵĴ��� 

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
		printf("%d�ڼ���n�г��ֵĴ���Ϊ%d\n", x, hashTable[x]);
	}
	return 0;
}

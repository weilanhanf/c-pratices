#include<stdio.h>
#define M 100
bool hashTable[M]={ false };

//m个数，n个数，n个数是否出现在m个数中 

int main() 
{
	int i, j, x, m, n;
	scanf("%d %d", &m ,&n); 
	for(i=0;i<m;i++)
	{
		scanf("%d", &x);
		hashTable[x] = true;
	}
	for(j=0;j<n;j++)
	{
		scanf("%d", &x);
		if(hashTable[x]==true)
			printf("%d yes\n", x);
		else
			printf("%d no\n", x);
	}
	
	return 0;
}

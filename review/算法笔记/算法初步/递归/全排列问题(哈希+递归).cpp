#include<stdio.h>
const int maxn = 10;
int n = 3;
int P[maxn], hashTable[maxn] = {false};

void generateP(int index)
{
	if(index==n+1)
	{
		for(int i=1;i<=n;i++)
			printf("%d ", P[i]);
		printf("\n");
		return ;
	}
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(hashTable[i]==false)
			{
				P[index] = i;
				hashTable[i] = true;
				generateP(index+1);
				hashTable[i] = false; 
			}
		}
		return ;
	}
}


int main()
{
	generateP(1);
	return 0;
}


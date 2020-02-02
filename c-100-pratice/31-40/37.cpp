#include<stdio.h>
#define M 10

void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int i, j, k, temp, a[M];
	printf("ÇëÊäÈë10¸öÊı×Ö£º");
	for(i=0;i<M;i++)
		scanf("%d", &a[i]);
	for(i=0;i<M-1;i++)
	{
		k = i;
		for(j=i+1;j<M;j++)
			if(a[j]<a[k])
				k = j;
		if(k!=i)
			swap(&a[i], &a[k]);
	}
	
}

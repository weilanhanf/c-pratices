#include<stdio.h>

int main()
{
	int a[11], temp, i, j, k;
	for(i=1;i<=10;i++)
		scanf("%d", &a[i]);
	for(i=1;i<=9;i++)
	{
		k = i;
		for(j=i+1;j<=10;j++)
			if(a[j]<a[k])
				k = j;
		if(k!=i)
		{
			temp = a[k];
			a[k] = a[i];
			a[i] = temp;
		}
	}
	for(i=1;i<=10;i++)
		printf("%d ", a[i]);
	return 0;
} 

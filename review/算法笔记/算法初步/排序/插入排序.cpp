#include<stdio.h>
#include<string.h>

int main()
{
	int a[11], temp, i, j, k;
	memset(a, -1, sizeof(a));
	for(i=1;i<=10;i++)
		scanf("%d", &a[i]);
	for(i=1;i<=10;i++)
	{
		j = i-1;
		temp = a[i];
		while(temp<a[j]&&j>=0)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
		
	}
	for(i=1;i<=10;i++)
		printf("%d ", a[i]);
	return 0;
} 

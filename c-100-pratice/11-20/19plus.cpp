#include<stdio.h>

int main(){
	int sum, i, k, j, a[1000];
	scanf("%d", &i);
	sum=1;
	a[0]=1;
	k=1;
	for(j=2;j<=(i/2);j++)
		if(i%j==0)
		{
			sum+=j;
			a[k]=j;
			k++;	
		}
		
	if(sum==i)
	{
		printf("%d", a[0]);
		for(j=1;j<k;j++)
			printf("+%d", a[j]);
		printf("=%d\n", sum);
	}
	
}

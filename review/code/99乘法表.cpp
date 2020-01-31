#include<stdio.h>

int main(){
	int sum;
	int i, j;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j<=i)
			{
				sum=i*j;
				printf("%d\t", sum);
			}
		}
		printf("\n\n");
	}
	
}

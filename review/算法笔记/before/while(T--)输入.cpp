#include<stdio.h>

int main(){
	int n, sum, a, b, T;
//	printf("%c", 7); 
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d", &n);
		sum = 0;
		for(int i=0; i<n; i++)
		{
			scanf("%d", &a);
			sum = a + sum; 
		}
		printf("sum=%d", sum);
		if(T>0)
			printf("\n");
		
	}
} 

#include<stdio.h>
#include<math.h>

int main(){
	
	int i, n, k;
//	printf("%8.2lf", sqrt(9)); sqrt()����Ϊdouble���� 
	
	for(n=101;n<=200;n++)
	{
		
		k = (double)sqrt((double)n);
		for(i=2;i<=k;i++)
			if(n%i==0)
				break;
		if(i>k)
			printf("%d������\n", n);
		else
			printf("%d��������\n", n); 
	
	}
} 

#include<stdio.h>
#include<math.h>

int main(){
	int i, j, sign;
	
	for(i=101;i<=200;i++)
	{	
		sign=1;
		for(j=2;j<i;j++)
			if(i%j==0)
				{
					sign=0;
					break;
				}
		if(sign==0)
			printf("%d不是素数\n", i);
		else
			printf("%d是素数\n", j); 
			
	}	
} 

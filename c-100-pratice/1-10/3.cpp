#include<stdio.h>

int main(){
	int i, j, k;
	for(i=0;i<10000;i++)
		for(j=0;j<100;j++)
			for(k=0;k<100;k++)
				if(i+100==j*j&&i+268==k*k)
					printf("%d+100=%d*%d, %d+168=%d*%d\n",i,j,j,i,k,k);
		 
} 

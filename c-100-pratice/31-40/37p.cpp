#include<stdio.h>

#define NUM 5 

void select_sort(int *x, int n)
{
	int i, j, k, t;
	for(i=0;i<n-1;i++)
	{
		
		k=i;
		for(j=i+1;j<n;j++)
			if(x[j]<x[k]) k=j;
		if(k!=i)
		{t=x[k];x[k]=x[i];x[i]=t;}
	}
}

int main(){
	void selcet_sort(int x[], int n);
	int *p, i, a[NUM];
	p = a;
	for(i=0;i<NUM;i++)
		scanf("%d", &a[i]);
	p=a; 
	select_sort(p, NUM);
	for(p=a,i=0;i<NUM;p++,i++)
		printf("%d ", *p);
} 



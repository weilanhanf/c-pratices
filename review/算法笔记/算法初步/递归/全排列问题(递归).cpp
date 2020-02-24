#include<stdio.h>


void swap(int a[], int p, int q) //交换p, q位置元素 
{
	int temp = a[p];
	a[p] = a[q];
	a[q] = temp;
	return ; 
}


void printfA(int a[], int n)  //打印数组 
{
	for(int i=0;i<n;i++)
		printf("%d ", a[i]);
	printf("\n");
	return ;
}


void prem(int a[], int p, int q)  //全排列 
{
	if(p==q)  //递归结束条件 
		printfA(a, q+1);  //结束，打印此种排列 
	else
	{
		for(int i=p;i<=q;i++)  //将每一个元素作为开头元素，做一次全排列 
		{
			swap(a, i, p);
			prem(a, p+1, q);
			swap(a, i, p); 
		}
	}
}


int main()
{
	int a[4] = {1,2,3,4};
	prem(a, 0, 3);
	return 0;
 } 

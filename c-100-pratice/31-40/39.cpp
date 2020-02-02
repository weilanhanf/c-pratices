#include<stdio.h>
#define N 10
int main()
{
	int a[N]={1,2,3,4,5,6,7,8,9};
	int i, j, k;
	printf("原数组：");
	for(i=0;i<9;i++)
		printf("%d", a[i]);
	printf("\n");
	printf("请输入一个数字：");
	scanf("%d", k); 
	for(i=0;i<9;i++)
		if(a[i]>=k)
			i++;
	for(j=8;j>=i;j--)
		a[j+1] = a[j]; 
	a[i]=k;
	printf("添加元素后的数组：");
	for(i=0;i<9;i++)
		printf("%d", a[i]);
	
 } 

#include<stdio.h>
#define N 10
int main()
{
	int a[N]={1,2,3,4,5,6,7,8,9};
	int i, j, k;
	printf("ԭ���飺");
	for(i=0;i<9;i++)
		printf("%d", a[i]);
	printf("\n");
	printf("������һ�����֣�");
	scanf("%d", k); 
	for(i=0;i<9;i++)
		if(a[i]>=k)
			i++;
	for(j=8;j>=i;j--)
		a[j+1] = a[j]; 
	a[i]=k;
	printf("���Ԫ�غ�����飺");
	for(i=0;i<9;i++)
		printf("%d", a[i]);
	
 } 

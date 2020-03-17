#include<stdio.h>

//输出“N 角形”，即给定一数字 n,显示 n 角形图案。
//  *
// ***
//*****


int main()
{
	int n, i, j;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		
		for(j=1;j<=2*i-1;j++)
			printf("*");
		
		printf("\n");
	}

	return 0;
}

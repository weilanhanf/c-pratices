#include<string.h>
#include<stdio.h>

// 输入n打印以下n边图形：
//   A
//  B*B
//  C***C
// D*****D
//E*******E
// D*****D
//  C***C
//   B*B
//    A


int main()
{
	int i, j;
	int n;
	scanf("%d", &n);
	for(i=1;i<=n;i++)//上三角 
	{
		for(j=n-i;j>=1;j--)
			printf(" ");
		
		for(j=1;j<=2*i-1;j++)
		{
			if(j==1||j==2*i-1)
				printf("%c", i-1+'A');
			else
				printf("*");				
		}
		printf("\n");
	}
	
	int t, k;//k为总共需要打印几行 
	t = n+1;
	if(n%2==1)
		k = n*2-1;
	else
		k = n*2;
	
	
	for(i=t;i<=k;i++)//下三角 
	{
		for(j=1;j<=i-n;j++)
			printf(" ");
		
		for(j=1;j<=(k-i+1)*2-1;j++)
		{
			if(j==1||j==(k-i+1)*2-1)
				printf("%c", k-i+'A');
			else
				printf("*");	
		}		
		printf("\n");	
	}	
	
	
	return 0;
 } 
 
 
 
 
 
 
 
 
 
 

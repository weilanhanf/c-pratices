#include<stdio.h>

//对于一个n层的三角形， 使用的字符为1*n+n*(n-1)*2/2
//对于沙漏，为2*n*n-1 



int main()
{
	int N;
	char ch;
	scanf("%d %c", &N, &ch);
	
	int n=0;
	while(n*n*2-1<=N)
		n++;
	
	
	int k = n-1;//k层三角形
//	printf("%d", k);
	int count=0;
	for(int i=1;i<=k;i++)
	{
		for(int j=1;j<=i-1;j++)
			printf(" ");
			
		for(int j=1;j<=(k-i+1)*2-1;j++)
		{
			printf("%c", ch);
			count++;
		}
		printf("\n");
	} 
	
	for(int i=1;i<=k;i++)
	{
		if(i==1)
			continue;
		for(int j=1;j<=k-i;j++)
			printf(" ");
		for(int j=1;j<=i*2-1;j++)
		{
			printf("%c", ch);
			count++;
		}

		printf("\n");		
	}
	
	printf("%d\n", N-count);
	
	return 0;
}

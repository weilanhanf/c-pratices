#include<stdio.h>

int checkPrime(int n)
{
	int i, isPrime=1;
	for(i=2;i<=n/2;i++)
		if(n%i==0)
		{ isPrime=0;break; }
		
	return isPrime;	
 } 
 
 int main()
 {
 	int n, i, flag=0;
	printf("请输入一个整数：");
	scanf("%d", &n);
	for(i=2;i<=n/2;i++)
		if(checkPrime(i)==1)
			if(checkPrime(n-i)==1)
			{
				flag=1;
				printf("%d = %d + %d\n", n, i, n-i);
			 } 
	if(flag==0)
		printf("不能被分解为两个素数");
		
	return 0; 
 }

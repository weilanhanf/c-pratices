#include<stdio.h>
#include<string.h>
//patb1009

int main()
{
	char a[100][100];
	int i, num=0;
	while(scanf("%s", a[num])!=EOF)
	{
		num++;
	}
	for(i=num-1;i>=0;i--)
	{
		printf("%s", a[i]);
		if(i>0)
			printf(" ");
	}
	return 0; 
}

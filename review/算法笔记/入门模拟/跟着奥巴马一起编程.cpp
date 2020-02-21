#include<stdio.h>

int main()
{
	int i, j, col, row;
	char ch;
	scanf("%d %c", &col, &ch);
	if(col%2==1) row=col/2+1;
	else row=col/2;
	for(i=0;i<col;i++)
		printf("%c", ch);
	printf("\n");
	for(i=1;i<=row-2;i++)
	{
		printf("%c", ch);
		for(j=1;j<=col-2;j++)
			printf(" ");
		printf("%c", ch);
		printf("\n");	
	}
	for(i=0;i<col;i++)
		printf("%c", ch);
	return 0;
 } 

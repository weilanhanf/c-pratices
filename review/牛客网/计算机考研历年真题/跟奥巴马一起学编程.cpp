#include<stdio.h>

int main()
{
	char ch;
	int N;
	scanf("%d %c", &N, &ch);
	int col = (N+1)/2;
	
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<N;j++)
			if(i==0||j==0||i==col-1|j==N-1)
				printf("%c", ch);
			else
				printf(" ");   
		printf("\n");
	}
    
    return 0;
}

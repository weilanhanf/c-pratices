#include<stdio.h>
#define N 10

int main(){
	int a[N][N], sum=0, i, j;
	for(i=0;i<N;i++)
		for(j=0;j<N;j++)
			scanf("%d", &a[i][j]);
	
	for(i=0;i<N;i++)
		sum += a[i][i];
	printf("����Խ���Ԫ��֮��sum=%d", sum);
	
}

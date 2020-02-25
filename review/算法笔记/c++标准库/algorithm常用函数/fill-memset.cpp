#include<stdio.h>
#include<algorithm>
#include<string.h> 
using namespace std;

int main()
{
	int a[10] = {0};
	memset(a, -1, sizeof(a));
	for(int i=0;i<10;i++)
		printf("%d ", a[i]);
	printf("\n");
	fill(a+5, a+10, 10);
	for(int i=0;i<10;i++)
		printf("%d ", a[i]);
	return 0;
 } 

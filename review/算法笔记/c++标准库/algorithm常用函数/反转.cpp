#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	char b[5]  = "hell";
	int a[10]  = {1,2,3,4,5,6,7, 8,9,0}; 
	reverse(a, a+10);
	reverse(b, b+5);
	for(int i=0;i<10;i++)
		printf("%d ", a[i]);

	printf("\n");
	
	for(int i=0;i<5;i++)
		printf("%c", b[i]);

	return 0;
}

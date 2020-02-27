#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main()
{
	int a[10]={0}, b[50]={0};
	int i, j=0, k=0, n=0;
	for(i=0;i<10;i++)
		scanf("%d", &a[i]);

	for(i=1;i<10;i++)
		if(a[i]!=0)	
		{
			b[k++] = i;
			a[i]--;
			n++;
			break;
		}
	

	for(i=0;i<10;i++)
	{
		while(a[i]!=0)
		{
			b[k++] = i;
			a[i]--;
			n++;
		}
	}
	
	for(i=0;i<n;i++)
		printf("%d", b[i]);
	
	
	return 0;
 } 

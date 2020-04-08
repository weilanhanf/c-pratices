#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

const int maxn=51;
int a[10], b[maxn];


int main()
{
	while(
	scanf("%d %d %d %d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6], &a[7], &a[8], &a[9])!=EOF
	)
	{
		for(int i=1;i<10;i++)
			if(a[i]!=0)
			{
				printf("%d", i);
				a[i]--;
				break;		
			}		
			
		for(int i=0;i<10;i++)
			while(a[i]>0)
			{
				printf("%d", i);
				a[i]--;
			}
		printf("\n");
	}
}

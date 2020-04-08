#include<string.h>
#include<algorithm>
#include<math.h> 
#include<stdio.h>

using namespace std;


void prem(char a[], int p, int q)
{
	if(p==q)
	{
		for(int i=0;i<=q;i++)
			printf("%c", a[i]);
		printf("\n");	
	}
	else
	{
		for(int i=p;i<=q;i++)
		{
			swap(a[i], a[p]);
			prem(a, p+1, q);
			swap(a[i], a[p]);
		}
	}
}


int main()
{
	char a[6];
	int len;
	
	scanf("%s", a);
	len = strlen(a);
	prem(a, 0, len-1);

    return 0;
 } 

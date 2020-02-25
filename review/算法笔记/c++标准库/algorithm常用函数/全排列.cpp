#include<string.h>
#include<stdio.h>
#include<algorithm>
using namespace std; 

void printfA(int a[], int n)
{
	for(int i=0;i<n;i++)
		printf("%d ", a[i]);
	printf("\n");
}


void perm(int a[], int p, int q)
{
	if(p==q)
		printfA(a, q+1);
	else{
		for(int i=p;i<=q;i++)
		{
			swap(a[i], a[p]);
			perm(a, p+1, q);
			swap(a[i], a[p]);
		}
	} 
	
}


int main()
{
	int a[3] = {0, 1, 2};
	perm(a, 0, 2);
//	do{
//		printf("%d %d %d\n", a[0], a[1], a[2]);
//	}while(next_permutation(a, a+3));
	return 0;
}

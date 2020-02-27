#include<stdio.h> 
#include<math.h> 
#include<string.h> 
#include<algorithm>
using namespace std;

//查找数组中的两个和m的数x，y 


void solve(int a[], int n, int m)
{
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
			if(a[i]+a[j]==m)
				printf("%d+%d=%d\n", i,j,m);
	
	return ;
 } 

void solveTwoPointers(int a[], int n, int m)
{
	int i=0, j=n-1;
	while(i<j)
	{
		if(a[i]+a[j]==m)
		{
			printf("%d+%d=%d\n", i,j,m);
			i++;
			j--;
		}
		else if(a[i]+a[j]>m)
			j--;
		else if(a[i]+a[j]<m)
			i++;
	}
	return ;
}

int main()
{
	int a[10] = {0, 1,2,3,4,5,6,7,8,9};
//	solve(a, 10, 10);
	solveTwoPointers(a, 10, 10);
	
 } 

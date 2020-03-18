#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

const int maxn=2009;

int num=0;
int p[maxn]={0}, prime[maxn]={0}; 


void primeTable()
//求素数表存储在prime数组中 
{
	int i;
	for(i=2;i<maxn;i++)
	{
		if(p[i]==0)
		{
			prime[num++]=i;
			for(int j=2*i;j<maxn;j+=i)
				p[j]=1;
		}
	}
}

bool recSubset(int arr[], int i, int s)
{
	if(s==0)
		return true;
	else if(i==0)
		return arr[0]==s;
	else if(arr[i]> s)
		return recSubset(arr, i-1, s);
	else
	{
		bool A, B;
		A = recSubset(arr, i-1, s-arr[i]);
		B = recSubset(arr, i-1, s);
		return A||B; 
	}
}


int main()
{
	
	int arr[maxn]={3, 34, 4, 12, 5, 2};
	primeTable();
	printf("%d ", recSubset(prime, num-1, 121));
	
	return 0;
 } 

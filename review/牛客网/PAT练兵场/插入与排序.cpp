#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;


int N;
int n[101];

bool isSame(int a[], int b[], int len)
{
	for(int i=1;i<=len;i++)
		if(a[i]!=b[i])
			return false;
	return true; 
}


void printArray(int a[], int len)
{
	for(int i=1;i<=len;i++)
	{
		printf("%d", a[i]);
		if(i!=len)
			printf(" ");
		else if(i==len)
			printf("\n");
	}	
}


bool insertSort(int a[], int len)
{
	int temp, j;
	bool same=false;
	for(int i=2;i<=len;i++)
	{
		temp = a[i];
		j = i-1;
		while(a[j]>temp&&j>=1)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = temp;
		
		same = isSame(a, n, N);
		if(same==true)
			return 1;	
	}
	return 0;
}


bool mergeSort(int b[], int len)
{
	for(int step=2;step/2<=len;step*=2)
	{
		for(int i=1;i<=len;i+=step)
			sort(b+i, b+min(i+step, len+1));
		if(isSame(b, n, len))
			return true;
	}
	
	return false;
}



int main()
{
	int x, a[101], b[101];
	scanf("%d", &N);
	for(int i=1;i<=N;i++)
	{
		scanf("%d", &x);
		a[i] = x;
		b[i] = x;
	}
	
	for(int i=1;i<=N;i++)
		scanf("%d", &n[i]);
	
	if(insertSort(a, N))
	{
			printf("Insertion Sort\n");
			printArray(a, N);		
	}
	if(mergeSort(b, N))
	{
		printf("Merge Sort\n");
		printArray(b, N);	
	}	

	
	return 0;
}

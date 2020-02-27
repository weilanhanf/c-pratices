#include<stdio.h> 
#include<math.h> 
#include<string.h> 
#include<algorithm>
using namespace std;

int temp[100] = {0};

//πÈ≤¢≈≈–Ú

void merge(int a[], int L1, int R1, int L2, int R2)
{
	int index=0, i=L1, j=L2;
	while(i<=R1&&j<=R2)
	{
		if(a[i]<a[j])
			temp[index++] = a[i++];
		else
			temp[index++] = a[j++];
	}
	while(i<=R1)
		temp[index++] = a[i++];
	while(j<=R2)
		temp[index++] = a[j++];
	for(int i=0;i<index;i++)
		a[L1+i] = temp[i];	
		
}


void mergeSort(int a[], int low, int high)
{
	int mid;
	if(low<high)
	{
		mid = (low+high)/2;
		mergeSort(a, low, mid);
		mergeSort(a, mid+1, high);
		merge(a, low, mid, mid+1, high);
	}
}


int main()
{
	int a[10] = {1,3,2,4,6,5,6,7,8,9};
	mergeSort(a, 0, 9);
	for(int i=0;i<10;i++)
		printf("%d ", a[i]);
	return 0;
 } 

#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

int Partition(int a[], int left, int right)
{
	int temp = a[left];
	while(left<right)
	{
		while(left<right&&a[right]>=temp)
			right--;
		if(left<right)
			a[left++] = a[right];
		while(left<right&&a[left]<temp)
			left++;
		if(left<right)
			a[right--] = a[left];
	}
	a[left] = temp;
	return left;
 } 


void QuickSort(int a[], int left, int right)
{
	int pos;
	if(left<right)
	{
		int pos = Partition(a, left, right);
		QuickSort(a, left, pos-1);
		QuickSort(a, pos+1, right);		
	}

}

int main()
{
	int a[11] = {1, 4, 3, 5, 2, 6, 7, 9, 8, 0};
	QuickSort(a, 0, 9);
	for(int i=0;i<10;i++)
		printf("%d ", a[i]);
	return 0;
 } 

#include<stdio.h>

int binarySearch(int a[], int n, int x)
{
	int i, left, right, mid;
	left=0;
	right=n-1;
	while(left<=right)
	{
		mid = (left+right)/2;
		if(a[mid]==x)
			return mid;
		else if(x<a[mid])
			right=mid-1;
		else
			left = mid+1;
	}
	return -1;
}

int main()
{
	int n = 10;
	int a[10] = {1, 2, 3,5, 16, 37, 44, 58, 79, 100};
	printf("%d\n", binarySearch(a, n, 1));
	printf("%d\n", binarySearch(a, n, 5));
	printf("%d\n", binarySearch(a, n, 7));
	return 0;
 } 

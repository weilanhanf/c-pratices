#include<stdio.h>
#include<math.h> 
#include<string.h>
#include<algorithm>
using namespace std;


int main()
{
	int a[11] = {1, 4, 3, 5, 2, 6, 7, 9, 8, 0};
	int temp, i, j, mid, low, high;
	for(i=1;i<10;i++)
	{
		temp = a[i];
		low = 0;
		high = i-1;
		while(low<=high)
		{
			mid = (low+high)/2;
			if(temp<a[mid])
				high = mid-1;
			else
				low = mid+1;
		}	
		for(j=i-1;j>=low;j--) // 看清for循环中是自加还是自减 
			a[j+1] = a[j];
		a[low] = temp;
	}	

	for(int i=0;i<10;i++)
		printf("%d ", a[i]);
	return 0;
} 

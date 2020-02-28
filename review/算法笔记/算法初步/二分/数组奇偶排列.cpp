#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

// 给定一个数组，将数组内所有奇数排列在前，偶数在后。 

void shift(int a[], int left, int right)
{
	while(left<right){
		if(left<right&&a[left]%2==1)
			left++;
		if(left<right&&a[right]%2==0)
			right--;
		if(left<right)
			swap(a[left], a[right]);
	}
}


int main()
{
	int a[10] = {1, 4, 3, 5, 2, 6, 7, 9, 8, 0};
	shift(a, 0, 9);
	for(int i=0;i<10;i++)
		printf("%d ", a[i]);
	return 0;
 } 

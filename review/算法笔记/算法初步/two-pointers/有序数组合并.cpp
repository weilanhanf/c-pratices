#include<stdio.h> 
#include<math.h> 
#include<string.h> 
#include<algorithm>
using namespace std;


//两个有序数组合并为一个有序数组 

int main()
{
	int a[10] = {0, 1,3,4,6,9, 11, 23,45,56,};
	int b[10] = {2, 4,7,8,18, 20, 34,43,78,89};
	int i=0, index=0, j=0;
	int c[30];
	fill(c, c+30, 0);
	while(i<10&&j<10)
	{
		if(a[i]<b[j])
			c[index++] = a[i++];	
		else
			c[index++] = b[j++];
	}
	while(i<10)
		c[index++] = a[i++];	
	while(j<10)
		c[index++] = b[j++];
	for(int k=0;k<20;k++)
		printf("%d ", c[k]);
	printf("\n");
	return 0;
 } 

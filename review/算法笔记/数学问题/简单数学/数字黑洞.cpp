#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;


bool cmp(int a, int b)
{
	return a<b;
}

void num_to_array(int a[], int num)  // num存放在数组a中 
{
	int i=0;
	while(num)
	{
		a[i++] = num%10;
		num /= 10;
	}
}

int array_to_num(int a[], int n) //长度为n的数组a中num取出 
{
	int num=0;
	for(int i=0;i<n;i++)
		num = num*10+a[i];
	return num; 
}

int main()
{
	int a[5], i, h, n;
	fill(a, a+4, 0);
	scanf("%d", &n);
	while(1)
	{
		int Max, Min;
		num_to_array(a, n);
		sort(a, a+4, cmp);
		Min = array_to_num(a, 4);
		reverse(a, a+4);
		Max = array_to_num(a, 4);
		n = Max-Min;
		printf("%4d - %4d = %4d\n", Max, Min, n); 
		if(n==0||n==6174)
			break;
	}

	return 0;
 } 

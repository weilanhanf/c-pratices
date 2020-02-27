#include<stdio.h>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n, i, j, flag;
	for(i=101;i<=200;i++)
	{
		flag = 1;
		for(j=2;j<=i/2;j++)
			if(i%j==0){
				flag = 0;
				break;
			}
		if(flag==1)
		{
			printf("%dÊÇËØÊý\n", i, flag);
		}
	}
 } 

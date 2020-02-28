#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
using namespace std;

int leftNumP[10]={0};
int rightNumT[10]={0};


int main()
{
	int i, j;
	int k=0, ans=0;
	char str[10]="PPATTT";
	int len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(i>0)
			leftNumP[i] = leftNumP[i-1];
		if(str[i]=='P')
			leftNumP[i]++;
	}
		
	for(j=len-1;j>=0;j--)
	{
		if(j<len-1)
			rightNumT[j] = rightNumT[j+1];		
			
		if(str[j]=='T')
			rightNumT[j]++;
	}
	for(i=0;i<len;i++)
	{
		printf("i %d p %d t%d\n", i, leftNumP[i], rightNumT[i]);
	}
	
	for(i=0;i<len;i++)
		if(str[i]=='A')
		{
			ans += leftNumP[i]*rightNumT[i];	
		}
		
	printf("%d\n", ans);
	return 0;
 }  

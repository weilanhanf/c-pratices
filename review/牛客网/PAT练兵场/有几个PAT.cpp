#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;


const int maxn=100000;

int main()
{
	char str[maxn];
	int len;
	gets(str);
	len = strlen(str);
	
	int leftA[maxn], rightT[maxn];
	fill(leftA, leftA+maxn, 0);
	fill(rightT, rightT+maxn, 0);
	
	for(int i=1;i<len-1;i++)
		if(str[i-1]=='P')
			leftA[i] = leftA[i-1]+1;
		else
			leftA[i] = leftA[i-1];
			
			
	for(int i=len-1;i>=1;i--)	
		if(str[i+1]=='T')
			rightT[i] = rightT[i+1]+1;
		else
			rightT[i] = rightT[i+1];
				
		
			
	long long ans = 0;
	for(int i=1;i<len-1;i++)
		if(str[i]=='A')
			ans += leftA[i]*rightT[i];
	
	printf("%ld\n", ans%1000000007);
	
	
	return 0;
}

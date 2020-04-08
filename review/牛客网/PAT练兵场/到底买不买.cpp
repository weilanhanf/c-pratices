#include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

const int maxn=1000;

char str1[maxn], str2[maxn];

int main()
{
	int len1, len2;
	while(scanf("%s %s", str1, str2)!=EOF)
	{
			
		len1 = strlen(str1);
		len2 = strlen(str2);
		
		int a[256], b[256];
		fill(a, a+256, 0);
		fill(b, b+256, 0);
		
		for(int i=0;i<len1;i++)
			a[str1[i]]++;
		for(int i=0;i<len2;i++)
			b[str2[i]]++;
			
		int count=0;
		bool flag=true;
		for(int i=0;i<256;i++)
			if(b[i]>a[i])
			{
				flag=false;
				count+=b[i]-a[i];
			}
		
		if(flag==true)
			printf("Yes %d\n", len1-len2);
		else
			printf("No %d\n", count);
	}

	return 0;
} 

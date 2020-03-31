#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

//输入一句话，统计单词个数， 


int main()
{
	char str[1000];
	while(gets(str)!=NULL)
	{
		
		int k1, k2;
		k1=0;
		k2=strlen(str)-1;
		while(str[k1]==' '||str[k2]==' ')//去掉收尾的空格 
		{
			if(str[k1]==' ')
				k1++;
			if(str[k2]==' ')
				k2--;
		}
		
		int count=0;
		for(int i=k1;i<=k2;i++) 
		{
			if(str[i]==' '||str[i]=='\'') //统计空格和缩写 
				count++;
		}
		count++;//单词个数为空格个数加一
		
		printf("单词个数为%d\n", count);
		
	}
	
	return 0;
} 

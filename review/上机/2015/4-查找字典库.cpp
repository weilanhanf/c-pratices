#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

const int maxn=20;


struct word{
	int id;
	char letters[maxn];
}words[maxn]=
{
	{1000, "face"},
	{1001, "word"},
	{1002, "help"},
	{1003, "nose"},

};


int main()
{
	int i, flag, word_len, k, len;
	char str[10]; 

	gets(str);
	len = strlen(str);
	for(i=0;i<len;i++)
		if(str[i]>='A'&&str[i]<='Z')
			str[i] += 32;
	printf("变成小写后为%s,长度为%d\n", str, len);

	for(k=0;k<4;k++)
	{
		word_len = strlen(words[i].letters);
		flag = 0; 
		for(i=0;i<word_len&&i<len;i++)
			if(words[k].letters[i]!=str[i])
				flag++;
		if(flag==0)
		{
			printf("ID为%d, letters=%s\n", words[i].id, words[i].letters);
			break;
		}
		else if(flag==1)
		{
			printf("flag=1, ID为%d, letters=%s\n", words[i].id, words[i].letters);
			break;
		}
		else if(flag>=2)
			continue;
	}	
	return 0;
}

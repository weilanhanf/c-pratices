#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

const int maxn=20;


typedef struct word{
	int id;
	string letters;
}word, words[maxn]; 




int main()
{
//	
//	words[0].id=1000;  words[0].letters="face"; 
//	words[1].id=1001;  words[1].letters="word";
//	words[2].id=1002;  words[2].letters="help";
//	words[3].id=1003;  words[3].letters="nose";
	
//	char str[maxn], str1[maxn];
	string str, str1; 
	cin>>str;
	cin>>str1;
	str1=str;
//	gets(str);
//	gets(str1);
	if(str1==str)
		printf("==");
	else
		printf("!=");
//	while(gets(str)!=NULL)
//	{
//		int flag=0;
//		for(int i=0;i<4;i++)
//		{
//			
//		}
//	}
	
	return 0;
}

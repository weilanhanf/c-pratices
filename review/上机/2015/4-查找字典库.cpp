#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;


//假设有个词典库，内存的单词和其 ID 号如下所示。编程实现，输入一个单词（不区分大小写）
//（1）如果该单词和库内的单词完全相同，则输出该单词的 ID号；
//（2）如果该单词和词库中的某个词错了一个字母，则输出“单词错误，您是否想输入：”后跟正确的单词；
//（3）其他情况输出，“库中没有该单词！”

//应该可以按照一下几种情况讨论
//1.完全相同
//2.有单词中有一位不相同，teacher与teachar
//3.缺少一位或多出一位，teacher与teacherr 


const int maxn=20;

struct word{
	int id;
	char letters[maxn];
}words[maxn]=
{
	{1000, "face"},
	{1001, "words"},
	{1002, "helpful"},
	{1003, "nose"},

};


void change(char str[])
//保证不区分大小写，转换为小写 
{
	int len, i;
	len = strlen(str);
	for(i=0;i<len;i++)
		if(str[i]>='A'&&str[i]<='Z')
			str[i] += 32;
	printf("变成小写后为%s,长度为%d\n", str, len);
 } 


int main()
{
	int flag, n1, n2, n; 
	int k, m;
	int diff_len, len; 
	//len表示输入字符长度，words_len为检测的单词长度，diff_len为输入长度与单词长度之差 
	char str[10]; 
	
	gets(str);
	change(str);
	len = strlen(str);
	
	for(int i=0;i<4;i++)
		if(strcmp(str, words[i].letters)==0)//单词完全相同 
		{
			printf("查找成功，序号为%d\n", words[i].id);//表示已经找到 
			return 0; 
		}
			
	while(true)
	{
		flag=maxn;
		for(int i=0;i<4;i++)
		{
			diff_len = len - strlen(words[i].letters);
			if(diff_len==0)
			{
				n=0;
				for(int j=0;j<len;j++)
					if(str[j]!=words[i].letters[j])
						n++;
				printf("n=%d diff_len=%d words[i].letters=%s\n", diff_len, words[i].letters);
			}
			else if(diff_len==1||diff_len==-1)
			{
				n=0;
				m=0; k=0;//m指向str,k指向letters 
				while(m<len||k<strlen(words[i].letters))
				{
					if(str[m]==words[i].letters[k])
					{ k++; m++; }
					else 
					{
						if(diff_len==1)
							{ m++; n++; }
						else if(diff_len==-1)
							{ k++; n++; }
					}
				}
				printf("n=%d diff_len=%d words[i].letters=%s\n", n,diff_len, words[i].letters);
			}
			else if(abs(diff_len)>=2)//至少有两个以上不同，直接跳出 
				flag = 2;
			
			if(n<flag)
				flag = n;
				
			printf("n=%d flag=%d words[i].letters=%s\n", n, flag, words[i].letters);		
		}
		printf("最后 flag=%d\n", flag);		
		if(flag==1)
			printf("单词错误，您是否想输入：");
		else if(flag>1)
		{
			printf("库中没有该单词\n");
			break;
		}
	}

	return 0;
}

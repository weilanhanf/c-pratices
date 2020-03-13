#include<stdio.h>
#include<algorithm>
using namespace std;

void perm(int a[], int n)
{
	do{
		for(int i=0;i<n;i++)
			printf("%d\n", a[i]);
			
		printf("\n");
	}while(next_permutation(a, a+3));
	
}


int main()
{
for(i=0;i<4;i++)
	{
		flag = 0;//用flag记录与第i个单词比较时不同字母的个数 
		word_len = strlen(words[i].letters);
		diff_len = len - word_len; 
		printf("len=%d word_len=%d diff_len=%d\n", len, word_len, diff_len);
		
		if(diff_len==0)//单词长度相同 
		{
			printf("faceface\n");
			if(strcmp(str, words[i].letters)==0)//单词完全相同 
			{
				printf("face\n");
				printf("查找成功，序号为%d\n", words[i].id);
				break; 
			}
			else
			{
				for(j=0;j<len;j++)//长度相同 
					if(str[j]!=words[i].letters[j]) 
						flag++;//不相同的字母加1 
				if(flag<n)
					n = flag;
			}
			
			if(n==1)
				printf("有一位字母不同，重新输入\n");
			else if(n>1) 
				printf("输入错误\n"); 
		}
		
		
		
		
	}
		
	return 0;
}

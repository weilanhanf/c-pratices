#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std; 



//假设有个词典库，内存的单词和其 ID 号如下所示。编程实现，输入一个单词
//（不区分大小写）：（1）如果该单词和库内的单词完全相同，则输出该单词的 ID
//号；
//（2）如果该单词和词库中的某个词错了一个字母，则输出“单词错误，
//您是否想输入：”后跟正确的单词；
//（3）其他情况输出，“库中没有该单词！”。

const int maxn=20;
int dp[maxn][maxn];




typedef struct words{
	char id[maxn];
	char a[maxn];
}words;


words w[5] = {
	{"1000", "world"},	
	{"1001", "hello"},	
	{"1002", "pass"},	
	{"1003", "thank"},	
	{"1004", "you"},	
};


int dpComputeCommonLen(char s1[], char s2[])
//动态规划求得公共子串长度 
//s1 = "hello"  s2 = "heloo"
// 返回common_len = 4 
{
	int len1, len2, common_len;
	len1 =strlen(s1+1);
	len2 = strlen(s2+1);
	
	//边界条件初始化 
	for(int i=0;i<=len1;i++)
		dp[i][0] = 0;
	for(int j=0;j<=len2;j++)
		dp[0][j] = 0;
	
	
	//状态转移方程 
	for(int i=1;i<=len1;i++)
		for(int j=1;j<=len2;j++)
		 {
		 	if(s1[i]==s2[j])
		 		dp[i][j] = dp[i-1][j-1] + 1;
		 	else if(s1[i]!=s2[j])
		 		dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		 }
		 
	//查看dp数组	 
//	printf("s1=%s, s2=%s\n", s1+1, s2+1);
//	for(int i=1;i<=len1;i++)
//	{
//		for(int j=1;j<=len2;j++)
//			printf("%3d ", dp[i][j]);
//		printf("\n");
//	}
			
		
	return dp[len1][len2];
}


int main()
{
	char a[maxn], b[maxn+1];//a接收输入串，b接收集合中的主串 
	int alen, blen;
	
	gets(a+1);
	
	while(true)
	{
		int min_len=maxn; 
		for(int i=0;i<5;i++)
		{
			if(strcmp(a+1, w[i].a)==0)//遇到完全相同，直接跳出 
			{
				min_len = 0;
				printf("匹配成功，id=%s, words=%s\n", w[i].id, w[i].a);
				break;
			}
			else
			{
				strcpy(b+1, "");//清空 
				strcpy(b+1, w[i].a);//数组b接收字典待匹配串 
				int common_len = dpComputeCommonLen(a, b);//word[i].a与输入串公共子串长度 
				int diff_len = max(strlen(b+1), strlen(a+1))- common_len; //最大的差值 
				
				if(diff_len==0)//防止passs与pass情况，diff_len=0,其实差1; 
				{
					int len1, len2;
					len1 =strlen(a+1);
					len2 = strlen(b+1);
	
					diff_len=abs(len1-len2);
				}
				if(diff_len<min_len)//逐个扫描单词库，记录差别最少的len 
					min_len = diff_len;
			 } 
				
		}
		if(min_len==0)
			break;
		if(min_len==1)
		{
			printf("单词错误，重新输入\n");
			gets(a+1);
			
		}
			
		else 
		{
			printf("库中没有该单词\n"); 
			break;
		}
	}

	return 0;
}

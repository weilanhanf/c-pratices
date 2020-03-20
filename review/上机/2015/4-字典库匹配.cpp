#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std; 



//�����и��ʵ�⣬�ڴ�ĵ��ʺ��� ID ��������ʾ�����ʵ�֣�����һ������
//�������ִ�Сд������1������õ��ʺͿ��ڵĵ�����ȫ��ͬ��������õ��ʵ� ID
//�ţ�
//��2������õ��ʺʹʿ��е�ĳ���ʴ���һ����ĸ������������ʴ���
//���Ƿ������룺�������ȷ�ĵ��ʣ�
//��3��������������������û�иõ��ʣ�����

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
//��̬�滮��ù����Ӵ����� 
//s1 = "hello"  s2 = "heloo"
// ����common_len = 4 
{
	int len1, len2, common_len;
	len1 =strlen(s1+1);
	len2 = strlen(s2+1);
	
	//�߽�������ʼ�� 
	for(int i=0;i<=len1;i++)
		dp[i][0] = 0;
	for(int j=0;j<=len2;j++)
		dp[0][j] = 0;
	
	
	//״̬ת�Ʒ��� 
	for(int i=1;i<=len1;i++)
		for(int j=1;j<=len2;j++)
		 {
		 	if(s1[i]==s2[j])
		 		dp[i][j] = dp[i-1][j-1] + 1;
		 	else if(s1[i]!=s2[j])
		 		dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		 }
		 
	//�鿴dp����	 
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
	char a[maxn], b[maxn+1];//a�������봮��b���ռ����е����� 
	int alen, blen;
	
	gets(a+1);
	
	while(true)
	{
		int min_len=maxn; 
		for(int i=0;i<5;i++)
		{
			if(strcmp(a+1, w[i].a)==0)//������ȫ��ͬ��ֱ������ 
			{
				min_len = 0;
				printf("ƥ��ɹ���id=%s, words=%s\n", w[i].id, w[i].a);
				break;
			}
			else
			{
				strcpy(b+1, "");//��� 
				strcpy(b+1, w[i].a);//����b�����ֵ��ƥ�䴮 
				int common_len = dpComputeCommonLen(a, b);//word[i].a�����봮�����Ӵ����� 
				int diff_len = max(strlen(b+1), strlen(a+1))- common_len; //���Ĳ�ֵ 
				
				if(diff_len==0)//��ֹpasss��pass�����diff_len=0,��ʵ��1; 
				{
					int len1, len2;
					len1 =strlen(a+1);
					len2 = strlen(b+1);
	
					diff_len=abs(len1-len2);
				}
				if(diff_len<min_len)//���ɨ�赥�ʿ⣬��¼������ٵ�len 
					min_len = diff_len;
			 } 
				
		}
		if(min_len==0)
			break;
		if(min_len==1)
		{
			printf("���ʴ�����������\n");
			gets(a+1);
			
		}
			
		else 
		{
			printf("����û�иõ���\n"); 
			break;
		}
	}

	return 0;
}

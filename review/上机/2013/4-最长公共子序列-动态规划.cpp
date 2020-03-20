#include<stdio.h>
#include<algorithm>
#include<string.h>
#include<math.h> 

using namespace std;

 
//a = sads�� b = admi 
//״̬���̣�
//dp[i][j] =
//1  dp[i-1][j-1]+1  a[i]=b[j] 
//2   max(dp[i-1][j], dp[i][j-1])  a[i]!=b[j] 

const int maxn=1000;
char a[maxn], b[maxn];//a,b�ֱ�Ϊ���봮 
int dp[maxn][maxn]={0};
char c[maxn]; //cΪ������� 
int num=0;


int main()
{
	//���±�1��ʼ��¼ 
	gets(a+1);
	gets(b+1);
	
	//����Ҳ���±�1��¼ 
	int alen, blen;
	alen = strlen(a+1);
	blen = strlen(b+1);
	
	//�߽�ֵ��ʼ�� 
	for(int i=0;i<=alen;i++)
		dp[i][0] = 0;
	for(int j=0;j<=blen;j++)
		dp[0][j] = 0;
	
	//��̬�滮��״̬ת�Ʒ��� 
	for(int i=1;i<=alen;i++)
		for(int j=1;j<=blen;j++)
		{
			if(a[i]==b[j])//�����ͬ���򳤶ȼ�һ 
				dp[i][j] = dp[i-1][j-1] + 1;
			else if(a[i]!=b[j])//������±�ǰһλ��������� 
				dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	
	int len = dp[alen][blen];//����������� 
	
//	for(int i=0;i<=alen;i++)
//	{
//		for(int j=0;j<=blen;j++)
//			printf("%d ", dp[i][j]);
//		printf("\n"); 
//	}

	//�����ҹ����Ӵ�'
	for(int i=alen;i>=1;i--)
	{
		for(int j=blen;j>=1;j--)
		{
			int x, y, z;
			z = dp[i][j];
			if(a[i]==b[j]&&z==len&&z==dp[i-1][j-1]+1)//�Ƿ��������� 
				c[--len] = b[j];	//��ŵ�����c��				
		}
		if(len<=0)//ȫ�ҵ��˳� 
			break;
	}
	
	printf("�������Ϊ��%s, ����Ϊ%d\n",  c, dp[alen][blen]);
	
	return 0;
}

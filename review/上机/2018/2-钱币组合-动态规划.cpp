#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>

using namespace std;


// �����1000Ԫ
//��ʹ��coin[5]=100���ģ� ������ǰ5��Ӳ����ϣ���ʹ�����100ֽ�ҵ������Ϊdp[4][1000]
// ���ʹ��coin[5]=100��������ʹ����1�ţ���ʣ��900Ԫ��ʹ�����100Ӳ�ҵ������Ϊdp[5][900] 
// ʹ���벻ʹ��������� 
// dp[5][1000]=dp[4][1000]+dp[5][9000] 

//�����5Ԫ
//ֻʹ��1Ԫ�ı�ʾΪ1�ַ����� ʹ��5Ԫ��1Ԫ �ı�ʾ����2�з���
//dp[1][5]=dp[0][5]+1  5=coin[1]



//dp(i, j) =
//    dp(i-1, j)                   j С����� p[i] ʱ
//    dp(i-1, j) + dp(i, j - p[i])   ����ʱ
//    dp(i-1, j) + 1                ����ʱ


const int maxn=100;
int dp[maxn][maxn];



int main()
{
	int n;
	int coin[6] = {1, 5, 10, 20, 50, 100};
	scanf("%d", &n);
	
	//�߽�������ʼ�� 
	for(int i=0;i<6;i++)// ǮΪ0 
		dp[i][0] = 0;
	for(int j=0;j<=n;j++)// ֻ����ֵΪ1��ֽ�ұ�ʾ 
		dp[0][j] = 1;
	
	//״̬ת�Ʒ��� 
	for(int i=1;i<6;i++)
		for(int j=1;j<=n;j++)
		{
			if(coin[i] > j)
				dp[i][j] = dp[i-1][j];
			else if(coin[i] == j)
				dp[i][j] = dp[i-1][j] + 1;
			else if(coin[i] < j)
			{
				int x, y;
				x = dp[i-1][j];
				y = dp[i][j-coin[i]];
				dp[i][j] = x+y;
			}
		 } 
		 
//	for(int i=0;i<6;i++)
//	{
//		for(int j=0;j<=n;j++)
//			printf("%3d ", dp[i][j]);
//		printf("\n");
//	}
		 
	printf("��Ϸ���һ��%d��\n", dp[5][n]); 
	
	
	return 0;
 } 

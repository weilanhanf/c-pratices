#include<stdio.h>
#include<math.h>
#include<string.h>

//��׽����ߣ����ȥ��ơ������һ����������һ����N ����ͻ����ȹ����
//�ơ����ʴ˺��У�ԭ�ж��پơ�������� N�����ԭ���ľ��������ꡢ�����Ĺ�
//�̡�

//2*(2*(2x-1)-1)-1 = 0 


int main()
{
	int N, j;
	double res;
	scanf("%d", &N);
	
	res = 0;
	for(int i=0;i<N;i++)
		res = (res+1)/2;
	printf("����ԭ�о�Ϊ%6.3f\n", res);
	
	j=1;
	while(ceil(res)!=0)
	{
		res *= 2;
		printf("��%d�������һ����ʣ��%6.3f����\n", j, res);
		res -= 1;
		printf("��%d��������һ����ʣ��%6.3f����\n", j, res);
		j++; 
	}
	
	
	return 0;
} 

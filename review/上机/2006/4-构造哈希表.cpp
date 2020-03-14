#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;


const int maxn=20;
const int n=13;


typedef struct record{
	char a[maxn];
	int sign;//���ڱ�ʶ�ü�¼�Ƿ�ʹ�� 
	record(){
		sign = -1;//Ĭ��Ϊ-1����ʾδ��ʹ�� 
	}
}record;
 
int calHashRes(char a[])
//��ϣ����ΪH(X)=i/2�� iΪ�ؼ����еĵ�һ����ĸ����ĸ���ܵ���� 
{
	int k;
	k = a[0]-'A'+1;
	k /= 2;
	return k;
}


double successTimes(char s[maxn][maxn], record hashTable[])//Ҫ��hashTable[]���� 
//���ҳɹ���ƽ���Ƚϴ��� 
{
	double res, num, sums;
	int i, k; 
	sums = 0;
	for(i=0;i<9;i++)
	//�����¼������ҳ��ȣ����ۼ� 
	{
		num = 1;
		k = calHashRes(s[i]);
		while(strcmp(hashTable[k].a, s[i])!=0)
		//û���ҵ���һֱ������̽�� 
		{
			num++;
			k = (k+1)%n; 
		}
		sums += num;
	} 
	res = sums/9;
	return res;
 } 



double unsuccessTimes(record hashTable[])
//����ʧ�ܵ�ƽ���Ƚϴ��� 
{
	double res, num, sums;
	int i, j; 
	sums = 0;
	for(i=0;i<n;i++)
	//��ϣ�������λ������ʧ�ܳ���ͳ�ƣ�0,1,2...12 
	{
		num = 1;
		j = i;
		while(hashTable[j].sign!=-1)
		//֪���ҵ��յ�Ԫ 
		{
			num++;
			j = (j+1)%n;
		 } 
		 sums += num; 
	}
	res = sums/9;
	return res;
} 



int main()
{
	int i, k;
	char s[maxn][maxn] = {
	"Jan","Feb","Apr","May","Jun","Jul","Aug","Sep","Oct"
	};
	record hashTable[n];
	
	for(i=0;i<9;i++)//����hashTable 
	{
		k = calHashRes(s[i]);
		while(hashTable[k].sign!=-1)
			k = (k+1)%n;//��ѡ�õ�ַ�ռ�Ϊ0-12����13��
		if(hashTable[k].sign==-1)//�ҵ��ɷ�λ�� 
		{
			strcpy(hashTable[k].a, s[i]);
			hashTable[k].sign = 1; //������ע 
		}
	}

	for(i=0;i<13;i++)
	{
		if(hashTable[i].sign!=-1)
			printf("%2d��%s\n", i, hashTable[i].a);
	}
	
	printf("�ɹ��ıȽϴ���Ϊ%5.2f\n", successTimes(s, hashTable));
	printf("ʧ�ܵıȽϴ���Ϊ%5.2f\n", unsuccessTimes(hashTable));
	
	return 0;
}

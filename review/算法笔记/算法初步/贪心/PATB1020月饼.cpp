#include<stdio.h>
#include<algorithm>
using namespace std;

//PATB1020�±�

struct mooncake{
	double store; //��� 
	double sell; //���ۼ�
	double price; //���� 
}cake[100];


bool cmp(mooncake a, mooncake b)  //���յ����ɸߵ������� 
{
	return a.price>b.price;
}


int main()
{
	int i, j, n;
	double D, ans=0; // ansΪ����������� 
	scanf("%d %lf", &n, &D);  // nΪ�±����࣬DΪ������ 
	for(int i=0;i<n;i++)  //�����±���� 
		scanf("%lf", &cake[i].store);
	for(int i=0;i<n;i++) //�±������ۼ� 
	{
		scanf("%lf", &cake[i].sell);
		cake[i].price = cake[i].sell / cake[i].store; // �±��ĵ��� 
	}
	sort(cake, cake+n, cmp);  //���ݵ������� 
	for(int i=0;i<n;i++)
	{
		if(cake[i].store<=D) // ��i���±�ȫ������ 
		{
			ans += cake[i].sell;
			D -= cake[i].store;	 
		}	
		else  //��i���±�û���꣬��Ҫ���������٣������ѭ�� 
		{
			ans += D*cake[i].price;
			break;
		}
	}		
	printf("������Ϊ��%.2f\n", ans);
	return 0; 
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

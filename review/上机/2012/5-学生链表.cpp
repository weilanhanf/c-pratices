#include<stdio.h> 
#include<string.h>
#include<algorithm>
using namespace std; 


const int maxn=20;

typedef struct Stu{
	struct Stu *next;
	int gender=1;//1��ʾ������0��ʾŮ��;Ĭ������ 
	int age=0;//���� 
	char name[maxn];
	char id[maxn];
}Stu, *StuLink;


double calAverageBoyAge(StuLink L)
//����������ƽ������ 
{
	double sums, aver;
	int num=0;
	Stu *p;
	p = L->next;
	sums=0;
	while(p!=NULL)
	{
		if(p->gender==1&&p->age>0)//����������ҷ�������涨 
		{
			sums += p->age;
			num++;
		}
		p = p->next;
	}
	return sums/num;//����������������ƽ������ 
}


int cmp(Stu *p, Stu *q)
//��ѧ�������ְ����ֵ���Ƚ�
//���p->name<q->name�����ظ��������p->name>q->name��������
//���p->name==q->name,��һ���Ƚ�ѧ��id
//���p->id<q->id�����ظ��������p->id>q->id��������
//�����ܴ�������������ͬ����ѧ����ͬ 
{
	int res, idcmp;
	res = strcmp(p->name, q->name);
	if(res!=0)
		return res;
	else if(res==0)//�����ͬ������id�Ƚ�
	{
		idcmp = strcmp(p->id, q->id);
		return idcmp; 
	}
}


void stulinkSelectSort(StuLink L)
//���������ѡ������ 
{
	Stu *p, *r, *k;
	for(p=L->next;p->next!=NULL;p=p->next)
	{
		k = p; 
		for(r=p->next;r!=NULL;r=r->next)
			if(cmp(r, k)>0) 
				k = r;//��kָ�������ֵ���С��ѧ���ڵ�
		if(k!=p)//ֻ�������� 
		{
			swap(p->age, k->age);
			swap(p->gender, k->gender);
			swap(p->name, k->name);
			swap(p->id, k->id);
		}
	}
}


void travel(StuLink L)//������������ 
{
	Stu *r;
	r = L->next;
	while(r!=NULL)
	{
		printf("ѧ������Ϊ%s,ѧ��ѧ��Ϊ%s,����Ϊ%d,����Ϊ%d\n", r->name, r->id, r->age, r->gender);
		r = r->next;
	}
}


int main()
{
	int n;
	StuLink L;
	Stu *r;
	
	scanf("%d", &n);
	
	L = new Stu;
	L->next = NULL;
	
	for(int i=0;i<n;i++)//�����ڵ㲢���� 
	{
		r = new Stu; 
		printf("ѧ������Ϊ��");
		scanf("%s", r->name);
		
		printf("ѧ��ѧ��Ϊ��");
		scanf("%s", r->id);
		
		printf("ѧ���Ա�Ϊ��1��ʾ�У�0��ʾŮ����");
		scanf("%d", &(r->gender));
		
		printf("ѧ������Ϊ��");
		scanf("%d", &(r->age)); 
		
		r->next = L->next;
		L->next = r;
		
		printf("\n");
	}
	
	double aver;
	aver = calAverageBoyAge(L);
	printf("����ƽ������Ϊ��%5.2f\n", aver);
	
	printf("before sort:\n");
	travel(L);
	
	
	stulinkSelectSort(L);
	printf("after sort:\n");
	travel(L);
	
	return 0;
 } 

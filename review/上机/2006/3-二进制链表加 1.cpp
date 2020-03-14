#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;


typedef struct Node{
	struct Node *next;
	int data;
}Node, *Linklist;//����д��Linklist������* 

const int maxn=100;


Linklist creatLinklist(char str[])
//β�巨����������������str[]=10011,����Ϊ1->0->0->1->1
{
	Linklist L;
	Node *r, *p;
	L = (Linklist)malloc(sizeof(Node));
	L->next = NULL;
	r = L;//ָ��rָ������L�����һ���ڵ� 
	for(int i=0;i<strlen(str);i++)
	//β�巨��֤˳�� 
	{
		p = (Linklist)malloc(sizeof(Node));
		p->data = str[i] - '0';//��ŵĶ����Ƶ�0��1		
		p->next = NULL;
		r->next = p;
		r = p; 
	}
	return L; 
	
}


void linklistAddOne(Linklist L)
//�����������1 
{
	Node *r, *p;//��ָ��pָ��Ϊ0�Ľڵ㣬ָ��r����������
	p = L;
	r = L->next;
	while(r!=NULL)
	{
		if(r->data==0)
			p = r;
		r = r->next;
	}
	
	if(p==L)
	//û���ҵ�ֵΪ0�Ľڵ㣬�����ײ�����һ���µĽڵ㣬���ڽ�λ 
	{
		Node *q = new Node;
		q->data = 0;
		q->next = L->next;
		L->next = q;
		p = q;
	}
	 
	p->data = 1;
	r = p->next;
	//������Ķ�����λ1ȫ���0 
	while(r!=NULL)
	{
		r->data = 0;
		r = r->next;
	 } 
}


void travel(Linklist L)
//�������� 
{
	Node *r;
	r = L->next;
	while(r!=NULL)
	{
		printf("%d", r->data);
		r = r->next;
		if(r!=NULL)
			printf("->");
	}
	printf("\n");
}

int main()
{
	Linklist L;
	char str[maxn];
	gets(str);
	L = creatLinklist(str);
	travel(L);
	linklistAddOne(L);
	travel(L); 
	
	return 0;
}










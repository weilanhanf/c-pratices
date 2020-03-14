#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;


typedef struct Node{
	struct Node *next;
	int data;
}Node, *Linklist;//容易写成Linklist，忘记* 

const int maxn=100;


Linklist creatLinklist(char str[])
//尾插法，创建二进制链表str[]=10011,链表为1->0->0->1->1
{
	Linklist L;
	Node *r, *p;
	L = (Linklist)malloc(sizeof(Node));
	L->next = NULL;
	r = L;//指针r指向链表L的最后一个节点 
	for(int i=0;i<strlen(str);i++)
	//尾插法保证顺序 
	{
		p = (Linklist)malloc(sizeof(Node));
		p->data = str[i] - '0';//存放的二进制的0和1		
		p->next = NULL;
		r->next = p;
		r = p; 
	}
	return L; 
	
}


void linklistAddOne(Linklist L)
//二进制链表加1 
{
	Node *r, *p;//用指针p指向为0的节点，指针r来遍历链表
	p = L;
	r = L->next;
	while(r!=NULL)
	{
		if(r->data==0)
			p = r;
		r = r->next;
	}
	
	if(p==L)
	//没有找到值为0的节点，则在首部加入一个新的节点，用于进位 
	{
		Node *q = new Node;
		q->data = 0;
		q->next = L->next;
		L->next = q;
		p = q;
	}
	 
	p->data = 1;
	r = p->next;
	//将后面的二进制位1全变成0 
	while(r!=NULL)
	{
		r->data = 0;
		r = r->next;
	 } 
}


void travel(Linklist L)
//遍历链表 
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










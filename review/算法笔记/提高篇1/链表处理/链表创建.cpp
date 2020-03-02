#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace std;


//struct node{
//	int elem;
//	node* next;
//};


typedef struct node{
	int elem;
	struct node *next;	
}node, *Linklist;


node *creat_from_tail(int array[])
{
	node *head, *p, *pre;
	head = new node;
	head->next = NULL;
	pre = head;
	for(int i=0;i<5;i++)
	{
		p = new node;
		p->elem = array[i];
		p->next = NULL;
		pre->next = p;
		pre = p;
	}
	return head;
}


node *creat_from_head(int array[])
{
	node *head, *p;
	head = new node;
	head->next = NULL;
	for(int i=0;i<5;i++)
	{
		p = new node;
		p->elem = array[i];
		p->next = head->next;
		head->next = p;
	}
	return head;
}


int search(node *head, int value)
{
	int count=0;
	node* p = head->next;
	while(p->next!=NULL)
	{
		if(p->elem==value)
			count++;
		p = p->next;
	}
	return count;	
}


int length(node *head)
{
	int len=0;
	node *p = head;
	while(p->next!=NULL)
	{
		p = p->next;
		len++; 
	}
	return len;
}


void insert(node* head, int pos, int value)
{
	node *p = head;
	int len = length(head), i=0;
	if(pos>=len||pos<0)
		return ;
	while(i<pos-1)
	{
		p=p->next;
		i++;
	}
//	for(int i=0;i<pos-1;i++)
//		p = p->next;
	node *q = (node*)malloc(sizeof(node));
	q->elem = value;
	q->next = p->next;
	p->next = q;
}


void delete_node(node *head, int value)
{
	node *pre, *p;
	pre = head;
	p = pre->next;
	while(p!=NULL)
	{
		if(p->elem==value)
		{
			pre->next = p->next;
			delete(p);
			p = pre->next;
		}
		else
		{
			pre = p;
			p = pre->next;
		}
	}
}


int main()
{
	int array[5] = {5, 4, 2, 2, 1};
	node *L, *p;
	L = creat_from_head(array);

	insert(L, 2, 9);
	p = L->next;
	while(p!=NULL){
		printf("%d ", p->elem);
		p = p->next;
	}

	delete_node(L, 2);
	printf("\n%d ", length(L));
//	printf("%d ", search(L, 2));
//	return 0;
}

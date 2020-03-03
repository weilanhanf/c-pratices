#include<iostream>
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<algorithm>
using namespace std;


typedef struct node{
	int data;
	struct node * next;
}node, LinkList;


node * creat(int array[])
{
	node *head, *pre, *p;
	head = new node;
	head->next = NULL;
	pre = head;
	for(int i=0;i<5;i++)
	{
		p = (node*)malloc(sizeof(node));
		p->next = NULL;
		p->data = array[i]; 
		pre->next = p;
		pre = p;
	}
	return head;
}


void travel(node *head)
{
	node *p = head;
	while(p->next!=NULL)
	{
		p = p->next;
		printf("%d ", p->data);
	}
	return ;
}


void reverse(node *head)
{
	node *pre = head, *p, *r;
	p = head->next;
	head->next = NULL;
	while(p!=NULL)
	{
		r = p->next;
		p->next = head->next;
		head->next = p;
		p = r;
	}
}


int main()
{
	int array[5] = {1, 2, 3, 4, 5};
	node *L;
	L = creat(array);
	printf("before reverse:");
	travel(L);
	reverse(L);
	printf("\nafter reverse:");
	travel(L);
	return 0;
 } 

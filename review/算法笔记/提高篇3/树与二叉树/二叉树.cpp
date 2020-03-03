#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;


typedef struct TNode{
	int data;
	struct TNode *lchild;	
	struct TNode *rchild;		
}TNode, *Tree;


void insert(TNode* &root, int data)
{
	if(root==NULL)
	{
		root = new TNode;
		root->data = data;
		root->lchild = NULL;
		root->rchild = NULL;
	}
	else
	{
		if(root->data==data)
			return ;
		else if(root->data>data)
			insert(root->lchild, data);
		else if(root->data<data)
			insert(root->rchild, data);	
	}
	return ;
}


TNode *creat(int array[], int n)
{
	TNode *root=NULL;
	for(int i=0;i<n;i++)
		insert(root, array[i]);
	return root;
}


void *preCreat(Tree *root)
{
	int x;
	scanf("%d", &x);
	if(x==0)
		*root = NULL;
	else
	{
		*root = (Tree)malloc(sizeof(TNode));
		(*root)->data = x;
		preCreat(&((*root)->lchild));
		preCreat(&((*root)->rchild));
	}
}


void preTravel(Tree root)
{
	if(root!=NULL)
	{
		printf("%d ", root->data);
		preTravel(root->lchild);
		preTravel(root->rchild);
	}
}

void inTravel(Tree root)
{
	if(root!=NULL)
	{
		inTravel(root->lchild);
		printf("%d ", root->data);
		inTravel(root->rchild);
	}
}


void postTravel(Tree root)
{
	if(root!=NULL)
	{
		postTravel(root->lchild);
		postTravel(root->rchild);
		printf("%d ", root->data);
	}
}


void printfTree(Tree root, int layer)
{
	if(root==NULL)
		return ;
	else
	{
		printfTree(root->lchild, layer+1);
		for(int i=0;i<layer;i++)
			printf("\t");
		printf("%d\n", root->data);
		printfTree(root->rchild, layer+1);
	}
}


int main()
{
	int array[10] = {1, 2, 4, 5, 0, 3};
	TNode *root;
//	root = creat(array, 6);
	preCreat(&root);
	printf("pre travel:");
	preTravel(root);
	printf("\nin travel:");
	inTravel(root);
	printf("\npost travle:");
	postTravel(root);
	printf("\n");
	printfTree(root, 0);
	return 0;
}

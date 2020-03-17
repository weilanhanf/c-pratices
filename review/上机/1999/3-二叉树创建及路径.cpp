#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;


//����һ�����ݣ��� 999 ��Ϊ�������ݣ�����һ�Ŷ�����������ͨ���������
//�����������������˶������и�������Ҷ�ӽ���·��


typedef struct BSTNode{
	struct BSTNode *lchild, *rchild;
	int data;
}BSTNode, *BSTree;


void insert(BSTree *bst, int data)
//������������� 
{
	if(*bst==NULL)
	{
		BSTNode *q;
		q = new BSTNode;
		q->data = data;
		q->lchild = q->rchild = NULL;
		*bst = q;
	}
	else if((*bst)->data > data)
		insert(&((*bst)->lchild), data);
	else if((*bst)->data < data)
		insert(&((*bst)->rchild), data);
}


void creatBST(BSTree *bst)
//�������������� 
{
	int x;
	*bst = NULL;
	scanf("%d", &x);
	while(x!=999)
	{
		insert(bst, x);
		scanf("%d", &x);
	}
}



void inOrder(BSTree bst)
//������� 
{
	if(bst!=NULL)
	{
		inOrder(bst->lchild);
		printf("%d ", bst->data);
		inOrder(bst->rchild);
	}
}


const int maxn = 100;


int Num = 0;//·���ڵ���� 
int Path[maxn]={0};//·������ 

void printPath(BSTree bst)
//��ӡ���������ڵ㵽����Ҷ�ӽڵ��·�� 
{
	if(bst!=NULL)
	{
		Path[Num++] = bst->data;//���·�� 
		if(bst->lchild==NULL&&bst->rchild==NULL)//�ж��Ƿ�ΪҶ�ӽڵ� 
		{
			for(int i=0;i<Num;i++)
				printf("%d ", Path[i]);	
			printf("\n");
		}	
		printPath(bst->lchild);
		printPath(bst->rchild);
		Num--;//·���ڵ��һ 
	}
}


void layerPrint(BSTree bst, int layer)
//�㼶���� 
{
	if(bst!=NULL)
	{
		layerPrint(bst->rchild, layer+1);
		for(int i=0;i<layer;i++)
			printf("   ");
		printf("%d\n", bst->data);
		layerPrint(bst->lchild, layer+1);
	}
}


int main()
{
	BSTree bst;
	fill(Path, Path+maxn, 0);
	creatBST(&bst);
	inOrder(bst);
	printf("\n");

	layerPrint(bst, 0);	
	printf("\n");
	printPath(bst);
	return 0;
 } 

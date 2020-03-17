#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;


//输入一批数据，以 999 作为结束数据，建立一颗二叉排序树，通过遍历输出
//递增排序结果，给出此二叉树中根到所有叶子结点的路径


typedef struct BSTNode{
	struct BSTNode *lchild, *rchild;
	int data;
}BSTNode, *BSTree;


void insert(BSTree *bst, int data)
//插入二叉排序树 
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
//创建二叉排序树 
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
//中序遍历 
{
	if(bst!=NULL)
	{
		inOrder(bst->lchild);
		printf("%d ", bst->data);
		inOrder(bst->rchild);
	}
}


const int maxn = 100;


int Num = 0;//路径节点个数 
int Path[maxn]={0};//路径数组 

void printPath(BSTree bst)
//打印二叉树根节点到所有叶子节点的路径 
{
	if(bst!=NULL)
	{
		Path[Num++] = bst->data;//添加路径 
		if(bst->lchild==NULL&&bst->rchild==NULL)//判断是否为叶子节点 
		{
			for(int i=0;i<Num;i++)
				printf("%d ", Path[i]);	
			printf("\n");
		}	
		printPath(bst->lchild);
		printPath(bst->rchild);
		Num--;//路径节点减一 
	}
}


void layerPrint(BSTree bst, int layer)
//层级遍历 
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

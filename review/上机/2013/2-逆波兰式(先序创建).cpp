#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>

//表达式 a+b*(c-d)+m/c 求出波兰式先序遍历
//二叉树T如下 
//       	     +
//	     +               /
//  a         *        m    c
//        b      -
//            c     d  
//T的中序序列为 a+b*c-d+m/c
//T的先序序列为 ++a*b-cd/mc
//用先序创建二叉树，则序列为： ++a..*b..-c..d../m..c.. 


typedef struct BTNode{
	struct BTNode *lchild, *rchild;
	char data;
}BTNode, *BTree;


void creatBT(BTree *bt)
// 先序创建二叉树 
{
	char ch;
	ch = getchar();
	if(ch=='.')
		*bt = NULL;
	else
	{
		*bt = (BTree)malloc(sizeof(BTNode));
		(*bt)->data = ch;
		creatBT(&((*bt)->lchild));
		creatBT(&((*bt)->rchild));	
	}
}


void inTravel(BTree bt)
// 中序遍历 
{
	if(bt!=NULL)
	{
		inTravel(bt->lchild);
		printf("%c ", bt->data);
		inTravel(bt->rchild); 
	}
}


void preTravel(BTree bt)
// 先序遍历 
{
	if(bt!=NULL)
	{
		printf("%c ", bt->data);
		preTravel(bt->lchild);
		preTravel(bt->rchild); 
	}
}


void layerTravel(BTree bt, int layer)
// 层级遍历二叉树查看 
{
	if(bt!=NULL)
	{
		layerTravel(bt->lchild, layer+1);
		for(int i=0;i<layer;i++)
			printf("\t");
		printf("%c\n", bt->data);
		layerTravel(bt->rchild, layer+1);
	}
}


int main()
{
	BTree bt;
	creatBT(&bt);
	printf("先序遍历二叉树：");
	preTravel(bt);
	printf("\n层级遍历二叉树：");
	layerTravel(bt, 0); 
	return 0;
 } 

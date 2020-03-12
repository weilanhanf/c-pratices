#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>

//���ʽ a+b*(c-d)+m/c �������ʽ�������
//������T���� 
//       	     +
//	     +               /
//  a         *        m    c
//        b      -
//            c     d  
//T����������Ϊ a+b*c-d+m/c
//T����������Ϊ ++a*b-cd/mc
//�����򴴽���������������Ϊ�� ++a..*b..-c..d../m..c.. 


typedef struct BTNode{
	struct BTNode *lchild, *rchild;
	char data;
}BTNode, *BTree;


void creatBT(BTree *bt)
// ���򴴽������� 
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
// ������� 
{
	if(bt!=NULL)
	{
		inTravel(bt->lchild);
		printf("%c ", bt->data);
		inTravel(bt->rchild); 
	}
}


void preTravel(BTree bt)
// ������� 
{
	if(bt!=NULL)
	{
		printf("%c ", bt->data);
		preTravel(bt->lchild);
		preTravel(bt->rchild); 
	}
}


void layerTravel(BTree bt, int layer)
// �㼶�����������鿴 
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
	printf("���������������");
	preTravel(bt);
	printf("\n�㼶������������");
	layerTravel(bt, 0); 
	return 0;
 } 

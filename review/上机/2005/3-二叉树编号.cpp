#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;


typedef struct BTNode
{
	struct BTNode *Rchild, *Lchild;
	int num;
	char data; 
 }BTNode, *BTree; 


void creatBTree(BTree *bt)
{
	char ch;
	ch=getchar();
	if(ch==' ')
		*bt = NULL;
	else
	{
		BTNode *p = (BTNode*)malloc(sizeof(BTNode));
		p->data = ch;
		*bt = p;
		creatBTree(&((*bt)->Lchild));
		creatBTree(&((*bt)->Rchild));
	}
}


void layerPrint(BTree bt, int layer)
{
	if(bt!=NULL)
	{
		layerPrint(bt->Rchild, layer+1);
		for(int i=0;i<layer;i++)
			printf("\t");
		printf("%d, %c\n", bt->num, bt->data);
		layerPrint(bt->Lchild, layer+1);		
	}
}


void setNumber(BTree bt, int &num)
{
	if(bt!=NULL)
	{
		setNumber(bt->Lchild, num);
		setNumber(bt->Rchild, num);
		bt->num = num++;
	}
}

int main()
{
	BTree bt;
	int num = 1;
	creatBTree(&bt);
	setNumber(bt, num);
	layerPrint(bt, 0);

	return 0;
 }  

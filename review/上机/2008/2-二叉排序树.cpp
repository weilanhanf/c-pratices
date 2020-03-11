#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>


typedef struct BSTNode{
	struct BSTNode *lchild, *rchild;
	char data;
}BSTNode, *BSTree;


void insertBSTree(BSTree *bst, char ch)
{
	if(*bst==NULL)
	{
		BSTNode *s = (BSTree)malloc(sizeof(BSTNode));
		s->data = ch;
		s->lchild = NULL;
		s->rchild = NULL;
		*bst = s;
	}
	else if( ch < (*bst)->data)
		insertBSTree(&((*bst)->lchild), ch);
	else if(ch > (*bst)->data)
		insertBSTree(&((*bst)->rchild), ch);
}


void creatBSTree(BSTree *bst, char str[])
{
	*bst = NULL;
	for(int i=0;str[i]!='@';i++)
		insertBSTree(bst, str[i]);
}

void preTravel(BSTree bst)
{
	if(bst!=NULL)
	{
		printf("%c", bst->data);
		preTravel(bst->lchild);		
		preTravel(bst->rchild);				
	}
}

void inTravel(BSTree bst)
{
	if(bst!=NULL)
	{
		inTravel(bst->lchild);		
		printf("%c", bst->data);
		inTravel(bst->rchild);				
	}
}


void layerTravel(BSTree bst, int n)
{
	if(bst!=NULL)
	{
		layerTravel(bst->lchild, n+1);
		for(int i=0;i<n;i++)
			printf("\t");
		printf("%c\n\n", bst->data); 
		layerTravel(bst->rchild, n+1);
	}
}


int main()
{
	char str[20];
	gets(str);
	BSTree bst;
	creatBSTree(&bst, str);
	printf("先序遍历:"); 
	preTravel(bst);
	
	printf("\n中序遍历:"); 
	inTravel(bst);
	printf("\n层级遍历：");
	layerTravel(bst, 0);
	return 0;
}

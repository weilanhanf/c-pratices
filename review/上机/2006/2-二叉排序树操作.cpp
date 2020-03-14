#include<stdio.h>
#include<string.h> 
#include<algorithm>
#include<stack> 
#include<queue>
using namespace std;


//二叉排序树：
//①要求建立以二叉链表方式存储的二叉排序树。
//②按树状输出（如下图）；
//③输出结点值递减结果。
//二叉树 
//           H
//      A          X 
//	      F     T
//	    B     R
//逆中序遍历：X T R H F B A 
//层级遍历
//    X
//        T
//            R
//H
//        F
//            B
//    A 

typedef struct BSTNode
//定义二叉排序树节点 
{
	struct BSTNode *lchild, *rchild;
	char data;
}BSTNode, *BSTree;


const int maxn = 20;
stack<int>st; 
queue<BSTNode*>que;



void insert(BSTree *bst, char ch)
//插入二叉排序树 
{
	if(*bst==NULL)
	{
		BSTNode *p;
		p = new BSTNode;// 容易忘记 
		p->data = ch;
		p->lchild = NULL;
		p->rchild = NULL;
		*bst = p;
	}
	else if((*bst)->data > ch)
		insert(&((*bst)->lchild), ch);
	else if((*bst)->data < ch)
		insert(&((*bst)->rchild), ch);
}


void creatBST(BSTree *bst, char str[])
//创建二叉排序树 
{
	*bst = NULL;
	for(int i=0;i<strlen(str)-1;i++)	//最后一位为@不用添加 
		insert(bst, str[i]);
}


void reverseInTravel(BSTree bst)
//逆后续遍历二叉排序树 
{
	if(bst!=NULL)
	{
		reverseInTravel(bst->rchild);
		printf("%c ", bst->data);
		reverseInTravel(bst->lchild);
	 } 
 } 


void inBSTNodeStack(BSTree bst)
//中序遍历二叉排序树，然后利用栈逆置输出 
{
	if(bst!=NULL)
	{
		inBSTNodeStack(bst->lchild);
		st.push(bst->data);
		inBSTNodeStack(bst->rchild);
	}
}


void layerPrint(BSTree bst, int layer)
{
	if(bst!=NULL)
	{
		layerPrint(bst->rchild, layer+1);
		for(int i=0;i<layer;i++)
			printf("    ");
		printf("%c\n", bst->data);
		layerPrint(bst->lchild, layer+1);
	}
}


void LayerTravel(BSTree bst)
{
	que.push(bst);
	while(que.empty()!=true)
	{
		BSTNode *q;
		q = que.front();
		que.pop();
		printf("%c ",q->data);
		if(q->lchild!=NULL)
			que.push(q->lchild);
		if(q->rchild!=NULL)
			que.push(q->rchild);
	}
	
}


int main()
{
	BSTree bst;
	char str[maxn]={"HAXFTBR@"};
	creatBST(&bst, str); 
	printf("\n逆中序遍历：");
	reverseInTravel(bst);
	
	
	inBSTNodeStack(bst);
	printf("\n逆中序(stack)遍历：");
	while(st.empty()!=true)
	{
		printf("%c ", st.top());
		st.pop();
	}		
	
	printf("\n层级遍历：\n");
	LayerTravel(bst); 
	
	printf("\n层级打印：\n");
	layerPrint(bst, 0);
	return 0;
}

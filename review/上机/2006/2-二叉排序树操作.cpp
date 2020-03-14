#include<stdio.h>
#include<string.h> 
#include<algorithm>
#include<stack> 
#include<queue>
using namespace std;


//������������
//��Ҫ�����Զ�������ʽ�洢�Ķ�����������
//�ڰ���״���������ͼ����
//��������ֵ�ݼ������
//������ 
//           H
//      A          X 
//	      F     T
//	    B     R
//�����������X T R H F B A 
//�㼶����
//    X
//        T
//            R
//H
//        F
//            B
//    A 

typedef struct BSTNode
//��������������ڵ� 
{
	struct BSTNode *lchild, *rchild;
	char data;
}BSTNode, *BSTree;


const int maxn = 20;
stack<int>st; 
queue<BSTNode*>que;



void insert(BSTree *bst, char ch)
//������������� 
{
	if(*bst==NULL)
	{
		BSTNode *p;
		p = new BSTNode;// �������� 
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
//�������������� 
{
	*bst = NULL;
	for(int i=0;i<strlen(str)-1;i++)	//���һλΪ@������� 
		insert(bst, str[i]);
}


void reverseInTravel(BSTree bst)
//������������������� 
{
	if(bst!=NULL)
	{
		reverseInTravel(bst->rchild);
		printf("%c ", bst->data);
		reverseInTravel(bst->lchild);
	 } 
 } 


void inBSTNodeStack(BSTree bst)
//�������������������Ȼ������ջ������� 
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
	printf("\n�����������");
	reverseInTravel(bst);
	
	
	inBSTNodeStack(bst);
	printf("\n������(stack)������");
	while(st.empty()!=true)
	{
		printf("%c ", st.top());
		st.pop();
	}		
	
	printf("\n�㼶������\n");
	LayerTravel(bst); 
	
	printf("\n�㼶��ӡ��\n");
	layerPrint(bst, 0);
	return 0;
}

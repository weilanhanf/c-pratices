#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;


typedef struct BTNode{
    char data;
    struct BTNode *lchild, *rchild;
}BTNode, *BTree;


void creatBTree(BTree *bt)
{
    char ch;
    ch = getchar();
    if(ch=='#')
        *bt = NULL;
    else
    {
        BTNode *r;
        r = new BTNode;
        r->data = ch;
        r->lchild = NULL; r->rchild = NULL;
        *bt = r;
        creatBTree(&((*bt)->lchild));
        creatBTree(&((*bt)->rchild));
    }
}


void travel(BTree bt)
{
    if(bt!=NULL)
    {
        travel(bt->lchild);
        printf("%c ", bt->data);
        travel(bt->rchild);
    }
}


int main()
{
    BTree bt;
    creatBTree(&bt);
    travel(bt);
    return 0;
}

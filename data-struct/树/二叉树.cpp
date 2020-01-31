#include<stdio.h>
#include<malloc.h>
typedef int ElemType;                    //数据类型

//https://www.cnblogs.com/yurui/p/10359388.html

//http://c.biancheng.net/data_structure/tree/ 

typedef struct BiTreeNode                //二叉树结构体
{
    ElemType date;                        //结点数据
    struct BiTreeNode *lChild;            //左指针
    int lFlag;                            //左标记（==0时，左指针存储左孩子结点；==1时，左指针存储前驱结点）
    struct BiTreeNode *rChild;            //右指针
    int rFlag;                            //右标记（==0时，右指针存储右孩子结点；==1时，右指针存储后继结点）
}*BiTree;
BiTree pre;

typedef struct QNode                    //结点结构体
{
    BiTree date;                        //结点数据
    struct QNode *next;                    //结点指针
}*LinkQuePtr;                            //结点名

typedef struct                            //链队结构体
{
    LinkQuePtr front;                    //队头结点
    LinkQuePtr rear;                    //队尾结点
}LinkQue;                                //队名

LinkQuePtr head = (LinkQuePtr)malloc(sizeof(QNode));                        //头结点

/*链队的入队操作*/
int EnQueue(LinkQue *Q, BiTree e)
{
    LinkQuePtr s = (LinkQuePtr)malloc(sizeof(QNode));            //申请新结点空间
    if(!s)
        return 0;
    s->date = e;                        //新结点的数据等于e
    s->next = NULL;                        //新结点的指针指向空
    Q->rear->next = s;                    //原队尾结点的指针指向新结点
    Q->rear = s;                        //队尾指针指向新结点（使新结点成为队尾结点）
    return 1;
}

/*链队的出队操作*/
int DeQueue(LinkQue *Q)
{
    if(Q->front == Q->rear)                //判断队列是否为空
        return 0;
    LinkQuePtr s = (LinkQuePtr)malloc(sizeof(QNode));        //申请结点空间s
    s = Q->front->next;                    //s结点等于队头结点（头指针所指向的结点）
    Q->front->next = s->next;            //头结点的指针指向s结点的下一结点（使s结点的下一结点成为队头元素）
    if(Q->rear == s)                    //判断s是否为队尾元素，若是，说明队列中仅有一个结点
        Q->rear = Q->front;                //使队尾结点指向头结点
    free(s);                            //释放s结点
    return 1;
}

/*创建二叉树函数*/
void CreatBiTree(BiTree *T)
{
    ElemType e;                        //结点数据
    scanf("%d", &e);
    if(e == -1)                        //如果输入为-1，当前结点为空
        (*T) = NULL;
    else
    {
        (*T) = (BiTree)malloc(sizeof(BiTreeNode));        //申请结点空间
        (*T)->date = e;                        //为当前结点赋值
        printf("请输入当前结点 %d 的左孩子，若没有左孩子，请输入-1\n", e);
        CreatBiTree(&((*T)->lChild));        //递归创建左子树
        printf("请输入当前结点 %d 的右孩子，若没有右孩子，请输入-1\n", e);
        CreatBiTree(&((*T)->rChild));        //递归创建右子树
    }
}

/*先序遍历二叉树*/
void PreorderTraversal(BiTree T)
{
    if(T == NULL)                            //判空
        return;
    printf("%d ", T->date);                    //打印当前结点
    PreorderTraversal(T->lChild);            //递归遍历左子树
    PreorderTraversal(T->rChild);            //递归遍历右子树
}

/*中序遍历二叉树*/
void InorderTraversal(BiTree T)
{
    if(T == NULL)                            //判空
        return;
    InorderTraversal(T->lChild);            //递归左子树
    printf("%d ", T->date);                    //打印当前结点
    InorderTraversal(T->rChild);            //递归右子树
}

/*后序遍历二叉树*/
void PostorderTraversal(BiTree T)
{
    if(T == NULL)                            //判空
        return;
    PostorderTraversal(T->lChild);            //递归左子树
    PostorderTraversal(T->rChild);            //递归右子树
    printf("%d ", T->date);                    //打印当前结点
}

/*层序遍历二叉树*/
void LevelTraversal(BiTree T)
{
    if(T == NULL)                            //判空
        return;
    LinkQue Q;            //创建队Q
    Q.front = head;        //初始化队列
    Q.rear = head;
    EnQueue(&Q, T);                            //将根结点入队
    while(Q.front != Q.rear)                //判断队列是否为空
    {
        BiTree s = Q.front->next->date;            //获得队列中第一个结点的数据
        printf("%d ", s->date);                    //打印当前结点的数据
        if(s->lChild)                            //若该结点有左孩子，将其左孩子入队
            EnQueue(&Q, s->lChild);
        if(s->rChild)                            //若该结点有右孩子，将其右孩子入队
            EnQueue(&Q, s->rChild);
        DeQueue(&Q);                            //将队列中第一个结点出队
    }
}

/*计算树的深度*/
int Depth(BiTree T)
{
    if(T == NULL)                        //如果当前结点为空，返回0
        return 0;
    int L = Depth(T->lChild);            //遍历左子树
    int R = Depth(T->rChild);            //遍历右子树
    if(L > R)                            //取最大值返回
        return (L+1);
    else
        return (R+1);
}

/*中序遍历线索化*/
void Inorder_Traversal_Cue(BiTree &T)
{
    if(T)
    {
        Inorder_Traversal_Cue(T->lChild);            //递归左子树
        if(T->lChild == NULL)                        //左孩子为空
        {
            T->lFlag = 1;                            //左标记为1
            T->lChild = pre;                        //左指针指向前一结点
        }
        else
        {
            T->lFlag = 0;
        }
        if(pre->rChild == NULL)                        //前一结点的右孩子为空
        {
            pre->rFlag = 1;                            //前一结点的右标记为1
            pre->rChild = T;                        //前一结点的右指针指向当前结点
        }
        else
        {
            T->rFlag = 0;
        }
        pre = T;                                    //使当前结点成为前一结点
        Inorder_Traversal_Cue(T->rChild);            //递归右子树
    }
}

/*添加头结点，将二叉树线索化*/
BiTree AddHead(BiTree &T)
{
    BiTree head = (BiTree)malloc(sizeof(BiTreeNode));        //申请头结点
    head->lFlag = 0;                //头结点左标记为0
    head->rFlag = 1;                //右标记为1
    if(!T)                            //若二叉树为空
    {        
        head->lChild = head;        //左指针回指
        head->rChild = head;        //右指针回指
        return NULL;
    }
    pre = head;                        //前一结点指向头结点
    head->lChild = T;                //头结点的左孩子指向根结点
    Inorder_Traversal_Cue(T);        //中序线索化
    pre->rChild = head;                //为最后一个结点设置右指针指向头结点
    pre->rFlag = 1;                    //右标记为1
    head->rChild = pre;                //头结点的右指针指向尾结点
    return head;                    //返回头结点
}

/*遍历线索二叉树*/
void TreeCueTraversal(BiTree T)
{
    BiTree p = T->lChild;                //申请结点p指向根结点
    while(p != T)                        //根结点不为空
    {
        while(p->lFlag == 0)            //一直寻找第一个左标记为1的结点
            p = p->lChild;
        printf("%d ", p->date);            //打印第一个结点
        while(p->rFlag == 1 && p->rChild != T)        //若右标记是1，且右孩子不是头结点
        {
            p = p->rChild;                //一直遍历
            printf("%d ", p->date);
        }
        p = p->rChild;                //若右标记为0，p赋值为p的右子树
    }
    printf("\n");
}

int main()
{
    BiTree T;                        //声明一个树变量
    int dep = 0;                    //树深度变量

    while(true)
    {
        printf("请选择对二叉树的操作：\n");
        printf("1.创建\n");
        printf("2.先序遍历\n");
        printf("3.中序遍历\n");
        printf("4.后序遍历\n");
        printf("5.层序遍历\n");
        printf("6.获取深度\n");
        printf("7.中序线索化\n");
        printf("8.遍历线索化二叉树\n");
        printf("9.退出\n");
        int a;
        scanf("%d", &a);
        switch(a)
        {
            case 1:
                printf("请输入根节点：\n");
                CreatBiTree(&T);
                break;
            case 2:
                PreorderTraversal(T);
                break;
            case 3:
                InorderTraversal(T);
                break;
            case 4:
                PostorderTraversal(T);
                break;
            case 5:
                LevelTraversal(T);
                break;
            case 6:
                dep = Depth(T);
                printf("树的深度为 %d\n", dep);
                break;
            case 7:
                T = AddHead(T);
                break;
            case 8:
                TreeCueTraversal(T);
                break;
            case 9:
                return 0;
            default:
                printf("选择错误\n");
                break;
        }
    }
}

#include<stdio.h>
#include<malloc.h>
typedef int ElemType;                    //��������

//https://www.cnblogs.com/yurui/p/10359388.html

//http://c.biancheng.net/data_structure/tree/ 

typedef struct BiTreeNode                //�������ṹ��
{
    ElemType date;                        //�������
    struct BiTreeNode *lChild;            //��ָ��
    int lFlag;                            //���ǣ�==0ʱ����ָ��洢���ӽ�㣻==1ʱ����ָ��洢ǰ����㣩
    struct BiTreeNode *rChild;            //��ָ��
    int rFlag;                            //�ұ�ǣ�==0ʱ����ָ��洢�Һ��ӽ�㣻==1ʱ����ָ��洢��̽�㣩
}*BiTree;
BiTree pre;

typedef struct QNode                    //���ṹ��
{
    BiTree date;                        //�������
    struct QNode *next;                    //���ָ��
}*LinkQuePtr;                            //�����

typedef struct                            //���ӽṹ��
{
    LinkQuePtr front;                    //��ͷ���
    LinkQuePtr rear;                    //��β���
}LinkQue;                                //����

LinkQuePtr head = (LinkQuePtr)malloc(sizeof(QNode));                        //ͷ���

/*���ӵ���Ӳ���*/
int EnQueue(LinkQue *Q, BiTree e)
{
    LinkQuePtr s = (LinkQuePtr)malloc(sizeof(QNode));            //�����½��ռ�
    if(!s)
        return 0;
    s->date = e;                        //�½������ݵ���e
    s->next = NULL;                        //�½���ָ��ָ���
    Q->rear->next = s;                    //ԭ��β����ָ��ָ���½��
    Q->rear = s;                        //��βָ��ָ���½�㣨ʹ�½���Ϊ��β��㣩
    return 1;
}

/*���ӵĳ��Ӳ���*/
int DeQueue(LinkQue *Q)
{
    if(Q->front == Q->rear)                //�ж϶����Ƿ�Ϊ��
        return 0;
    LinkQuePtr s = (LinkQuePtr)malloc(sizeof(QNode));        //������ռ�s
    s = Q->front->next;                    //s�����ڶ�ͷ��㣨ͷָ����ָ��Ľ�㣩
    Q->front->next = s->next;            //ͷ����ָ��ָ��s������һ��㣨ʹs������һ����Ϊ��ͷԪ�أ�
    if(Q->rear == s)                    //�ж�s�Ƿ�Ϊ��βԪ�أ����ǣ�˵�������н���һ�����
        Q->rear = Q->front;                //ʹ��β���ָ��ͷ���
    free(s);                            //�ͷ�s���
    return 1;
}

/*��������������*/
void CreatBiTree(BiTree *T)
{
    ElemType e;                        //�������
    scanf("%d", &e);
    if(e == -1)                        //�������Ϊ-1����ǰ���Ϊ��
        (*T) = NULL;
    else
    {
        (*T) = (BiTree)malloc(sizeof(BiTreeNode));        //������ռ�
        (*T)->date = e;                        //Ϊ��ǰ��㸳ֵ
        printf("�����뵱ǰ��� %d �����ӣ���û�����ӣ�������-1\n", e);
        CreatBiTree(&((*T)->lChild));        //�ݹ鴴��������
        printf("�����뵱ǰ��� %d ���Һ��ӣ���û���Һ��ӣ�������-1\n", e);
        CreatBiTree(&((*T)->rChild));        //�ݹ鴴��������
    }
}

/*�������������*/
void PreorderTraversal(BiTree T)
{
    if(T == NULL)                            //�п�
        return;
    printf("%d ", T->date);                    //��ӡ��ǰ���
    PreorderTraversal(T->lChild);            //�ݹ����������
    PreorderTraversal(T->rChild);            //�ݹ����������
}

/*�������������*/
void InorderTraversal(BiTree T)
{
    if(T == NULL)                            //�п�
        return;
    InorderTraversal(T->lChild);            //�ݹ�������
    printf("%d ", T->date);                    //��ӡ��ǰ���
    InorderTraversal(T->rChild);            //�ݹ�������
}

/*�������������*/
void PostorderTraversal(BiTree T)
{
    if(T == NULL)                            //�п�
        return;
    PostorderTraversal(T->lChild);            //�ݹ�������
    PostorderTraversal(T->rChild);            //�ݹ�������
    printf("%d ", T->date);                    //��ӡ��ǰ���
}

/*�������������*/
void LevelTraversal(BiTree T)
{
    if(T == NULL)                            //�п�
        return;
    LinkQue Q;            //������Q
    Q.front = head;        //��ʼ������
    Q.rear = head;
    EnQueue(&Q, T);                            //����������
    while(Q.front != Q.rear)                //�ж϶����Ƿ�Ϊ��
    {
        BiTree s = Q.front->next->date;            //��ö����е�һ����������
        printf("%d ", s->date);                    //��ӡ��ǰ��������
        if(s->lChild)                            //���ý�������ӣ������������
            EnQueue(&Q, s->lChild);
        if(s->rChild)                            //���ý�����Һ��ӣ������Һ������
            EnQueue(&Q, s->rChild);
        DeQueue(&Q);                            //�������е�һ��������
    }
}

/*�����������*/
int Depth(BiTree T)
{
    if(T == NULL)                        //�����ǰ���Ϊ�գ�����0
        return 0;
    int L = Depth(T->lChild);            //����������
    int R = Depth(T->rChild);            //����������
    if(L > R)                            //ȡ���ֵ����
        return (L+1);
    else
        return (R+1);
}

/*�������������*/
void Inorder_Traversal_Cue(BiTree &T)
{
    if(T)
    {
        Inorder_Traversal_Cue(T->lChild);            //�ݹ�������
        if(T->lChild == NULL)                        //����Ϊ��
        {
            T->lFlag = 1;                            //����Ϊ1
            T->lChild = pre;                        //��ָ��ָ��ǰһ���
        }
        else
        {
            T->lFlag = 0;
        }
        if(pre->rChild == NULL)                        //ǰһ�����Һ���Ϊ��
        {
            pre->rFlag = 1;                            //ǰһ�����ұ��Ϊ1
            pre->rChild = T;                        //ǰһ������ָ��ָ��ǰ���
        }
        else
        {
            T->rFlag = 0;
        }
        pre = T;                                    //ʹ��ǰ����Ϊǰһ���
        Inorder_Traversal_Cue(T->rChild);            //�ݹ�������
    }
}

/*���ͷ��㣬��������������*/
BiTree AddHead(BiTree &T)
{
    BiTree head = (BiTree)malloc(sizeof(BiTreeNode));        //����ͷ���
    head->lFlag = 0;                //ͷ�������Ϊ0
    head->rFlag = 1;                //�ұ��Ϊ1
    if(!T)                            //��������Ϊ��
    {        
        head->lChild = head;        //��ָ���ָ
        head->rChild = head;        //��ָ���ָ
        return NULL;
    }
    pre = head;                        //ǰһ���ָ��ͷ���
    head->lChild = T;                //ͷ��������ָ������
    Inorder_Traversal_Cue(T);        //����������
    pre->rChild = head;                //Ϊ���һ�����������ָ��ָ��ͷ���
    pre->rFlag = 1;                    //�ұ��Ϊ1
    head->rChild = pre;                //ͷ������ָ��ָ��β���
    return head;                    //����ͷ���
}

/*��������������*/
void TreeCueTraversal(BiTree T)
{
    BiTree p = T->lChild;                //������pָ������
    while(p != T)                        //����㲻Ϊ��
    {
        while(p->lFlag == 0)            //һֱѰ�ҵ�һ������Ϊ1�Ľ��
            p = p->lChild;
        printf("%d ", p->date);            //��ӡ��һ�����
        while(p->rFlag == 1 && p->rChild != T)        //���ұ����1�����Һ��Ӳ���ͷ���
        {
            p = p->rChild;                //һֱ����
            printf("%d ", p->date);
        }
        p = p->rChild;                //���ұ��Ϊ0��p��ֵΪp��������
    }
    printf("\n");
}

int main()
{
    BiTree T;                        //����һ��������
    int dep = 0;                    //����ȱ���

    while(true)
    {
        printf("��ѡ��Զ������Ĳ�����\n");
        printf("1.����\n");
        printf("2.�������\n");
        printf("3.�������\n");
        printf("4.�������\n");
        printf("5.�������\n");
        printf("6.��ȡ���\n");
        printf("7.����������\n");
        printf("8.����������������\n");
        printf("9.�˳�\n");
        int a;
        scanf("%d", &a);
        switch(a)
        {
            case 1:
                printf("��������ڵ㣺\n");
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
                printf("�������Ϊ %d\n", dep);
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
                printf("ѡ�����\n");
                break;
        }
    }
}

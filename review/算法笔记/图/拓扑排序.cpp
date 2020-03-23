#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
#include<stack>

using namespace std;

const int maxn=100;


typedef struct ArcNode{
	int adjvex;
	struct ArcNode *nextarc;
}ArcNode;

typedef struct VertexNode{
	int data;
	ArcNode *firstarc;	
}VertexNode;

typedef struct AdjList{
	VertexNode vertex[maxn];
	int vexnum, arcnum;
}AdjList;


int locateVertex(AdjList *G, int data)
{
	for(int i=0;i<G->vexnum;i++)
		if(G->vertex[i].data==data)
			return i;
	return -1;
}


void creatAdjList(AdjList *G)
{
	printf("输入节点个数和边数：\n");
	scanf("%d %d", &G->vexnum, &G->arcnum);
	
	printf("输入各节点值：\n");
	for(int i=0;i<G->vexnum;i++)
	{
		scanf("%d", &G->vertex[i].data);
		G->vertex[i].firstarc = NULL;
	}
		
	int data1, data2;
	int i, j;	
	printf("逐个输入边:\n"); 
	for(int k=0;k<G->arcnum;k++)
	{
		scanf("%d %d", &data1, &data2);
		i = locateVertex(G, data1);
		j = locateVertex(G, data2);
		if(i==-1||j==-1)	return ;		
		
		ArcNode *p;
		p = new ArcNode; //容易忘记 
		p->nextarc = NULL;
		p->adjvex = j;
		p->nextarc = G->vertex[i].firstarc;
		G->vertex[i].firstarc = p;
	}
	
	for(int i=0;i<G->vexnum;i++)
	{
		ArcNode *r;
		r = G->vertex[i].firstarc;
		while(r!=NULL)
		{
			printf("%d->%d\n", G->vertex[i].data, G->vertex[r->adjvex].data);
			r = r->nextarc;
		}
	}
}


void FindID(AdjList *G, int indegree[])
{
	for(int i=0;i<G->vexnum;i++)
	{
		ArcNode *r;
		r = G->vertex[i].firstarc;
		while(r!=NULL)
		{
			indegree[r->adjvex]++;
			r = r->nextarc;
		}
	}
 } 
 
 
void TopoSort(AdjList *G)
{
	stack<int> st;
	int indegree[maxn];
	fill(indegree, indegree+maxn, 0);
	
	FindID(G, indegree);
	for(int i=0;i<G->vexnum;i++)
		if(indegree[i]==0)
			st.push(i);
		
	int count=0;	
	while(st.empty()==false)
	{
		int t = st.top();
		st.pop();
		printf("%d ", G->vertex[t].data);
		count++;
		
		ArcNode *r;
		r = G->vertex[t].firstarc;
		while(r!=NULL)
		{
			int k = r->adjvex;
			indegree[k]--;
			if(indegree[k]==0)
				st.push(k);
			r = r->nextarc;	
			
		}
	}
	if(count==G->vexnum)
		printf("排序成功\n");
	else
		printf("排序失败\n"); 
}
 
 
 


int main()
{
	AdjList G;
	creatAdjList(&G);
	TopoSort(&G);
	return 0;
 } 

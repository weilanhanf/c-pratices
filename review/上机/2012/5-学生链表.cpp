#include<stdio.h> 
#include<string.h>
#include<algorithm>
using namespace std; 


const int maxn=20;

typedef struct Stu{
	struct Stu *next;
	int gender=1;//1表示男生，0表示女生;默认男生 
	int age=0;//年龄 
	char name[maxn];
	char id[maxn];
}Stu, *StuLink;


double calAverageBoyAge(StuLink L)
//计算男生的平均年龄 
{
	double sums, aver;
	int num=0;
	Stu *p;
	p = L->next;
	sums=0;
	while(p!=NULL)
	{
		if(p->gender==1&&p->age>0)//如果是男生且符合年龄规定 
		{
			sums += p->age;
			num++;
		}
		p = p->next;
	}
	return sums/num;//返回链表中男生的平均年龄 
}


int cmp(Stu *p, Stu *q)
//对学生的名字按照字典序比较
//如果p->name<q->name，返回负数，如果p->name>q->name返回正数
//如果p->name==q->name,进一步比较学生id
//如果p->id<q->id，返回负数，如果p->id>q->id返回正数
//不可能存在两人名字相同并且学号相同 
{
	int res, idcmp;
	res = strcmp(p->name, q->name);
	if(res!=0)
		return res;
	else if(res==0)//如果相同，则按照id比较
	{
		idcmp = strcmp(p->id, q->id);
		return idcmp; 
	}
}


void stulinkSelectSort(StuLink L)
//对链表进行选择排序 
{
	Stu *p, *r, *k;
	for(p=L->next;p->next!=NULL;p=p->next)
	{
		k = p; 
		for(r=p->next;r!=NULL;r=r->next)
			if(cmp(r, k)>0) 
				k = r;//用k指向名字字典序小的学生节点
		if(k!=p)//只交换属性 
		{
			swap(p->age, k->age);
			swap(p->gender, k->gender);
			swap(p->name, k->name);
			swap(p->id, k->id);
		}
	}
}


void travel(StuLink L)//遍历整个链表 
{
	Stu *r;
	r = L->next;
	while(r!=NULL)
	{
		printf("学生姓名为%s,学生学号为%s,年龄为%d,分数为%d\n", r->name, r->id, r->age, r->gender);
		r = r->next;
	}
}


int main()
{
	int n;
	StuLink L;
	Stu *r;
	
	scanf("%d", &n);
	
	L = new Stu;
	L->next = NULL;
	
	for(int i=0;i<n;i++)//创建节点并插入 
	{
		r = new Stu; 
		printf("学生名字为：");
		scanf("%s", r->name);
		
		printf("学生学号为：");
		scanf("%s", r->id);
		
		printf("学生性别为（1表示男，0表示女）：");
		scanf("%d", &(r->gender));
		
		printf("学生年龄为：");
		scanf("%d", &(r->age)); 
		
		r->next = L->next;
		L->next = r;
		
		printf("\n");
	}
	
	double aver;
	aver = calAverageBoyAge(L);
	printf("男生平均年龄为：%5.2f\n", aver);
	
	printf("before sort:\n");
	travel(L);
	
	
	stulinkSelectSort(L);
	printf("after sort:\n");
	travel(L);
	
	return 0;
 } 

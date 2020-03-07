#include<stdio.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

const int maxn = 10;

typedef struct Student{
	char id[maxn];
	char name[maxn];
	double china, math, english;
	
//	Student(){}
//	Student(char *_id, char *_name, double _china, double _math, double _english){
//		*id = *_id;
//		*name = *_name;
//		china = _china;
//		math = _math;
//		english = _english;
//	}
}Student; 


bool cmp(Student a, Student b)
{
	double suma, sumb;
	suma = a.china + a.math + a.english;
	sumb = b.china + b.math + b.english;
	if(suma!=sumb)
		return suma > sumb;
	else
		return a.id < b.id;
}


bool isfail(Student a)
{
	if(a.english<60||a.math<60||a.china<60)
		return true; 
	return false;
}


void stuSort(Student stu[])
{
	sort(stu, stu+5, cmp);
}


int main()
{
	int i, failid[5]={0};
	Student stu[5];
	for(i=0;i<5;i++)
	{
		printf("第%d个学生id为：", i+1);
		scanf("%s", stu[i].id);
		printf("第%d个学生姓名为：", i+1);
		scanf("%s", stu[i].name);
		printf("第%d个学生语文成绩为：", i+1);
		scanf("%lf", &stu[i].china);
		printf("第%d个学生数学成绩为：", i+1);
		scanf("%lf", &stu[i].math);
		printf("第%d个学生英语成绩为：", i+1);
		scanf("%lf", &stu[i].english);
	}
	
	stuSort(stu);
	printf("\n对成绩排序后:\n"); 
	for(i=0;i<5;i++)
	{
		printf("\n第%d个学生id为：%s", i+1, stu[i].id);
		printf("\n第%d个学生姓名为：%s", i+1, stu[i].name);
		printf("\n第%d个学生语文成绩为：%.2f", i+1, stu[i].china);
		printf("\n第%d个学生数学成绩为：%.2f", i+1, stu[i].math);
		printf("\n第%d个学生英语成绩为：%.2f", i+1, stu[i].english);
		printf("\n第%d个学生总成绩为：%.2f", i+1, stu[i].english+stu[i].china+stu[i].math);
		if(isfail(stu[i])==true)
			printf("\n该学生成绩不合格\n");
		else
			printf("\n该学生成绩合格\n");
			
	}
	
	return 0;
}





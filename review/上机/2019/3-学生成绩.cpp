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
		printf("��%d��ѧ��idΪ��", i+1);
		scanf("%s", stu[i].id);
		printf("��%d��ѧ������Ϊ��", i+1);
		scanf("%s", stu[i].name);
		printf("��%d��ѧ�����ĳɼ�Ϊ��", i+1);
		scanf("%lf", &stu[i].china);
		printf("��%d��ѧ����ѧ�ɼ�Ϊ��", i+1);
		scanf("%lf", &stu[i].math);
		printf("��%d��ѧ��Ӣ��ɼ�Ϊ��", i+1);
		scanf("%lf", &stu[i].english);
	}
	
	stuSort(stu);
	printf("\n�Գɼ������:\n"); 
	for(i=0;i<5;i++)
	{
		printf("\n��%d��ѧ��idΪ��%s", i+1, stu[i].id);
		printf("\n��%d��ѧ������Ϊ��%s", i+1, stu[i].name);
		printf("\n��%d��ѧ�����ĳɼ�Ϊ��%.2f", i+1, stu[i].china);
		printf("\n��%d��ѧ����ѧ�ɼ�Ϊ��%.2f", i+1, stu[i].math);
		printf("\n��%d��ѧ��Ӣ��ɼ�Ϊ��%.2f", i+1, stu[i].english);
		printf("\n��%d��ѧ���ܳɼ�Ϊ��%.2f", i+1, stu[i].english+stu[i].china+stu[i].math);
		if(isfail(stu[i])==true)
			printf("\n��ѧ���ɼ����ϸ�\n");
		else
			printf("\n��ѧ���ɼ��ϸ�\n");
			
	}
	
	return 0;
}





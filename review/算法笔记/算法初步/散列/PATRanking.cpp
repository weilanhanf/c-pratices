#include<stdio.h>
#include<string.h>
#include<algorithm> 

typedef struct Student{
	char id[15]; //ѧ�� 
	int score;  //���� 
	int location_number; //������ 
	int location_rank;  //�������� 
}Student;

Student stu[100];

bool cmp(Student a, Student b)
{
	if(a.score!=b.score)
		return a.score > b.score;
	else
		return strcmp(a.id, b.id) < 0;
 } 


int main()
{
	int i, j, k, t, num=0;
	printf("�����뿼����: "); 
	scanf("%d", &t);
	for(i=1;i<=t;i++)
	{		
		scanf("%d", &k);  //kΪ�ÿ������� 
		for(j=0;j<k;j++)
		{
			scanf("%s %d", stu[num].id, stu[num].score);
			num++;
			stu[num].location_number = i;
		}
		sort(stu+num-k, );
	}
		
	return 0;
 } 

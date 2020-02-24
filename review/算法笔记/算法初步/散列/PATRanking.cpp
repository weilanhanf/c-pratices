#include<stdio.h>
#include<string.h>
#include<algorithm> 
using namespace std;

typedef struct Student{
	char id[15]; //ѧ�� 
	int score;  //���� 
	int location_number; //������ 
	int location_rank;  //�������� 
}Stu;

Stu stu[100];

bool cmp(Student a, Student b)
{
	if(a.score!=b.score)
		return a.score > b.score;
	else
		return strcmp(a.id, b.id) < 0;
 } 


int main()
{
	int i, j, k, n, num=0;
	char id[15];
	printf("�����뿼����: "); 
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{		
		printf("��%d����������Ϊ��", i);
		scanf("%d", &k);  //kΪ�ÿ������� 
		for(j=0;j<k;j++)
		{
			printf("�����%d�������źͷ�����", j+1);
			scanf("%s %d", stu[num].id, &stu[num].score);
			stu[num].location_number = i;
			num++;
		}
		sort(stu+num-k, stu+num, cmp);
		stu[num-k].location_rank = 1;
		for(j=num-k+1;j<num;j++)
			if(stu[j].score == stu[j-1].score)
				stu[j].location_rank = stu[j-1].location_rank;
			else
				stu[j].location_rank = j+1-(num-k);
	}
	printf("������������%d\n", num);
	sort(stu, stu+num, cmp);
	int sum_rank = 1; //��ǰ��������������ʼ��Ϊ��һ�� 
	for(i=0;i<num;i++)
	{
		if(i>0&&stu[i].score!=stu[i-1].score)
			sum_rank = i+1;
		printf("ѧ�ţ�%s ������%d ", stu[i].id, stu[i].score);
		printf("��������%d �༶��%d �༶������%d\n", sum_rank, stu[i].location_number, stu[i].location_rank);
	}
	return 0;
 } 

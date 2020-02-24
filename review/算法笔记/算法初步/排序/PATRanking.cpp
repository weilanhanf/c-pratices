#include<stdio.h>
#include<string.h>
#include<algorithm> 
using namespace std;

typedef struct Student{
	char id[15]; //学号 
	int score;  //分数 
	int location_number; //考场号 
	int location_rank;  //考场排名 
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
	printf("请输入考场数: "); 
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{		
		printf("第%d个考场人数为：", i);
		scanf("%d", &k);  //k为该考场人数 
		for(j=0;j<k;j++)
		{
			printf("输入第%d考生考号和分数：", j+1);
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
	printf("考生总人数：%d\n", num);
	sort(stu, stu+num, cmp);
	int sum_rank = 1; //当前考生总排名，初始化为第一名 
	for(i=0;i<num;i++)
	{
		if(i>0&&stu[i].score!=stu[i-1].score)
			sum_rank = i+1;
		printf("学号：%s 分数：%d ", stu[i].id, stu[i].score);
		printf("总排名：%d 班级：%d 班级排名：%d\n", sum_rank, stu[i].location_number, stu[i].location_rank);
	}
	return 0;
 } 

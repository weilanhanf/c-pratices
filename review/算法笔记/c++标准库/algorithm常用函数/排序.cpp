#include<stdio.h>
#include<algorithm>
#include<string.h> 
using namespace std;

//sort()函数中数组首地址与尾地址，比较函数的写法 

//bool cmp(int a, int b)
//{
//	return a>b;
//}

struct Student{
	char id[10]; //学号 
	int score;  //分数 
	int location_number; //考场号 
	int location_rank;  //考场排名 
}stu[10];


bool cmp(Student a, Student b){
	return a.score>b.score;
}

int main()
{
	
	strcpy(stu[0].id, "1111111111");
	strcpy(stu[1].id, "2111111111");
	strcpy(stu[2].id, "3111111111");
	
//	gets(str1);
//	gets(str2);
//	gets(str3);
//	strcpy(stu[0].id, str1);
//	strcpy(stu[1].id, str2);
//	strcpy(stu[2].id, str3);
//	
	stu[0].score = 100;
	stu[1].score = 90;
	stu[2].score = 110;
	sort(stu, stu+3, cmp);
	for(int i=0;i<3;i++)
	{
		
		printf("%s %d\n", stu[i].id, stu[i].score);
		printf("%d\n", stu[i].score);
	}
	return 0;
 } 

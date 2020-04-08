#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<string.h>

using namespace std;

const int maxn = 10010;


typedef struct Student{
    int score;
    char name[maxn];
}Student;


bool cmp1(Student a, Student b)
{
    return a.score > b.score;
}

bool cmp2(Student a, Student b)
{
    return a.score < b.score;
}


int main()
{
    int  n;
    int flag;
    Student stu[maxn];
    while(scanf("%d %d", &n, &flag)!=EOF)
    {

        for(int i=0;i<n;i++)
            scanf("%s %d", stu[i].name, &stu[i].score);

        if(flag==0)
            stable_sort(stu, stu+n, cmp1);
        else if(flag==1)
            stable_sort(stu, stu+n, cmp2);

        for(int i=0;i<n;i++)
            printf("%s %d\n", stu[i].name, stu[i].score);
    }
        
    return 0;
}




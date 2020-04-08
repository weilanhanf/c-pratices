#include<stdio.h>
#include<algorithm>
#include<string.h>

using namespace std;


typedef struct student{
    int id;
    int score;
}student;

const int maxn=101;

bool cmp(student a, student b)
{
    if(a.score!=b.score)
        return a.score<b.score;
    else
        return a.id<b.id;
}


int main()
{
    int n;
    student stu[maxn];
    scanf("%d", &n);
    
    for(int i=0;i<n;i++)
        scanf("%d %d", &stu[i].id, &stu[i].score);
    
    sort(stu, stu+n, cmp);
    
    for(int i=0;i<n;i++)
        printf("%d %d\n", stu[i].id, stu[i].score);
    
    
    return 0;
}

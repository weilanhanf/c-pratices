#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h> 

using namespace std;

const int maxn=1000;

typedef struct Student{
    char id[100];
    char name[10];
    char gender[10];
    int age;
}Student;



int main()
{
    Student stu[maxn];
    int N, M;
    scanf("%d", &N);
    for(int i=0;i<N;i++)
        scanf("%s %s %s %d", stu[i].id, stu[i].name, stu[i].gender, &(stu[i].age));

    scanf("%d", &M);
    while(M--)
    {
        char id[maxn];
        bool flag=false;
        scanf("%s", id);
        for(int i=0;i<N;i++)
            if(strcmp(id, stu[i].id)==0)
            {
                flag=true;
                printf("%s %s %s %d\n", stu[i].id, stu[i].name, stu[i].gender, stu[i].age);
                break;
            }
        if(flag==false)
            printf("No Answer!\n");
    }
    
    return 0;
}

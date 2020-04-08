#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

int days[13][2] = {
    {0, 0}, 
    {31,31}, {28,29}, {31,31}, {30,30}, {31,31}, {30,30},
    {31,31}, {31,31}, {30,30}, {31,31}, {30,30}, {31,31},
};


bool isLeap(int year)
{
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
        return true;
    return false;
}

int main()
{
    int day, month, year;
    while(scanf("%d %d %d", &year, &month, &day)!=EOF)
    {
        int sums=0;
        for(int i=1;i<month;i++)
            sums += days[i][isLeap(year)];
        sums += day;
        
        printf("%d\n", sums);
    }
    
    return 0;
}

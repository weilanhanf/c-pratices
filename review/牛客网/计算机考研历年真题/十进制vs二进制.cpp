#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;

const int maxn=1000;

int a[maxn];
int num;

void tenToTwo(int x)
{
    while(x!=0)
    {
        a[num++] = x%2;
        x /= 2;
    }
}


int twoToTen()
{
    int y=0;
    for(int i=0;i<num;i++)
    {
        y += (int)pow(2.0, i)*a[i];
    }
    return y;
}



int main()
{
    int x, y;
    scanf("%d", &x);
    tenToTwo(x);
    reverse(a, a+num);
    y = twoToTen();
    printf("%d\n", y);
    return 0;
}

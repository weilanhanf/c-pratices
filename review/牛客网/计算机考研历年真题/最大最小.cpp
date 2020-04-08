#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;

const int maxn = 100000;

int main()
{
    int n;
    int a[maxn]={0};
    while(scanf("%d", &n)!=EOF)
    {
        int m , minn;
        for(int i=0;i<n;i++)
        {
        	scanf("%d", &a[i]);
            if(i==0)
            {
                m = a[0];
                minn=a[0];
            }
            else
            {
                if(a[i]>m)
                    m = a[i];
                else if(a[i]< minn)
                    minn = a[i];
            }
        }
        printf("%d %d\n", m , minn);
    }

    return 0;
}

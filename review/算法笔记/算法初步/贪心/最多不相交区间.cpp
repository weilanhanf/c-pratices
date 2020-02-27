#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

const int MAX = 100;

struct Interval{
	int x, y; //定义左右区间x，y 
}In[MAX];


bool cmp(Interval a, Interval b)
{
	if(a.x != b.x)
		return a.x > b.x;
	else
		a.y < b.y;
}


int main()
{
	int n, i, j;
	while(scanf("%d", &n), n!=0)
	{
		for(i=0;i<n;i++)
			scanf("%d %d", &In[i].x, &In[i].y);
			
		sort(In, In+n, cmp); 
		
		int ans=1, LastX=In[0].x;
		for(j=1;j<n;j++)
		{
			if(In[j].y<=LastX)
			{
				ans++;
				LastX = In[j].x;
			}
		}
		printf("%d\n", ans);
	 } 
	return 0;
} 

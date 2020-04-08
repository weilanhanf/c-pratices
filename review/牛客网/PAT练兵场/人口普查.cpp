#include<stdio.h>
#include<math.h>
#include<algorithm>

using namespace std;

const int maxn=100;


typedef struct People{
	char name[5];
	int year;
	int month;
	int day;
}People;


bool cmp(People a, People b)
{
	if(a.year!=b.year)
		return a.year<b.year;
	else
	{
		if(a.month!=b.month)
			return a.month<b.month;
		else
		{
			return a.day<b.day;
		}
	}
}


bool isLegal(People c) // 1814/09/06-2014/09/06都是合法 
{
	
	int year, month, day;
	year = c.year;
	month = c.month;
	day = c.day; 
	
	if(year>2014||year<1814)
		return false;
	else if(year<2014&&year>1814)
		return true;
	else
	{
		if(year==2014)
		{
			if(month>9)
				return false;
			else if(month<9)
				return true;
			else
			{
				if(day>6)
					return false;
				else
					return true;
			}
		}
		if(year==1814)
		{
			if(month<9)
				return false;
			else if(month>9)
				return true;
			else
			{
				if(day<6)
					return false;
				else
					return true;
			}
		}
	}


}

People p[maxn], q[maxn];

int main()
{
	int N, num=0;
	scanf("%d", &N);
	
	for(int i=0;i<N;i++)
		scanf("%s %d/%d/%d", p[i].name, &p[i].year, &p[i].month, &p[i].day);
	
	for(int i=0;i<N;i++)
		if(isLegal(p[i]))
			q[num++] = p[i];
	
	stable_sort(q, q+num, cmp);
	
	printf("%d %s %s\n", num, q[0].name, q[num-1].name);
	
	
	return 0;
} 

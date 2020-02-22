#include<stdio.h>
//codeup1928

bool IsLeap(int year)//是否为闰年 
{
	return ((year%4==0&&year%100!=0)||(year%400==0));
}

int months[13][2] = {
	{0, 0}, 
	{31, 31},{28, 29},{31, 31},{30, 30},{31, 31},{30, 30},
	{31, 31},{31, 31},{30, 30},{31, 31},{30, 30},{31, 31}
};

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}


int main()
{
	int ans;
	int time1, time2, time;
	int y1, m1, d1, y2, m2, d2;
	int isleap;
	while(scanf("%d %d", &time1, &time2)!=EOF)
	{
		if(time1>time2)  // 转换使得time2>time1 
			swap(&time1, &time2);
		ans = 1;  //天数相同也记为1 
		y1 = time1/10000;  m1 = time1%10000/100; d1 = time1%100;
		y2 = time1/10000;  m2 = time2%10000/100; d2 = time2%100;
		isleap = IsLeap(y1);
		
		while(y1<y2 || m1<m2 || d1<d2)
		{
			ans ++;  //累计加一 
			d1++;  //天数增一 
			if(d1 == months[m1][isleap]+1){
				m1++;
				d1 = 1;
			} 
			if(m1==13)
			{
				y1++;
				m1=1;
			}
		}
		printf("相差%d天\n", ans);
			
	}
	
	return 0;
 } 

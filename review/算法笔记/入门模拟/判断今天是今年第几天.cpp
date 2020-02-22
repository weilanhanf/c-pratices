#include<stdio.h>

bool IsLeap(int year)//ÊÇ·ñÎªÈòÄê 
{
	return ((year%4==0&&year%100!=0)||(year%400==0));
}

int main()
{
	int year, month, day, days;
	scanf("%d %d %d", &year, &month, &day);
	bool isleap = IsLeap(year);
	days=day;
	switch(month)
	{
		case 1: 
			days += 0;
			break;
		case 2: 
			days += 31;
			break;
		case 3: 
			days += 31+28;
			break;
		case 4: 
			days += 31+28+31; 
			break;
		case 5:
			days += 31+28+31+30; 
			break;
		case 6:
			days += 31+28+31+30+31; 
			break;
		case 7:
			days += 31+28+31+30+31+30;  
			break;
		case 8:
			days += 31+28+31+30+31+30+31;  
			break;
		case 9:
			days += 31+28+31+30+31+30+31+31;  
			break;
		case 10:
			days += 31+28+31+30+31+30+31+31+30;   
			break;
		case 11:
			days += 31+28+31+30+31+30+31+31+30+31; 
			break;
		case 12:
			days += 31+28+31+30+31+30+31+31+30+31+30;  
			break;
		default : 
			days += 0; 
			break;
	}
	if(isleap&&month>=3)
		days += 1;
	printf("%d", days);
	
	return 0;
 } 

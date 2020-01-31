#include<stdio.h>

int main(){
	int day, month, year;
	int sum, key=0;
	
	while(1){
		printf("请输入年月日(如2005 09 12)：");
		scanf("%d%d%d", &year, &month, &day);
	
		switch(month){
			case 1:sum=0; break;
			case 2:sum=31; break;
			case 3:sum=59; break;
			case 4:sum=90; break;
			case 5:sum=120; break;
			case 6:sum=151; break;
			case 7:sum=181; break;
			case 8:sum=212; break;
			case 9:sum=243; break;
			case 10:sum=273; break;
			case 11:sum=304; break;
			case 12:sum=334; break;
			default: printf("data error"); break;
		}
		sum+=day;
		
		// 判断是否为闰年
		if(year%400==0||(year%4==0&&year%100!=0))
			key=1;
		
		if(key==1&&month>2)
			sum++;
		printf("这是这一年的第%d天\n", sum);	
		}
	
}

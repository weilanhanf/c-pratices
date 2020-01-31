#include<stdio.h>

int main(){
	double award;
	double bonus1, bonus2, bonus4, bonus6, bonus10, bonus;
	
	bonus1=10*0.1;
	bonus2=bonus1+10*0.075;
	bonus4=bonus2+20*0.05;
	bonus6=bonus4+20*0.03;
	bonus10=bonus6+40*0.015;
	
	printf("输入当月利润："); 
	scanf("%lf", &bonus);
/*	
	switch(bonus) // switch(常量表达式)必须为整数类型 
	{
		case bonus>100:
			award=(bonus-bonus10)*0.01+bonus10;
			break;
			
		case bonus>60 && bonus<=100:
			award=(bonus-bonus6)*0.015+bonus6;
			break;
			
		case bonus>40 && bonus<=60:
			award=(bonus-bonus4)*0.03+bonus4;
			break;
			
		case bonus>20 && bonus<=40:
			award=(bonus-bonus2)*0.05+bonus2;
			break;
			
		case bonus>10 && bonus<=20:
			award=(bonus-bonus1)*0.075+bonus1;
			break;
			
		case bonus<=10:
			award=(bonus)*0.1;
			break;
		
		default:
			award=0;
			break;
	}
*/

	if(bonus>100)
		award=bonus10+(bonus-100)*0.01;
	else if(bonus>60&&bonus<=100)
		award=(bonus-60)*0.015+bonus6;
	else if(bonus>40 && bonus<=60)
		award=(bonus-40)*0.03+bonus4;
	else if(bonus>20 && bonus<=40)
		award=(bonus-20)*0.05+bonus2;
	else if(bonus>10 && bonus<=20)
		award=(bonus-10)*0.075+bonus1;
	else if(bonus<=10)
		award=(bonus)*0.1;
		 
	printf("奖金为=%lf", award);
	
}

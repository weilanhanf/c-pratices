#include<stdio.h>
#include<math.h>



int main()
{
	double sal, tar, res; 
	scanf("%lf", &sal);
	
	if(sal<=1600)
		tar = 0;
	else if(sal>1600&&sal<=2500)
		tar = (sal-1600) * 0.05;
	else if(sal>2500&&sal<=3500)
		tar = (sal-1600) * 0.1;
	else if(sal>2500&&sal<=4500)
		tar = (sal-1600) * 0.15;
	else if(sal>=4500)
		tar = (sal-1600) * 0.2;
	
	res = sal - tar;
	printf("税后工资为：%.2f\n", res);
	
	return 0;
 } 

#include<stdio.h>
#include<math.h>


int main()
{
	int x1, y1, z1, x2, y2, z2, x, y, z;
	scanf("%d.%d.%d %d.%d.%d", &x1, &y1, &z1, &x2, &y2, &z2);

	bool flag;
	int sums1, sums2, sums;
	
	sums1 = z1+y1*19+x1*19*17;
	sums2 = z2+y2*19+x2*19*17;
	
	if(sums2>=sums1)
		flag = true;
	else
		flag = false;
		
	sums = sums2-sums1;
	x = sums/(19*17);
	y = sums%(19*17)/19;
	z = sums%19;
	
	if(flag==false)
		printf("-");
	printf("%d.%d.%d\n", abs(x), abs(y), abs(z));
	
	return 0;
} 

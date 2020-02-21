#include<stdio.h>
#include<math.h>
#define PI acos(-1.0)
const double eps = 1e-8;
#define IsEqual(a,b) (fabs((a)-(b))<(eps))
#define More(a,b) (((a)-(b))>(eps))
#define Less(a,b) (((a)-(b))<(-eps))
#define MoreEqual(a,b) (((a)-(b))>(-eps))
#define LessEqual(a,b) (((a)-(b))<(eps))

//精度问题 

int main()
{
	double db = 1.23;
	if(IsEqual(db, 1.23))
		printf("db=1.23");
	else
		printf("db!=1.23");
		
	return 0;
}

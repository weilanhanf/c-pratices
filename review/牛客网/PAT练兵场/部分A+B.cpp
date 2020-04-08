#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h> 

using namespace std;



int main()
{
	char A[10], B[10];
	int DA, DB;
	scanf("%s %d %s %d", A, &DA, B, &DB);
	
	int a[10], b[10], c[10];
	int anum, bnum;
	fill(a, a+10, 0);
	fill(b, b+10, 0);
	anum = 0;
	bnum = 0;
	
	for(int i=0;i<strlen(A);i++)
		if(A[i]-'0'==DA)
			a[anum++] = DA;
	
	for(int i=0;i<strlen(B);i++)
		if(B[i]-'0'==DB)
			b[bnum++] = DB;

	
	int x=0;
	for(int i=0;i<anum;i++)
		x += (int)(pow(10.0, i))*a[i];
	
	
	int y=0;
	for(int i=0;i<bnum;i++)
		y += (int)(pow(10.0, i))*b[i];
	
	int z = x+y;
	printf("%d\n", z);
	
		
	
	return 0;
}

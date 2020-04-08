#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>

//´óÊý³ý·¨ 

using namespace std;


const int maxn=1000;


int main()
{
	int R=0, B;
	char A[maxn];
	int Q[maxn];
	scanf("%s %d", A, &B);
	int alen, qlen;
	alen = strlen(A);
	qlen = alen;
	reverse(A, A+alen);
	
	for(int i=alen-1;i>=0;i--)
	{
		R = R*10+(A[i]-'0');
		if(R<B)
			Q[i] = 0;
		else
		{
			Q[i] = R/B;
			R = R%B;
		}
	}
	
	while(qlen-1>=1&&Q[qlen-1]==0)
	{
		qlen--;
	}
	
	reverse(Q, Q+qlen);
	
	for(int i=0;i<qlen;i++)
		printf("%d", Q[i]);
	printf(" %d\n", R);
	
	
	return 0;
 } 

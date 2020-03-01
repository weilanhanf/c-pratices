#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>
#include<stack>
using namespace std;


int main()
{
	stack<int>st;
	for(int i=0;i<10;i++) 
		st.push(i);
	printf("%d\n", st.size());
	for(int i=0;i<9;i++) 
	{
		printf("%d ", st.top());
		st.pop();
	}
	
	printf("\nÊÇ·ñÎª¿Õ%d", st.empty()); 
	return 0;
 } 

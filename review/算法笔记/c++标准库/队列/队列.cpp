#include<stdio.h>
#include<string.h>
#include<queue>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	queue<int> que;
	if(que.empty())
		printf("队列为空\n");
	else
		printf("队列非空\n");
		
	for(int i=0;i<10;i++)
		que.push(i);
	printf("front %d, back %d, size %d\n", que.front(), que.back(), que.size());
	
	for(int i=0;i<8;i++)
		que.pop(); 
	printf("front %d, back %d, size %d\n", que.front(), que.back(), que.size());		
	
	if(que.empty())
		printf("队列为空\n"); 
	else
		printf("队列非空\n");
	
	
	return 0;
} 

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
		printf("����Ϊ��\n");
	else
		printf("���зǿ�\n");
		
	for(int i=0;i<10;i++)
		que.push(i);
	printf("front %d, back %d, size %d\n", que.front(), que.back(), que.size());
	
	for(int i=0;i<8;i++)
		que.pop(); 
	printf("front %d, back %d, size %d\n", que.front(), que.back(), que.size());		
	
	if(que.empty())
		printf("����Ϊ��\n"); 
	else
		printf("���зǿ�\n");
	
	
	return 0;
} 

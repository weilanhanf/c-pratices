#include<stdio.h>
#include<string.h>
#define M 100

typedef struct{
	char elem[M];
	int last;  //最后一个元素的下标 
}SeqList;

int main()
{
	SeqList L;
	char ch; 
	int i, j, n, length;
	
	printf("请输入一串字符: ");
	scanf("%s", L.elem);
	getchar(); //消除换行符 
	printf("请输入要删除的字符:");
	scanf("%c", &ch);
	 
	i = j =0; 
	length = strlen(L.elem);
	L.last = length - 1;
//	puts(L.elem);
//	putchar(ch);
	
	while(i<=L.last)
	{
		if(L.elem[i]!=ch)
		{
			L.elem[j] = L.elem[i];
			i++;
			j++;
		}
		else
			i++;
	}
	L.last = j-1;
	for(i=0;i<=L.last;i++)
		printf("%c", L.elem[i]);
} 
 

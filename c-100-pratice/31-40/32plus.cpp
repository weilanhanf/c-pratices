#include<stdio.h>
#include<string.h>
#define M 100

typedef struct{
	char elem[M];
	int last;  //���һ��Ԫ�ص��±� 
}SeqList;

int main()
{
	SeqList L;
	char ch; 
	int i, j, n, length;
	
	printf("������һ���ַ�: ");
	scanf("%s", L.elem);
	getchar(); //�������з� 
	printf("������Ҫɾ�����ַ�:");
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
 

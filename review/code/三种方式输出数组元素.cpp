#include<stdio.h>

int main(){
	int a[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%d", &a[i]);
	printf("%\n");
	for(i=0;i<10;i++)
		printf("%d", a[i]);	
} 


int main(){
	int a[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%d", &a[i]);
	printf("%\n");
	for(i=0;i<10;i++)
		printf("%d", *(p+i));	
} 

int main(){
	int a[10];
	int i;
	for(i=0;i<10;i++)
		scanf("%d", &a[i]);
	printf("%\n");
	for(p=a;p<(a+10);p++)
		printf("%d", *p);	
} 


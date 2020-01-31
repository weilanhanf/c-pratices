#include<stdio.h>

void change(int array[], int n)
{
	int i;
	for(i=0;i<n;i++)
		*(array++)=0;
}

int  main(){
	int i;
	int array[10] = {1,32, 423, 543, 543};
	change(array, 10);
	
	for(i=0;i<10;i++)
		printf("%d", array[i]);
	return 0;
	
} 

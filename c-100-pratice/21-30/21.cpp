#include<stdio.h>

int main(){
	int i, x, y;
	x=1;  //��ʮ������� 
	for(i=1;i<=9;i++)
	{
		y = (x+1)*2;
		x = y; 
	}
	printf("�ܹ���%d�����ӡ�", x);
} 

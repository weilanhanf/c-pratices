#include<stdio.h>
#include<math.h>
#define PI 3.14

/*
c������û��ר�ŵĺ�����ƽ�� x*X 
����math��ʹ��pow(��ƽ����������)���� 
*/

//#undef PI

int main(){
	int rad = 6;
	
	printf("radius=%d, area=%f\n", rad, PI*rad*rad);
	printf("radius=%d, area=%f", rad, PI*pow(rad, 2));
} 

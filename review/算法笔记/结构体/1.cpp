#include<stdio.h>

struct Point{
	int x, y;
	Point(){} //����ʼ������
	Point(int _x, int _y): x(_x), y(_y){}  //�ṩx��y��ʼ������ 
}pt[10]; 

int main()
{
	int i, j, num=0;
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			pt[num++] = Point(i,j);
			
	for(i=0;i<num;i++)
		printf("Point(%d)��x=%d, y=%d\n", i, pt[i].x, pt[i].y);
	
	return 0;
 } 

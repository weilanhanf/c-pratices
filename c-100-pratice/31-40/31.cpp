#include<stdio.h>

int main(){
	char d, c;
	printf("�����һ����ĸ��");
	scanf("%c", &c);

//	c = getchar();
	getchar();
	switch(c)
	{
		case 'm':
			printf("Monday"); break;
		case 't':
			printf("��������һ����ĸ��"); 
			d = getchar();
			if(d=='h') {printf("Thursday"); break;}		
			if(d=='u') {printf("Tuesday"); break;}
		case 'w':
			printf("Wednesday");break;
		case 'f':
			printf("Friday");break;
		case 's':
			printf("��������һ����ĸ��"); 
			d = getchar();
			if(d=='u') {printf("Saturday"); break;}		
			if(d=='a') {printf("Sunday"); break;}
		default:
			printf("error"); break;
	}
}

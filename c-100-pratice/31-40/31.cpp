#include<stdio.h>

int main(){
	char d, c;
	printf("输入第一个字母：");
	scanf("%c", &c);

//	c = getchar();
	getchar();
	switch(c)
	{
		case 'm':
			printf("Monday"); break;
		case 't':
			printf("请输入下一个字母："); 
			d = getchar();
			if(d=='h') {printf("Thursday"); break;}		
			if(d=='u') {printf("Tuesday"); break;}
		case 'w':
			printf("Wednesday");break;
		case 'f':
			printf("Friday");break;
		case 's':
			printf("请输入下一个字母："); 
			d = getchar();
			if(d=='u') {printf("Saturday"); break;}		
			if(d=='a') {printf("Sunday"); break;}
		default:
			printf("error"); break;
	}
}

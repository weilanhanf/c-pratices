#include<stdio.h>

int main(){
	int score;
	char grade;
	printf("ÇëÊäÈë·ÖÊý£º"); 
	scanf("%d", &score);
	grade=(score>=90)?'A':((score>=60)?'B':'C');
	printf("%c\n", grade);
}

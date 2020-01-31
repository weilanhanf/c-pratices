#include<stdio.h>

int m; //定义全局变量；

void func(){
	m=23;
} 

int main(){
	
	// func();
	printf("%d", m);
}



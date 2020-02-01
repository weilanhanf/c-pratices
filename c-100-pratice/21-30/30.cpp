#include<stdio.h>
#include<string.h>

int main(){
	int i, j;
	char str[100];
	scanf("%s", str);
	for(i=0,j=strlen(str)-1;i<=j;i++,j--)
		if(str[i]!=str[j])
			break;
	if(i>j)
		printf("是回文");
	else
		printf("不是回文"); 
	

}

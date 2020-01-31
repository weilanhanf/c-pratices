#include<stdio.h>
/* 将一定规律的电文变成密码，将字母A变成E，将字母a变成e，
即变成其后的第四个字母，W将变成A，字母按照上述规律转换，非字母字符不变，
输入一行字符，输出相应的密码。 
*/ 

int main(){
	char c;
	while((c=getchar())!='\n')
	{
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
		{
			c=c+4;
			if(c>'Z'&&c<='Z'+4||c>'z')
				c=c-26;
		} 
		printf("%c",c);
	}
	printf("%\n");
} 

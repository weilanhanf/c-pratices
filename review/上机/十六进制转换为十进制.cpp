#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

int hex_to_dec(char str[])
{
	char ch;
	int x, len, sum=0;
	len = strlen(str);
	reverse(str, str+len);
	for(int i=0;i<len;i++)
	{
		if(str[i]>='a'&&str[i]<='z')
			x = str[i]-'a'+10;
		else if(str[i]>='A'&&str[i]<='Z')
			x = str[i]-'A'+10;	
		else 
			x = str[i] - '0';
		sum += x * pow(16.0, i);
	}
	
	return sum;
}
 

int main()
{
	char str[10];
	gets(str);
	printf("%d\n", hex_to_dec(str));
	return 0;
 } 

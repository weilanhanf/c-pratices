#include<stdio.h>
#include<string.h>

int main()
{
	char s[100], a[100][100];
	int i, k=0, num=0;
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
			a[num][k++] = s[i];
		else
		{
			a[num][k] = '\0';
			num++;
			k=0;
		}
	}
	for(i=num;i>=0;i--)
	{
		printf("%s", a[i]);
		if(i>0)
			printf(" ");
	}
	
	return 0;
 } 

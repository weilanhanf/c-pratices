#include<stdio.h>
#include<string.h>

int main()
{
	char s[10], ch, s1[10], s2[12], s3[10];

	while(scanf("%s %s %s", s1, s2, s3))
	{
		printf("len(%s)=%d\n", s1, strlen(s1));
		printf("len(%s)=%d\n", s2, strlen(s2));
		printf("len(%s)=%d\n", s3, strlen(s3));
	}

	
//	while(gets(s)!=NULL)
//	{
//		printf("len(%s)=%d\n", s, strlen(s));
//	}


//	while(ch = getchar())
//	{
////		printf("len(%s)=%d\n", s, strlen(s));
//		printf("%c", ch);
//	}
	return 0; 
}

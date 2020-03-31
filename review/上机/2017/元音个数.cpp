#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

//输入一串字符，统计元音字符的个数 



int main()
{
	int a[5];
	char str[101];
	gets(str);
	
	fill(a, a+5, 0);
	
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
			str[i] += 32;
		switch(str[i])
		{
			case 'a':
				a[0] ++;
				break;
				
			case 'e':
				a[1]++;
				break;
			
			case 'i':
				a[2]++;
				break;
				
			
			case 'o':
				a[3]++;
				break;
				
			
			case 'u':
				a[4]++;
				break;
		}
			
	} 
	
	printf("a:%d\n", a[0]);
	printf("e:%d\n", a[1]);
	printf("i:%d\n", a[2]);
	printf("o:%d\n", a[3]);
	printf("u:%d\n", a[4]);

    return 0;
}

#include<stdio.h>
#include<string.h>

int main()
{
	char a, b, ch;
	int T;
	scanf("%d", &T);
	getchar();
	while(T--)
	{
		scanf("%c %c", &a, &b);
		getchar();
		printf("a=%c b=%c\n", a, b);
	}
	return 0;
}

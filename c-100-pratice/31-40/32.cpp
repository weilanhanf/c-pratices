#include<stdio.h>
#include<string.h>

char* deleteCharacters(char* str, char* charSet)
{
	int hash[256], i, currentIndex = 0;
	if(charSet == NULL)
		return str;
	for(i=1;i<256;i++)
		hash[i]=0;
	for(i=0;i<strlen(charSet);i++)
		hash[charSet[i]]=1;
	for(i=0;i<strlen(str);i++)
		if(hash[str[i]]==0)
			str[currentIndex++] = str[i];
	str[currentIndex] = '\0';
	return str;
}


int main()
{
	char str[100], ch[100]; 
	
	printf("ÇëÊäÈëÒ»´®×Ö·û: ");
	scanf("%[^\n]", &str);
	getchar(); //Ïû³ý»»ÐÐ·û 
	printf("ÇëÊäÈëÒªÉ¾³ýµÄ×Ö·û:");
	scanf("%s", &ch);
//	printf("%s\n", str);
//	putchar(ch);
	
	printf("%s\n", deleteCharacters(str, ch));
} 
 

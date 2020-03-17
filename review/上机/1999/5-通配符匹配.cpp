#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

//给出一个模式串及一个主串，模式串中可能含有通配符“*”及“？”，其中
//“*”表示该位置上有 0 个或者多个字符，“？”表示该位置上有一个字符。
//编程输入模板串及主串，判定是否匹配并给出结果信息


const int maxn = 20;


//int stringMatch(char s[], char t[])
////s为主串，t为模式串 
//{
//	int slen, tlen; 
//	int i, j, k;
//	slen = strlen(s); tlen = strlen(t);
//	k = 0;
//	i = k; j = 0; 
//	if(slen==0||tlen==0)
//		return 0;
//	while(i<slen&&j<tlen)
//	{
//		
//		if(t[j]=='*'&&j<tlen) 
//		{
//			j++;
//			
//		}
//		else if(t[j]=='?'||s[i]==t[j])//通配符'?'匹配或匹配成功 
//		{	
//			i++; 
//			j++; 
//		}
//		else
//		{
//			k++;
//			i = k;
//			j = 0;
//		}
//	}
//	
//	if(j>=tlen)	//字串匹配完成 
//		return k;
//	else
//		return -1;
//
//}


bool isMatch(char s[], char p[])
{
	int i = 0;
    int j = 0;
    int starIndex = -1;
    int iIndex = -1;
	int slen= strlen(s), plen = strlen(p);

    while (i < slen) {
        if (j < plen && (p[j] == '?' || p[j] == s[j])) {
            ++i;
            ++j;
        } else if (j < plen && p[j] == '*') {
            starIndex = j;
            iIndex = i;
            j++;//'*' can match 0 or above 0 characters
        } else if (starIndex != -1) {
            //such as "abggggb","*b"
            //so every time matching starts form the fisrt index of *
            //can avoid the case above
            j = starIndex + 1;
            i = iIndex+1;
            iIndex++;
        } else {
            return false;
        }
    }

    while (j < plen && p[j] == '*') {
        ++j;
    }

    return j == p[j];
}


int main()
{
	char s[maxn], t[maxn];
	int pos;
	gets(s);
	gets(t);
//	pos = stringMatch(s, t);
	
	if(isMatch(s, t))
		printf("匹配");
	
	return 0;
 } 

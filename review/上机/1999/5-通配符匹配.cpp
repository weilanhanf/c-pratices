#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

//����һ��ģʽ����һ��������ģʽ���п��ܺ���ͨ�����*����������������
//��*����ʾ��λ������ 0 �����߶���ַ�����������ʾ��λ������һ���ַ���
//�������ģ�崮���������ж��Ƿ�ƥ�䲢���������Ϣ


const int maxn = 20;


//int stringMatch(char s[], char t[])
////sΪ������tΪģʽ�� 
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
//		else if(t[j]=='?'||s[i]==t[j])//ͨ���'?'ƥ���ƥ��ɹ� 
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
//	if(j>=tlen)	//�ִ�ƥ����� 
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
		printf("ƥ��");
	
	return 0;
 } 

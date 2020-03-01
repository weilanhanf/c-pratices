#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;

const int maxn = 1000;


struct bign{ //����һ������ 
	int len;
	int d[maxn];
	bign() //��ʼ�� 
	{
		memset(d, 0, sizeof(d));
		len=0;
	}
};


bign change(char str[])  //���մ����洢 
{
	int len=strlen(str);
	bign c;
	c.len = len;
	reverse(str, str+len);   
	for(int i=0;i<len;i++)
		 c.d[i] = str[i] - '0';  //����d[0...len-1]Ϊstr�д洢���ֵĵ�λ����λ 	
	return c;
}


int compare(bign a, bign b) //a�󷵻�1,aС����-1,a��b��ȷ���0 
{
	if(a.len>b.len)
		return 1;
	else if(a.len<b.len)
		return -1;
	else
	{
		int len = a.len;
		for(int i=len-1;i>=0;i--)
			if(a.d[i]>b.d[i])
				return 1;
			else if(a.d[i]<b.d[i])
				return -1;
		return 0;
	 } 
 } 


bign add(bign a, bign b)
{
	bign c;
	int carry=0, len=0;//���ڼ�¼��λ
	for(int i=0;i<a.len||i<b.len;i++)
	{
		int temp = a.d[i] + b.d[i] + carry;
		c.d[c.len++] = temp%10;
		carry = temp/10; 
	} 
	if(carry!=0)
		c.d[c.len++] = carry;
	return c;
}

bign minu(bign a, bign b)
{
	bign c;
	if(compare(a, b)==-1)//��֤a>b������� 
		swap(a,b);
	
	for(int i=0;i<a.len||i<b.len;i++)
	{
		if(a.d[i]<b.d[i])
		{
			a.d[i+1]--;
			a.d[i] += 10;
		}
		c.d[c.len++]=a.d[i]-b.d[i];
	}
	while(c.len-1>=1&&c.d[c.len-1]==0)
		c.len--;
	return c;
}


void printf_bign(bign c)
{
	for(int i=c.len-1;i>=0;i--)
		printf("%d", c.d[i]);
	printf("\n");
	return ;
}


int main()
{
	bign a, b, c, d;
	char str1[maxn], str2[maxn];
	scanf("%s %s", str1, str2);
	a = change(str1);
	b = change(str2);
	c = add(a, b);
	d = minu(a, b);
	printf_bign(c); //������� 
	printf_bign(d); //�������
	
	 
	return 0;
}

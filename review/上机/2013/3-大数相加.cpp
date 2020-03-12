#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std; 

const int maxn=100;

struct bign
//定义一个大数 
{
	int d[maxn];//如果为321，那么大数数组为d[3]={1, 2, 3},d[len-1]表示最大位 
	int len;
	bign()
	{
		memset(d, 0, sizeof(d));
		len = 0;	
	}	
};


int compare(bign a, bign b)
{
	if(a.len>b.len)
		return 1;
	else if(a.len<b.len)
		return -1;
	else
	{
		int i, len;
	
		len = a.len;
		for(int i=len-1;i>=0;i++) //从右到左作比较 
			if(a.d[i]>b.d[i])
				return 1;
			else if(a.d[i]<b.d[i])
				return -1; 
	}
	return 0; //一直比较结束，表示两数相等。 
}


bign generateBign(char str[])
//根据输入数组，生成大数 
{
	bign c;
	int len;
	
	len = strlen(str);
	c.len = len; 
	
	reverse(str, str+len);
	for(int i=0;i<len;i++)
		c.d[i] = str[i] - '0';
	
	return c;
 } 


bign add(bign a, bign b)
{
	bign c;
	int carry, temp;
	carry = 0;//为进位值 
	temp = 0;
	
	if(compare(a, b)==-1)
	 //保证A>B 
		swap(a, b);
	
	for(int i=0;i<a.len||i<b.len;i++)//逐个位相加 
	{
		temp = a.d[i]+b.d[i]+carry;
		carry = (a.d[i]+b.d[i])/10;
		c.d[c.len++] = temp%10;
	}
	if(carry>0)//最后一位进位 
		c.d[c.len++] = carry;
	return c;
}


bign minus(bign a, bign b)
{
	bign c;
	if(compare(a, b)==-1)
	 //保证A>B 
		swap(a, b);
	else if(compare(a, b)==0)
	// a, b 完全相等则直接返回 
	{
		c.len=0;
		return c;
	}
	
	for(int i=0;i<a.len||i<b.len;i++)//逐个位相减 
	{
		if(a.d[i]<b.d[i])//借位 
		{
			a.d[i+1]--;
			a.d[i] += 10;
		}
		c.d[c.len++] = a.d[i] - b.d[i];
	 } 
	 if(c.len-1>=1&&c.d[c.len-1]==0)//最后一位去0 
	 	c.len --;
	return c;
	
}



void printfBign(bign c)
{
	if(c.len==0)//如果c为0 
		printf("0");
	else
	{
		for(int i=c.len-1;i>=0;i--)
			printf("%d", c.d[i]);
	}
	printf("\n");
 } 


int main()
{
	bign A, B;
	char str1[maxn], str2[maxn];
	scanf("%s %s", str1, str2);
	
	//生成大数A，B 
	A = generateBign(str1);
	B = generateBign(str2); 
	
	bign c, d;
	c=add(A, B);
	printfBign(c);
	d=minus(A, B);
	printfBign(d);
	
	return 0;
 } 

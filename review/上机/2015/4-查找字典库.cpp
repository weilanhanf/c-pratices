#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;


//�����и��ʵ�⣬�ڴ�ĵ��ʺ��� ID ��������ʾ�����ʵ�֣�����һ�����ʣ������ִ�Сд��
//��1������õ��ʺͿ��ڵĵ�����ȫ��ͬ��������õ��ʵ� ID�ţ�
//��2������õ��ʺʹʿ��е�ĳ���ʴ���һ����ĸ������������ʴ������Ƿ������룺�������ȷ�ĵ��ʣ�
//��3��������������������û�иõ��ʣ���

//Ӧ�ÿ��԰���һ�¼����������
//1.��ȫ��ͬ
//2.�е�������һλ����ͬ��teacher��teachar
//3.ȱ��һλ����һλ��teacher��teacherr 


const int maxn=20;

struct word{
	int id;
	char letters[maxn];
}words[maxn]=
{
	{1000, "face"},
	{1001, "words"},
	{1002, "helpful"},
	{1003, "nose"},

};


void change(char str[])
//��֤�����ִ�Сд��ת��ΪСд 
{
	int len, i;
	len = strlen(str);
	for(i=0;i<len;i++)
		if(str[i]>='A'&&str[i]<='Z')
			str[i] += 32;
	printf("���Сд��Ϊ%s,����Ϊ%d\n", str, len);
 } 


int main()
{
	int flag, n1, n2, n; 
	int k, m;
	int diff_len, len; 
	//len��ʾ�����ַ����ȣ�words_lenΪ���ĵ��ʳ��ȣ�diff_lenΪ���볤���뵥�ʳ���֮�� 
	char str[10]; 
	
	gets(str);
	change(str);
	len = strlen(str);
	
	for(int i=0;i<4;i++)
		if(strcmp(str, words[i].letters)==0)//������ȫ��ͬ 
		{
			printf("���ҳɹ������Ϊ%d\n", words[i].id);//��ʾ�Ѿ��ҵ� 
			return 0; 
		}
			
	while(true)
	{
		flag=maxn;
		for(int i=0;i<4;i++)
		{
			diff_len = len - strlen(words[i].letters);
			if(diff_len==0)
			{
				n=0;
				for(int j=0;j<len;j++)
					if(str[j]!=words[i].letters[j])
						n++;
				printf("n=%d diff_len=%d words[i].letters=%s\n", diff_len, words[i].letters);
			}
			else if(diff_len==1||diff_len==-1)
			{
				n=0;
				m=0; k=0;//mָ��str,kָ��letters 
				while(m<len||k<strlen(words[i].letters))
				{
					if(str[m]==words[i].letters[k])
					{ k++; m++; }
					else 
					{
						if(diff_len==1)
							{ m++; n++; }
						else if(diff_len==-1)
							{ k++; n++; }
					}
				}
				printf("n=%d diff_len=%d words[i].letters=%s\n", n,diff_len, words[i].letters);
			}
			else if(abs(diff_len)>=2)//�������������ϲ�ͬ��ֱ������ 
				flag = 2;
			
			if(n<flag)
				flag = n;
				
			printf("n=%d flag=%d words[i].letters=%s\n", n, flag, words[i].letters);		
		}
		printf("��� flag=%d\n", flag);		
		if(flag==1)
			printf("���ʴ������Ƿ������룺");
		else if(flag>1)
		{
			printf("����û�иõ���\n");
			break;
		}
	}

	return 0;
}

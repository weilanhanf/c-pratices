#include<stdio.h>
#include<algorithm>
using namespace std;

void perm(int a[], int n)
{
	do{
		for(int i=0;i<n;i++)
			printf("%d\n", a[i]);
			
		printf("\n");
	}while(next_permutation(a, a+3));
	
}


int main()
{
for(i=0;i<4;i++)
	{
		flag = 0;//��flag��¼���i�����ʱȽ�ʱ��ͬ��ĸ�ĸ��� 
		word_len = strlen(words[i].letters);
		diff_len = len - word_len; 
		printf("len=%d word_len=%d diff_len=%d\n", len, word_len, diff_len);
		
		if(diff_len==0)//���ʳ�����ͬ 
		{
			printf("faceface\n");
			if(strcmp(str, words[i].letters)==0)//������ȫ��ͬ 
			{
				printf("face\n");
				printf("���ҳɹ������Ϊ%d\n", words[i].id);
				break; 
			}
			else
			{
				for(j=0;j<len;j++)//������ͬ 
					if(str[j]!=words[i].letters[j]) 
						flag++;//����ͬ����ĸ��1 
				if(flag<n)
					n = flag;
			}
			
			if(n==1)
				printf("��һλ��ĸ��ͬ����������\n");
			else if(n>1) 
				printf("�������\n"); 
		}
		
		
		
		
	}
		
	return 0;
}

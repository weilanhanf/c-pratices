#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

//����һ�仰��ͳ�Ƶ��ʸ����� 


int main()
{
	char str[1000];
	while(gets(str)!=NULL)
	{
		
		int k1, k2;
		k1=0;
		k2=strlen(str)-1;
		while(str[k1]==' '||str[k2]==' ')//ȥ����β�Ŀո� 
		{
			if(str[k1]==' ')
				k1++;
			if(str[k2]==' ')
				k2--;
		}
		
		int count=0;
		for(int i=k1;i<=k2;i++) 
		{
			if(str[i]==' '||str[i]=='\'') //ͳ�ƿո����д 
				count++;
		}
		count++;//���ʸ���Ϊ�ո������һ
		
		printf("���ʸ���Ϊ%d\n", count);
		
	}
	
	return 0;
} 

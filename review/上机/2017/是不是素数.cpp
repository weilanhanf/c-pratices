#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;

//    ����һ�������������ж����Ƿ�Ϊ����������1�ͱ���û������Լ��������Ϊ������



bool isPrime(int x)//�ж��Ƿ�Ϊ���� 
{
	for(int i=2;i<=sqrt(x);i++)
		if(x%i==0)
			return false;
	return true;
}


int main()
{
	int x;
	scanf("%d", &x);
    if (isPrime(x)) 
		printf("������\n");
    else
		printf("��������\n");
    return 0;
}

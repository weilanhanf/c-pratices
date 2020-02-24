#include<stdio.h>


void swap(int a[], int p, int q) //����p, qλ��Ԫ�� 
{
	int temp = a[p];
	a[p] = a[q];
	a[q] = temp;
	return ; 
}


void printfA(int a[], int n)  //��ӡ���� 
{
	for(int i=0;i<n;i++)
		printf("%d ", a[i]);
	printf("\n");
	return ;
}


void prem(int a[], int p, int q)  //ȫ���� 
{
	if(p==q)  //�ݹ�������� 
		printfA(a, q+1);  //��������ӡ�������� 
	else
	{
		for(int i=p;i<=q;i++)  //��ÿһ��Ԫ����Ϊ��ͷԪ�أ���һ��ȫ���� 
		{
			swap(a, i, p);
			prem(a, p+1, q);
			swap(a, i, p); 
		}
	}
}


int main()
{
	int a[4] = {1,2,3,4};
	prem(a, 0, 3);
	return 0;
 } 

#include<stdio.h>

int main(){
	int i, j, k, n;
	printf("��Ӵ�С������������");
	scanf("%d %d", &i, &j);
	n = i*j;
	k = i%j;
	while(k!=0)
	{
		i = j;
		j = k;
		k = i%j;
	}
	printf("���Լ��Ϊ%d����С������Ϊ%d", j, n/j);
}

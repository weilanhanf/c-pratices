#include<stdio.h>

int main(){
	int i, j, k, n;
	printf("请从大到小输入两个数：");
	scanf("%d %d", &i, &j);
	n = i*j;
	k = i%j;
	while(k!=0)
	{
		i = j;
		j = k;
		k = i%j;
	}
	printf("最大公约数为%d，最小公倍数为%d", j, n/j);
}

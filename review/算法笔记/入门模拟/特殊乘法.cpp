#include<stdio.h>
// http://codeup.cn/problem.php?cid=100000575&pid=2 


int main()
{
	int a[10], b[10];
	int sum, i, j, m, n, p, q;
	while(scanf("%d %d", &m, &n)!=EOF)
	{	
		a[10]={0}; b[10]={0};
		i=0; j=0; sum=0;
		while(m)
		{
			a[i++] = m%10;
			m /= 10;
		}
		while(n)
		{
			b[j++] = n%10;
			n /= 10;
		}
		for(p=i-1;p>=0;p--)
			for(q=j-1;q>=0;q--)
//				printf("a[%d]*b[%d]=%d*%d\n", p, q, a[p], b[q]);
				sum += a[p]*b[q];
				
		printf("%d\n", sum);
	}
	return  0;
 } 

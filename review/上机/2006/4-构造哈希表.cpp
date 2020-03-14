#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;


const int maxn=20;
const int n=13;


typedef struct record{
	char a[maxn];
	int sign;//用于标识该记录是否被使用 
	record(){
		sign = -1;//默认为-1，表示未被使用 
	}
}record;
 
int calHashRes(char a[])
//哈希函数为H(X)=i/2， i为关键字中的第一个字母在字母表总的序号 
{
	int k;
	k = a[0]-'A'+1;
	k /= 2;
	return k;
}


double successTimes(char s[maxn][maxn], record hashTable[])//要加hashTable[]括号 
//查找成功的平均比较次数 
{
	double res, num, sums;
	int i, k; 
	sums = 0;
	for(i=0;i<9;i++)
	//逐个记录计算查找长度，并累加 
	{
		num = 1;
		k = calHashRes(s[i]);
		while(strcmp(hashTable[k].a, s[i])!=0)
		//没有找到，一直用线性探测 
		{
			num++;
			k = (k+1)%n; 
		}
		sums += num;
	} 
	res = sums/9;
	return res;
 } 



double unsuccessTimes(record hashTable[])
//查找失败的平均比较次数 
{
	double res, num, sums;
	int i, j; 
	sums = 0;
	for(i=0;i<n;i++)
	//哈希表逐个单位做查找失败长度统计，0,1,2...12 
	{
		num = 1;
		j = i;
		while(hashTable[j].sign!=-1)
		//知道找到空单元 
		{
			num++;
			j = (j+1)%n;
		 } 
		 sums += num; 
	}
	res = sums/9;
	return res;
} 



int main()
{
	int i, k;
	char s[maxn][maxn] = {
	"Jan","Feb","Apr","May","Jun","Jul","Aug","Sep","Oct"
	};
	record hashTable[n];
	
	for(i=0;i<9;i++)//生成hashTable 
	{
		k = calHashRes(s[i]);
		while(hashTable[k].sign!=-1)
			k = (k+1)%n;//可选用地址空间为0-12，共13个
		if(hashTable[k].sign==-1)//找到可放位置 
		{
			strcpy(hashTable[k].a, s[i]);
			hashTable[k].sign = 1; //并做标注 
		}
	}

	for(i=0;i<13;i++)
	{
		if(hashTable[i].sign!=-1)
			printf("%2d，%s\n", i, hashTable[i].a);
	}
	
	printf("成功的比较次数为%5.2f\n", successTimes(s, hashTable));
	printf("失败的比较次数为%5.2f\n", unsuccessTimes(hashTable));
	
	return 0;
}

#include<stdio.h>
#include<algorithm>
using namespace std;

//PATB1020月饼

struct mooncake{
	double store; //库存 
	double sell; //总售价
	double price; //单价 
}cake[100];


bool cmp(mooncake a, mooncake b)  //按照单价由高到低排序 
{
	return a.price>b.price;
}


int main()
{
	int i, j, n;
	double D, ans=0; // ans为卖出后的收入 
	scanf("%d %lf", &n, &D);  // n为月饼种类，D为需求量 
	for(int i=0;i<n;i++)  //各种月饼库存 
		scanf("%lf", &cake[i].store);
	for(int i=0;i<n;i++) //月饼的总售价 
	{
		scanf("%lf", &cake[i].sell);
		cake[i].price = cake[i].sell / cake[i].store; // 月饼的单价 
	}
	sort(cake, cake+n, cmp);  //根据单价排序 
	for(int i=0;i<n;i++)
	{
		if(cake[i].store<=D) // 第i中月饼全部卖空 
		{
			ans += cake[i].sell;
			D -= cake[i].store;	 
		}	
		else  //第i种月饼没卖完，需要多少卖多少，后结束循环 
		{
			ans += D*cake[i].price;
			break;
		}
	}		
	printf("总收入为：%.2f\n", ans);
	return 0; 
 } 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

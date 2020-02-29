#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;


struct Fraction{
	int up;
	int down;
};


int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}


Fraction reduction(Fraction result)
{
	if(result.up==0) //����Ϊ0����ʽΪ0 
		result.down == 1;
	if(result.down < 0)//����ʽ�������������ӳе� 
	{
		result.up = -result.up;		
		result.down = -result.down;
	}
	if(gcd(result.down, result.up)!=1)//���ӷ�ĸԼ�� 
	{
		int b = gcd(abs(result.down), abs(result.up));//Ҫ�Ӿ���ֵ�������������b�����Ǹ��� 
		result.down /= b;
		result.up /= b;	
	}
	
	return result;
}


Fraction add(Fraction a, Fraction b) 
{
	Fraction result;
	result.up = a.up*b.down + b.up*a.down;
	result.down = a.down*b.down;
	return reduction(result);
}



Fraction minu(Fraction a, Fraction b) 
{
	Fraction result;
	result.up = a.up*b.down - b.up*a.down;
	result.down = a.down*b.down;
	return reduction(result);
}



Fraction multi(Fraction a, Fraction b) 
{
	Fraction result;
	result.up = a.up * b.up;
	result.down = a.down*b.down;
	return reduction(result);
}



Fraction divide(Fraction a, Fraction b) 
{
	Fraction result;
	result.up = a.up * b.down;
	result.down = a.down * b.up;
	return reduction(result);
}


void showResult(Fraction r)
{
	r = reduction(r);
	if(r.down==1|| r.up==0)
		printf("%d\n", r.up);
	else if(r.up > r.down)
		printf("%d %d/%d", r.up/r.down, r.up%r.down, r.down);
	else
		printf("%d/%d\n", r.up, r.down);
 } 


int main()
{
	int x,y;
	Fraction fra_a, fra_b;
	printf("a�ķ��ӷ�ĸΪ��");
	scanf("%d %d", &fra_a.up, &fra_a.down);
	printf("b�ķ��ӷ�ĸΪ��");
	scanf("%d %d", &fra_b.up, &fra_b.down);
	Fraction add_res, minu_res, multi_res, divide_res;
	add_res = add(fra_a, fra_b);
	minu_res = minu(fra_a, fra_b);
	multi_res = multi(fra_a, fra_b);
	divide_res = divide(fra_a, fra_b);
	
	showResult(add_res);
	showResult(minu_res);
	showResult(multi_res);
	showResult(divide_res);
	
//	printf("a,b���Ϊ%d/%d\n", add_res.up, add_res.down);
//	printf("a,b���Ϊ%d/%d\n", minu_res.up, minu_res.down);
//	printf("a,b���Ϊ%d/%d\n", multi_res.up, multi_res.down);
//	printf("a,b���Ϊ%d/%d\n", divide_res.up, divide_res.down);
	return 0;
}

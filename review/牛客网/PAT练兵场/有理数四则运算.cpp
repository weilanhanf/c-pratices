#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>

using namespace std;


typedef struct Fraction{
	int up, down;
	int left;
	Fraction()
	{
		left=0;
	}
}Fraction;


int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd(b, a%b);
}


Fraction reduction(Fraction a)
{
	if(a.down<0)
	{
		a.up *= -1;
		a.down *= -1;
	}
	
	if(a.up==0)
		a.down = 1;
	else
	{
		int d=gcd(a.up, a.down);
		a.up /= abs(d);
		a.down /= abs(d);			
	}
	
	if(abs(a.up)>abs(a.down)&&a.down!=0)
	{
		a.left = a.up/a.down;
		a.up = abs(a.up);
		a.down = abs(a.down);
		if(a.down!=1)
			a.up = a.up%a.down;
	}
	
	return a;
}


Fraction add(Fraction a, Fraction b)
{
	Fraction res;
	res.up = a.up*b.down + b.up*a.down;
	res.down = a.down*b.down;	
	return res;	
}


Fraction minu(Fraction a, Fraction b)
{
	Fraction res;
	res.up = a.up*b.down - b.up*a.down;
	res.down = a.down*b.down;	
	return res;
}


Fraction multi(Fraction a, Fraction b)
{
	Fraction res;
	res.up = a.up*b.up;
	res.down = a.down*b.down;
	return res;
}


Fraction divide(Fraction a, Fraction b)
{
	Fraction res;
	res.up = a.up*b.down;
	res.down = a.down*b.up;
	return res;
}


void printFraction(Fraction c)
{
	c = reduction(c);
	if(c.down==0)
		printf("Inf");
	else if(c.up==0)
		printf("0");
	else if(c.left<0)
	{
		if(c.down==1)
			printf("(%d)", c.left);
		else
			printf("(%d %d/%d)", c.left, c.up, c.down);
	}
	else if(c.left>0)
	{
		if(c.down==1)
			printf("%d", c.left);
		else
			printf("%d %d/%d", c.left, c.up, c.down);
	
	}
	else if(c.left==0)
	{
		if(c.up<0)
		{
			if(c.down==1)
				printf("(%d)", c.up);
			else
				printf("(%d/%d)", c.up, c.down);
		}
		else
		{
			if(c.down==1)
				printf("%d", c.up);
			else
				printf("%d/%d", c.up, c.down);
		}
			
	}
}




int main()
{
	Fraction a, b, c;

	scanf("%d/%d %d/%d", &a.up, &a.down, &b.up, &b.down);
	
	c = add(a, b);
	printFraction(a);
	printf(" + ");
	printFraction(b);
	printf(" = "); 
	printFraction(c);
	printf("\n");
	
	c = minu(a, b);
	printFraction(a);
	printf(" - ");
	printFraction(b);
	printf(" = "); 
	printFraction(c);
	printf("\n");

	c = multi(a, b);
	printFraction(a);
	printf(" * ");
	printFraction(b);
	printf(" = "); 
	printFraction(c);
	printf("\n");

	c = divide(a, b);
	printFraction(a);
	printf(" / ");
	printFraction(b);
	printf(" = "); 
	printFraction(c);
	printf("\n");

	return 0;
	
 } 

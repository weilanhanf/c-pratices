#include<stdio.h>
#include<algorithm>
using namespace std;

int main() 
{
	int a = 3, b = 4;
	printf("befre swap %d %d\n", a, b);
	swap(a, b); 
	printf("after swap %d %d", a, b);
}

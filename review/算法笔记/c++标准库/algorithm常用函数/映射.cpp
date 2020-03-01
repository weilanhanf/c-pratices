#include<stdio.h>
#include<math.h> 
#include<string.h>
#include<algorithm>
#include<stack>
#include<map> 
using namespace std;

int main()
{
	
	map<char, int> mp;
	for(int i=0;i<=25;i++)
		mp['a'+i] = i+1;
		
	for(map<char, int>::iterator it=mp.begin();it!=mp.end();it++)
		printf("%c, %d\n", it->first, it->second);
	
	
	
	map<char, int>::iterator it=mp.find('b');
	printf("%c, %d\n", it->first, it->second);
	mp.erase(it, mp.end());
	
	printf("%d\n", mp.size());
	mp.clear();
	printf("%d", mp.size());
	
	
	return 0;
}

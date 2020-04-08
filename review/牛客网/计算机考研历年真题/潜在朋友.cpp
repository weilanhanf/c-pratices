#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<math.h>

using namespace std;

int book[201], reader[101];

int main()
{

    int N, M;
    int t;
	while(scanf("%d %d", &N, &M)!=EOF)
	{
		fill(book, book+201, 0);
    	fill(reader, reader+101, 0);
    	
	    for(int i=0;i<N;i++)
	    {
		    scanf("%d", &t);
	    	reader[i] = t;
	        book[t]++;
	    }
	    
	    for(int i=0;i<N;i++)
	    {
	    	if(book[reader[i]]==1)
	    		printf("BeiJu\n");
	    	else if(book[reader[i]]>1)
				printf("%d\n", book[reader[i]]-1);
		}
	    
	}
    
    
    return 0;
}

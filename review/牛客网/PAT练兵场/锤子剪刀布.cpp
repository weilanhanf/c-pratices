#include<stdio.h>


typedef struct player{
	int win;
	int lose;
	int even;
	int c[26];
	player()
	{
		win = 0;
		lose = 0;
		even = 0;
	}
	
}player;


int compare(char a, char b)
{
	if(a==b)
		return 0;
	else
	{
		if(a=='C'&&b=='J')
			return 1;
		else if(a=='C'&&b=='B')
			return -1;
		else if(a=='J'&&b=='B')
			return 1;
		else if(a=='J'&&b=='C')
			return -1;
		else if(a=='B'&&b=='C')
			return 1;
		else if(a=='B'&&b=='J')
			return -1;
	}
}


int main()
{
	player A, B;
	int N;
	int res;
	char a, b;
	scanf("%d", &N);
	getchar();
	
	for(int i=0;i<26;i++)
	{
		A.c[i] = 0;
		B.c[i] = 0;
	}
	
	while(N--)
	{
		scanf("%c %c", &a, &b);
		getchar();
		
		res = compare(a, b);
		if(res==1)
		{
			A.win++;
			A.c[a-'A']++;
			B.lose++;
		}
		else if(res==-1)
		{
			B.win++;	
			B.c[b-'A']++;			
			A.lose++;
		}
		else if(res==0)
		{
			A.even++;
			B.even++;		
		}		
		
	}
	
		printf("%d %d %d\n", A.win, A.even, A.lose);
		printf("%d %d %d\n", B.win, B.even, B.lose);
		
		int k=0;
		int m=1, n=1;
		for(int i=0;i<26;i++)
			if(A.c[i]>k)
			{
				m = i;
				k = A.c[i];
			}
		
		k = 0;
		for(int i=0;i<26;i++)
			if(B.c[i]>k)
			{
				n = i;
				k = B.c[i];
			}
		
		
		printf("%c %c\n", m+'A', n+'A');
		
}

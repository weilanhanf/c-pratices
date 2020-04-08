 #include<stdio.h>
#include<string.h>
#include<algorithm>

using namespace std;

const int maxn=18;

int W[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char M[11] = {'1', '0', 'X', '9', '8', '7', '6', '5', '4', '3', '2'};


bool isAllNum(char s[])
{
	for(int i=0;i<17;i++)
		if(s[i]>'9'||s[i]<'0')
			return false;
	return true;
}


int main()
{
	char S[100][maxn+1];
	int N;
	scanf("%d", &N);
	for(int i=0;i<N;i++)
		scanf("%s", S[i]);
	
	bool allpass=true;
	for(int i=0;i<N;i++)
	{
		bool pass=true;
		if(isAllNum(S[i])==false)
		{
			printf("%s\n", S[i]);
			pass = false;
		}
		else
		{
			int t=0, sums=0;
			for(int j=0;j<17;j++)
				sums += (S[i][j]-'0')*W[j];
			
			t = sums%11;
			if(S[i][17]!=M[t])
			{
				printf("%s\n", S[i]);
				pass = false;
			}
		}
		if(pass==false)
			allpass = false;
	}
	
	if(allpass==true)
		printf("All passed");
	
	
	return 0;
} 

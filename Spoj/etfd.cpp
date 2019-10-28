#include<bits/stdc++.h>
using namespace std;
#define N 1000000

typedef long long int Int;

Int etf[N+1] = {0};
Int D[N+1]= {0};
Int ar[N+1][20];


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	//preprocessing
	
	Int i,j;
	for(i=0; i<=N; i++) etf[i] = i;
	
	for(i=2; i<=N; i++)
	{
		if (etf[i] == i)
		{
			for(j=i; j<=N; j+=i)
			{
				etf[j] = etf[j] - etf[j]/i;
			}
		}
	}
	

	D[1] = 0;
	
	for(i = 2; i<=N ; i++)
	{
		D[i] = D[ etf[i]  ] + 1;
	}
	
	// for(i=2; i<10; i++) cout<<D[i]<<'\n';
	
	
	for(j=0; j<20; j++)
	{
		for(i = 1; i<=N; i++)
		{
			ar[i][j] = ar[i-1][j];
			if (  D[i] == j   ) ar[i][j]++; 
		}
	}
	
	// taking i/p
	
	Int t;
	cin>>t;
	while(t--)
	{
		Int m,n,k;
		cin>>m>>n>>k;
		cout<<(  ar[n][k] - ar[m][k] + 1*(  D[m]==k && D[n]==k  ) )<<'\n';
	}
	
	
}

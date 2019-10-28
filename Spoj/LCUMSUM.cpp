#include<bits/stdc++.h>
using namespace std;
#define N 1000000

typedef long long int Int;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

Int etf[N+1];
void ETF()
{
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
}
// to use
// ETF(); then etf[i] gives i's etf

Int precomp[N + 1] = { 0 };
void div_sieve()
{
    Int i,j;
    for(i=1; i<=N; i++)
    {
        for(j=2*i; j<=N; j+=i)
        {
            precomp[j] += (j*j*etf[j/i])/(2*i);
        }
    }
}

int main()
{
    faster();
    
    ETF();
    div_sieve();
    
    Int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<(precomp[n]+n)<<'\n';
    }
    
    
    
    
    return 0;
}

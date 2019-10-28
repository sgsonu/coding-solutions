#include <bits/stdc++.h>
using namespace std;
#define N 1000000

int nopf[ N + 1 ]= {0};
bool is_prime[N+ 1] = { 0 };
int v[11][N + 1] = { 0 };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	int i,j;
	
	is_prime[0] = 1;
	is_prime[1] = 1;
	
	for(i=2; i<=N; i++)
	{
		if ( is_prime[i]==0 )
		{
			for(j=i; j<=N; j+=i)
			{
				is_prime[j] = 1;
				nopf[j]++;
			}
		}
	}
	
	
	for(i=0; i<=N; i++)
	{
		 for( j = 0; j<11; j++ )
		 {
			if ( i ) v[j][i] = v[j][i-1];
			if ( nopf[i]==j ) v[j][i]++;
		 }
	}
	
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,n;
		cin>>a>>b>>n;
		
		int ans = v[n][b] - v[n][a];
		if ( nopf[a]==n   ) ans++;
		cout<<ans<<'\n';
	}
	
	
	
	
}

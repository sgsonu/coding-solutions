#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define N 2000000

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	
	ll int is_prime[ N + 1 ] = { 0 };
	
	ll int spf[N + 1];
	for(ll int i=0; i<=N; i++) spf[i] = i;
	
	vector< pair< ll int, ll int > > v( N + 1 , {0,0} );
	
	
	is_prime[0] = 1;
	is_prime[1] = 1;
	
	
	
	
	for( ll int i = 2; i*i<=N; i++  )
	{
		if ( is_prime[ i ] == 0  )
		{
			for( ll int j = 2*i; j<=N; j+=i )
			{
				 is_prime[j] = 1;
				 spf[j] = i;
			}
		}
	}
	
	
	for( ll int i=1; i<=N; i++ )
	{
		v[i].second = i;
		v[i].first = 0;
		
		ll int temp = i;
		ll int ct = 0;
		
		
		while(  temp != 1 && temp%spf[temp] == 0 )
		{
			ct++;
			temp /= spf[temp];
		}
		
		v[i].first = ct;
		
	}
	
	
	

	
	// for(int i = 0 ; i< 15;i++) cout<<v[i].first<<","<<v[i].second<<" ";
	// cout<<'\n';
	
	sort( v.begin() , v.end() );
	
	// for(int i = 0 ; i< 15;i++) cout<<v[i].first<<","<<v[i].second<<" ";
	// cout<<'\n';
	
	ll int n;
	ll int cas = 0;
	cin>>n;
	while(n!=0)
	{
		// Case 1: 1
		
		cas++;
		cout<<"Case "<<cas<<": "<<v[n].second<<'\n';
		cin>>n;
	}
	
	
	
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;


int etf(long long int n)
{
	if (n==1) return 1;
	long long int i;
	long long int ans=n;
	for(i=2; i*i<=n ; i++  )
	{
		if ( n%i==0  )
		{
			ans = ans - ans/i;
			while(n%i==0) n/=i;
		}
	}
	if (n>1) ans = ans - ans/n;
	return ans;
}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	long long int t; cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		cout<<etf(n)<<'\n';
	}
	
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll int n; cin>>n;
	ll int ar[n];
	for(ll int i=0; i<n;i++) cin>>ar[i];
	
	ll int max = ar[n-1];
	ll int idx = n-1;
	ll int gcd = ar[n-1];
	
	for(ll int i= n-1; i>0; i-- )
	{
		gcd = __gcd( gcd , ar[i-1]);
		if (gcd>=max)
		{
			max = gcd;
			idx = i-1;
		}
	}
	cout<<idx;
	
	
}


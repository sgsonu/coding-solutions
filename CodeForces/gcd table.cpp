#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll int n; cin>>n;
	map <ll int , ll int > m;
	
	ll int ar[n*n];
	ll int au[n];
	for(ll int i=0; i<(n*n); i++)
	{
		cin>>ar[i];
		m[ -ar[i]  ] ++;
	}
	
	auto it = m.begin();
	ll int max;
	for(ll int i=0; i<n; i++)
	{
	    while (it->second == 0 ) it++;
		max = -(it->first);
		m[ -max ]--;
		au[i] = max;
		cout<<max<<" ";
		
		for(ll int j=0; j<i; j++)
		{
			m[ -(__gcd( au[i],au[j] ))  ] -= 2;  
		}
	}
	
	
	
	
	
	
	
}

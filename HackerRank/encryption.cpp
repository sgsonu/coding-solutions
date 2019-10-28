#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string temp;
	string s;
	
	while( getline(cin, temp, ' ') )
	{
		s = s + temp;
	}
	
	ll int l = s.size();
	ll int m = ceil( sqrt(l) );
	
	ll int i,j;
	
	for(i=0; i<m; i++)
	{
		for(j=i; j<l; j+=m ) cout<<s[j];
		cout<<" ";
	}
	
	
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll int n,k;
	cin>>n>>k;
	
	
	map < string, ll int > m;
	queue < string > q;
	
	ll int ct=0;
	
	ll int i,j;
	
	string temp;
	
	for( i =0; i <n; i++ )
	{
		cin>>temp;
		
		// is it on the screen.
		if ( m[temp] != 0  ) continue;
		
		// if queue full , then deletion
		if ( ct == k )
		{
			string last = q.front();
			q.pop();
			ct--;
			m[last] = 0;
		}
		
		//insertion
		q.push( temp );
		ct++;
		m[temp] = 1;
	}
	
	cout<<ct<<'\n';
	
	stack < string > s;
	for( ll int k = 0; k<ct; k++  )
	{
		s.push( q.front()  );
		q.pop();
	}

	for( ll int k = 0; k<ct; k++  )
	{
		cout<<s.top()<<" ";
		s.pop();
	}	


	return 0;
}

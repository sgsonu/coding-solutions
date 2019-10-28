#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int ar[n];
		
		for(int i=0; i<n; i++) cin>>ar[i];
		
		int br[n+1];
		
		br[0] = ar[0];
		cout<<br[0]<<" ";
		
		for( int i = 1; i<n; i++ )
		{
			br[i] = (ar[i]*ar[i-1])/__gcd(ar[i],ar[i-1]);
			cout<<br[i]<<" ";
		}
		
		br[n] = ar[n-1];
		cout<<br[n]<<'\n';
		
		
	}
	
	
	
	
	return 0;
}

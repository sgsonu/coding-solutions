#include<bits/stdc++.h>
using namespace std;

typedef long long int Int;
//comment1
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	Int t; cin>>t;
	while(t--)
	{
		Int n,k;
		cin>>n>>k;
		
		Int ar[n];
		
		Int i,j;
		
		for(i=0; i<n; i++) cin>>ar[i];
		
		Int rounds = k/n;
		Int left = k - rounds*n;
		
		Int cast = rounds%3;
		if ( cast ==0 ) cast = 3;
		
		// cout<<cast<<'\n';
		
		Int a,b,at,bt,o;
		
		if ( rounds!=0 ) {
		for(int i=0; i<n/2; i++)
		{
			a = ar[i];
			b = ar[n-1-i];
			o = a^b;
			switch(cast)
			{
				case 1: at=o ; bt=a ; break;
				case 2: at=b ; bt=o ; break;
				case 3: at=a ; bt=b ; break;
			}
			
			ar[i] = at;
			ar[n-1-i] = bt;
		} }
		
		
		if (n%2== 1 &&  k > n/2 ) ar[n/2] = 0;
		
		//left
		// cout<<"left: "<<left<<'\n';
		for(i=0; i<left; i++)
		{
			a = ar[i];
			b = ar[n-1-i];
			at = a^b;
			ar[i] = at;
		}
		
		for(i=0; i<n; i++) cout<<ar[i]<<" ";
		cout<<'\n';
		
		
	}


	
	return 0;
}


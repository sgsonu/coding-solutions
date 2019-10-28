#include<bits/stdc++.h>
using namespace std;

typedef long long int Int;

Int k,n,track;


int is_possible( char * a, Int mid, Int * fa, Int * fb)
{
	// cout<<(n-(mid-1))<<'\n';
	for( Int i = 0; i < (n-(mid-1)); i++ )
	{
		Int ca = fa[ i + (mid-1) ] - fa[i] + 1*( a[ i + (mid-1) ]=='a' && a[i]=='a' );
		Int cb = fb[ i + (mid-1) ] - fb[i] + 1*( a[ i + (mid-1) ]=='b' && a[i]=='b' );
		if (ca == mid || (ca + k) >= mid ) {track = mid; return 1; }
		if (cb == mid || (cb + k) >= mid ) {track = mid; return 1; }
	}
	return 0;
}



int binary_search( Int l, Int h, Int mid, char * a, Int * fa, Int * fb   )
{
	if ( l > h) return mid;
	mid = (l+h)/2;
	// cout<<( is_possible( a, mid, fa, fb ) )<<" "<<mid<<'\n';
	if ( is_possible( a, mid, fa, fb ) ) l = mid +1;
	else h = mid -1;
	return binary_search( l, h, mid, a, fa, fb  );
}


int main()
{
	cin>>n>>k;
	char a[n];
	
	Int fb[n],fa[n];
	
	for( Int i=0; i<n; i++)
	{
		cin>>a[i];
		if ( i==0 ) { fa[i] = 0; fb[i] = 0; }
		else {fa[i] = fa[i-1];
		fb[i] = fb[i-1]; }
		if ( a[i] == 'a' ) fa[i]++;
		else fb[i]++;
	}
	
	Int l = 1;
	Int h = n;
	Int mid = (l+h)/2;
	binary_search( l, h, mid, a, fa, fb);
	cout<<track;
	return 0;
}


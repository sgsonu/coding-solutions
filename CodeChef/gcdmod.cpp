#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define M 1000000007
//comment
ll int modmul( ll int a , ll int n, ll int m );


ll int modexpo( ll int a, ll int n, ll int m )
{
	a = a%m;
	ll int res = 1;
	while(n>0)
	{
		if( n%2==1 )	res = modmul(res,a,m);
		a = modmul(a,a,m);
		//if( n%2==1 )	res = (res*a)%m;
	//	a = (a*a)%m;
		n = n/2;
	}
	return res;
}


ll int modmul( ll int a , ll int n, ll int m )
{
	ll int res = 0;
	while(n>0)
	{
		if ( n%2==1 ) res = (res + a)%m;
		a = (a + a)%m;
		n = n/2;
	}
	return res;
}



ll int gcd( ll int a , ll int b )
{

	if (  a==0 || b==0 )
	{
		return ( a+ b)%M;
	}
	else return gcd( b , a%b )%M;
	
}



int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	ll int a,b,n,t;
	ll int m;
	ll int A;
	cin>>t;
	
	while(t--)
	{
		cin>>a>>b>>n;
		m = abs(a-b);
		if (m==0) (m = M );
		A = (modexpo( a, n, m ) + modexpo( b, n, m ))%m;
		m = abs(a-b);  
		cout<<gcd(A,m)<<'\n';
		
	}
	
}

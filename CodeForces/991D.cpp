#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define ff first
#define ss second
#define rsi resize
 
#define er(x) cerr<<#x<<": "<<x<<" "<<endl;
#define er2(x, y) cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl;
#define er3(x, y, z) cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define er4(a, b, c, d) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<endl;
#define eras(a) {cerr<<#a<<" "; for(auto x : a) cerr<<x.ff<<" "<<x.ss<<" | "; cerr<<endl;}
#define erar(a) {cerr<<#a<<" "; for(auto x : a) cerr<<x<<" "; cerr<<endl;}
 
#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define mii map< int,int >
#define db double
 
#define rep(i,a,b) for(i=a; i<b; i++)
#define repr(i,a,b) for(i=a; i>b; i--)
#define put(a,b) cout<<a<<b;
#define sz(a) (int)a.size()
#define all(v) v.begin(),v.end()
 
struct node { int t,a,b; };
struct cmp { bool operator() ( int a,int b ) const
{return a>b;}};
 
#define inf 100000000000000
#define M 1000000007
#define N 10000001
 
int n,m,k;
 
void solve()
{
    int i,j,x,y,z;
    
    string s,t;
    cin>>s;
    cin>>t;
    n = sz(s);
    
    z = 0;
    
    rep(i,0,n-1)
    {
        //i,i+1
        x = 0;
        
        if ( s[i] == '0' ) x++;
        if ( s[i+1] == '0' ) x++;
        if ( t[i] == '0' ) x++;
        if ( t[i+1] == '0' ) x++;
        
        if ( x < 3) continue;
        z++;
        
        s[i] = 'X';
        s[i+1] = 'X';
        t[i] = 'X';
        if (x != 4) t[i+1] = 'X'; 
        
    }
    put(z,'\n')
}
 
int32_t main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    
    // cin>>t;
    
    while(t--) solve();
 
}

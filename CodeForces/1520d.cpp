#include <bits/stdc++.h>
using namespace std;
 
#define pb push_back
#define ff first
#define ss second
#define rsi resize
 
#define er(x) cerr<<#x<<": "<<x<<" "<<endl;
#define er2(x, y) cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<endl;
#define er3(x, y, z) cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<endl;
#define erar(a) {cerr<<#a<<" "; for(auto x : a) cerr<<x<<" "; cerr<<endl;}
 
#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define mii map< int,int >
 
#define rep(i,a,b) for(i=a; i<b; i++)
#define repr(i,a,b) for(i=a; i>b; i--)
#define put(a,b) cout<<a<<b;
#define sz(a) (int)a.size()
#define all(v) v.begin(),v.end()
 
// struct node { int t,a,b; };
struct cmp { bool operator() ( int a,int b ) const
{return a>b;}};
int casect = 1;
 
#define inf LLONG_MAX
#define M 1000000007
#define N 500000
 
int n,m,k;
 
 
 
void solve()
{
    int i,j,x,y,z,p,q;
 
    cin>>n;
    vi a(n);
    rep(i,0,n) cin>>a[i];
    rep(i,0,n) a[i] -= i;
    
    mii v;
    int ans = 0;
    rep(i,0,n)
    {
        ans += v[a[i]];
        v[a[i]]++;
    }
    put(ans,'\n')
}
 
int32_t main()
{
 
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t = 1;
    
    cin>>t;
    // preprocess();
    while(t--)
    {
        // cout<<"Case #"<<casect<<": "; casect++;
    solve();}
 
}

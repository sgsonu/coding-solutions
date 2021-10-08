#include<bits/stdc++.h>
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
 
struct node { int h, s, e; };
int casect = 1;
 
#define inf LLONG_MAX
#define M 1000000007
#define N 500000
 
int n,m,k;
vector<vi> adj;
 
void solve(){
    int i,j,x,y,z,d;
    cin>>n>>d;
    vi a(n);
    rep(i,0,n) cin>>a[i];
    
    adj.clear();
    adj.resize(n);
    
    rep(i,0,n)
    {
        adj[(i+n-d)%n].pb(i);
    }
    
    vi level(n,0);
    vector<bool> vis(n,false);
    queue<int> q;
    
    rep(i,0,n)
    {
        if ( a[i] == 0 )
        {
            level[i] = 0;
            vis[i] = true;
            q.push(i);
        }
    }
    
    while( sz(q)>0)
    {
        int u = q.front(); q.pop();
        for(auto v : adj[u])
        {
            if ( vis[v] ) continue;
            level[v] = level[u] + 1;
            vis[v] = true;
            q.push(v);
        }
    }
    
    int maxi = 0;
    
    rep(i,0,n)
    {
        if ( a[i] == 1 && level[i] == 0 )
        {
            cout<<-1<<'\n';
            return;
        }
        else maxi = max(maxi, level[i]);
    }
    
    cout<<maxi<<'\n';
    return;
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
    solve();
    }
 
}

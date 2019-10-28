#include<bits/stdc++.h>
using namespace std;

typedef long long int Int;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

vector < pair<Int, Int >> v;


bool criterion( pair< Int, Int > p1, pair < Int ,Int > p2 )
{
    return ! (  (p1.first > p2.first) || (  (p1.first==p2.first) && (p1.second<p2.second)  )  );
}

int main()
{
    faster();
    
    Int t;
    
    cin>>t;
    while(t--)
    {
        Int n;
        cin>>n;
        Int x,y;
        for(Int i = 0; i<n; i++ )
        {
            cin>>x>>y;
            v.push_back({x,y});
        }
        
        sort( v.begin(), v.end(), criterion  );
        
        for(Int i =0; i<n; i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<'\n';
        }
        v.clear();
    }
    
    
    
    return 0;
}

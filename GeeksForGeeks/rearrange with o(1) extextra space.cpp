#include<bits/stdc++.h>
using namespace std;
typedef long long int Int;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    Int t; cin>>t;
    while(t--)
    {
        Int n; cin>>n;
        
        Int ar[n];
        Int i;
        for(i=0; i<n; i++) cin>>ar[i];
        for(i=0; i<n; i++) ar[i] = (ar[ar[i]]%n)*n + ar[i];
        for(i=0; i<n; i++) cout<<ar[i]/n<<" ";
        cout<<'\n';
    }
    
    
    
    
    
    
    return 0;
}

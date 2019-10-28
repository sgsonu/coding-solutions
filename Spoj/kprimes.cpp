#include<bits/stdc++.h>
using namespace std;
#define N 10000

typedef long long int Int;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

bool is_prime[N+1];
vector < Int > sieve(  )
{
    Int i,j;
    
    vector < Int > prime;
    for(i=0; i<=N; i++) is_prime[i] = true;
    is_prime[0] = false;
    is_prime[1] = false;
    
    for(i=2 ;i*i<=N; i++)
    {
        if (is_prime[i] == true)
        {
            for(j= i*i; j<=N; j+=i )  is_prime[j] = false;   
        }
    }
    
    for(i=0; i<=N; i++)
    {
        if (is_prime[i] == true) prime.push_back(i);
    }
    return prime;
}

int main()
{
    faster();
    
    sieve();
    
    Int t,c; cin>>t;
    for(c = 1; c<=t; c++)
    {
        Int n,k;
        Int i,j;
        
        cin>>n>>k;
        int a[k];
        for(i=0; i<k; i++) cin>>a[i];
        
        Int sum = 0;
        
        for(i=4; i<=n; i++ )
        {
            if ( is_prime[i] == false  )
            {
                for(j=0; j<k; j++)
                {
                    if ( i%a[j] == 0  ) break;
                }
                if (j==k) sum += 1;
            }
        }
        cout<<"Case "<<c<<": "<<sum<<'\n';
    }
    
    
    
    
    return 0;
}

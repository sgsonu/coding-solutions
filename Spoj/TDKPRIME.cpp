#include<bits/stdc++.h>
using namespace std;
#define N 100000000

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
    
    vector < Int > v = sieve();
    
    Int t ;cin>>t;
    while(t--)
    {
        Int n; cin>>n;
        cout<<v[n-1]<<'\n';
    }
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
#define N 1000000

typedef long long int Int;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}


Int spf[N+1];
void spf_sieve(  )
{
    Int i,j;
    
    for(i=0; i<=N; i++) spf[i] = i;
    
    for(i=2 ;i*i<=N; i++)
    {
        if (spf[i] == i)
        {
            for(j= i*i; j<=N; j+=i )  
            {
                if ( spf[j] == j)
                 spf[j] = i;
            }
        }
    }
}


vector < pair< Int, Int > > factors;
void prime_factors(Int n)
{
    Int count;
    Int temp = spf[n];
    while( temp != 1  )
    {
        count = 0;
        while( temp == spf[n]  )
        {
            count++;
            n /= spf[n];
        }
        factors.push_back({ temp , count  });
        temp = spf[n];
    }
}


vector < Int > divisors;
void find_divisors(Int n = 1, Int i = 0)
{
    Int j, x, k;
    for( j=i; j<factors.size(); j++)
    {
        x = factors[j].first * n;
        for( k=0; k<factors[j].second; k++)
        {
            divisors.push_back(x);
            find_divisors( x, j+1 );
            x *= factors[j].first;
        }
    }
}

void Find_Divisors(Int n)
{
    prime_factors(n);
    find_divisors();
    divisors.push_back(1);
}


int main()
{
    faster();
    
    spf_sieve();

    Int a[N];
    a[0] = 0;
    a[1] = 0;
    
    Int i,j;
    Int sum = 0;
    
    
    for( i=2; i<N; i++)
    {
        sum = 1;
        prime_factors(i);
        find_divisors();
        for( j = 0; j<divisors.size(); j++  )
        {
            sum+= divisors[j];
        }
        sum -= i;
        a[i] = a[i-1] + sum;
        factors.clear();
        divisors.clear();
    }
    
    
    Int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<a[n]<<'\n';
    }
    
    return 0;
}

//spoj printing some primes tdprimes


#include<iostream>
using namespace std;
#define N 100000000

bool ar[ N + 1 ];

int main()
{
    long long int i,j;
    
    ar[0] = 1;
    ar[1] = 1;
    
    long long int ct = 0;
    
    for( i = 2; i<=N;i++)
    {
        if ( ar[i] == 0 )
        {
            ct++;
            if ( ct % 100 ==1 ) cout<<i<<'\n';
            
            for( j= i*i; j<=N ; j+=i )
            {
                ar[j] = 1;
            }
        }
    }
    
}



#include <bits/stdc++.h>
using namespace std;
// comment 
#define pii pair<long long int, long long int>
#define MAX 46656
#define LMT 216
#define LEN 4830
#define RNG 100032

unsigned base[MAX / 64], segment[RNG / 64], primes[LEN];

#define sq(x) ((x)*(x))
#define mset(x,v) memset(x,v,sizeof(x))
#define chkC(x,n) (x[n>>6]&(1<<((n>>1)&31)))
#define setC(x,n) (x[n>>6]|=(1<<((n>>1)&31)))

void sieve()
{
    unsigned i, j, k;
    for (i = 3; i<LMT; i += 2)
        if (!chkC(base, i))
            for (j = i*i, k = i << 1; j<MAX; j += k)
                setC(base, j);
    primes[0] = 2;
    for (i = 3, j = 1; i<MAX; i += 2)
        if (!chkC(base, i))
            primes[j++] = i;
}


vector <pii> factors;
void primeFactors(long long int num)
{
    long long int expo = 0;   
    for (long long int i = 0; primes[i] <= sqrt(num); i++)
    {
        expo = 0;
        long long int prime = primes[i];
        while (num % prime == 0){
            expo++;
            num = num / prime;
        }
        if (expo>0)
            factors.push_back(make_pair(prime, expo));
    }

    if ( num >= 2)
        factors.push_back(make_pair(num, 1));

}

vector <long long int> divisors;
void setDivisors(long long int n, long long int i) {
    long long int j, x, k;
    for (j = i; j<factors.size(); j++) {
        x = factors[j].first * n;
        for (k = 0; k<factors[j].second; k++) {
            divisors.push_back(x);
            setDivisors(x, j + 1);
            x *= factors[j].first;
        }
    }
}

int main() {
	
	


    sieve();
    
    long long int t; cin>>t;
    while(t--) {
    
    long long int n, x; 
    cin >> n;
    
    map < long long int, long long int > m;
    long long int best = -1;
    
    for (long long int i = 0; i < n; i++)
    {
        cin >> x;
        
        long long int star = m[x];
        if ( best == -1) best = star;
        else
        {
        	if (   star > best   ) best = star;
        }
        
        primeFactors(x);
        setDivisors(1, 0);
        divisors.push_back(1);
        for (long long int j = 0; j < divisors.size(); j++) {
            m[ divisors[j]  ]++;
        }
        divisors.clear();
        factors.clear();
    }
    
    cout<<best<<'\n';
    
    }
}


















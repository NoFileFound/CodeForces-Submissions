#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<bool> primes;
void init_sieve()
{
    #define MAXN 1000100
    primes.assign(MAXN, true);
    primes[0] = primes[1] = false;
    for(int i = 2; i * i < MAXN; i++)
    {
        if(primes[i])
        {
            for(int j = i * i; j < MAXN; j += i)
                primes[j] = false;
        }
    }
}

int main()
{
    long long T, n;
    cin >> T;
    init_sieve();
    while(T--)
    {
        cin >> n;
        long long sq = sqrtl(n);
        cout << (sq * sq == n && primes[sq] ? "YES" : "NO") << endl;
    }

    return 0;
}
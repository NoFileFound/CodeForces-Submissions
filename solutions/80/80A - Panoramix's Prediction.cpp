#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m, primes[10000];

bool is_prime(int n)
{
    if(n == 1)
        return false;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }

    return true;
}

void precomput(int n)
{
    for(int i = 2, j = 0; i <= n; i++)
    {
        if(is_prime(i))
            primes[j++] = i;
    }
}

int main()
{
    cin >> n >> m;
    precomput(n + m);
    for(int i = 0; i <= n + m; i++)
    {
        if(primes[i] == n && primes[i + 1] == m)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
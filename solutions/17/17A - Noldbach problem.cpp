#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

bool prime[1005];
vector<int> primes;

int main()
{
    int n, k, ans = 0;
    cin >> n >> k;
    prime[0] = prime[1] = true;
    for(int i = 2; i <= n; i++)
    {
        if(!prime[i])
        {
            primes.push_back(i);
            for(int j = i * i; j <= n; j += i) prime[j] = true;
        }
    }

    for(int i = 0; i < primes.size() - 1; i++)
    {
        int x = primes[i] + primes[i + 1] + 1;
        if(x <= n && !prime[x])
            ans++;
    }

    cout << (ans >= k ? "YES" : "NO") << endl;
    return 0;
}
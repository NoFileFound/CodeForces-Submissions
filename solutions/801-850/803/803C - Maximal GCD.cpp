#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

int main()
{
    ll n, k;
    cin >> n >> k;
    if(k > 0 && k > (2 * n) / (k + 1))
    {
        cout << -1 << endl;
        return 0;
    }

    ll sum = k * (k + 1) / 2;
    ll r1 = n / sum, r2 = 0;
    for(ll i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            if(i <= r1) r2 = max(r2, i);
            if(n / i <= r1) r2 = max(r2, n / i);
        }
    }

    if(r2 == 0)
    {
        cout << -1 << endl;
        return 0;
    }

    for(ll i = 1; i < k; i++)
        cout << r2 * i << ' ';

    cout << r2 * (k + ((n / r2) - sum)) << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

int main()
{
    ll n, k;
    cin >> n >> k;

    ll evenCount = n / 2;
    ll oddCount = (n + 1) / 2;

    cout << (k > oddCount ? (2 * (k - oddCount)) : 2 * k - 1) << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, cur = 1, ans = 0;
    cin >> n >> m;
    while(m--)
    {
        ll x;
        cin >> x;
        if(x >= cur) ans += x - cur;
        else ans += (n - cur) + x;
        cur = x;
    }

    cout << ans << endl;
    return 0;
}
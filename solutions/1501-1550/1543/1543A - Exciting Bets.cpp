#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ll T, a, b;
    cin >> T;
    while(T--)
    {
        cin >> a >> b;
        if(a == b) cout << 0 << ' ' << 0 << endl;
        else
        {
            ll d = llabs(a - b);
            ll r = a % d;
            ll inc = (d - r) % d;
            cout << d << ' ' << min(inc, (min(a, b) >= r ? r : LLONG_MAX)) << endl;
        }
    }

    return 0;
}
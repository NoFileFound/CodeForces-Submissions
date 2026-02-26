#include <bits/stdc++.h>
#define endl '\n'
#define INFLONG 1000000000000000000
typedef long long ll;

ll n, k, a[200069];

int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    ll l = a[n / 2], r = INFLONG, ans = l;
    while(l <= r)
    {
        ll m = (l + r) / 2, r1 = 0;
        for(ll i = n / 2; i < n; i++)
        {
            r1 += max(0LL, m - a[i]);
            if(r1 > k) break;
        }

        if(r1 <= k)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    cout << ans << endl;
    return 0;
}
#include<bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;

ll n, m;
vector<pair<ll, ll>> v;

ll cmp(const pair<ll, ll>& p, const pair<ll, ll>& p2)
{
    return p.second > p2.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end(), cmp);

    ll ans = 0;
    for(ll i = 0; i < (ll)v.size() && n > 0; i++)
    {
        ll take = min(v[i].first, n);
        ans += take * v[i].second;
        n -= take;
    }

    cout << ans << endl;
    return 0;
}
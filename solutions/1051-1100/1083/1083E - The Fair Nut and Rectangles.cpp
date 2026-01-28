#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

struct info
{
    ll x, y, cost;
};

bool cmp(info a, info b)
{
    return a.x < b.x;
}

struct line
{
    ll k, m;
    line() {};
    line(ll _k, ll _m)
    {
        k = _k;
        m = _m;
    }
};

info a[1000005];
ll n;
vector<line> v;

double intersect(line l1, line l2)
{
    return (l2.m - l1.m) * 1.0 / (l1.k - l2.k);
}

void add_line(line x)
{
    line cur = x, last, prev;
    while(v.size() >= 2)
    {
        last = v[v.size() - 1];
        prev = v[v.size() - 2];
        if(intersect(cur, last) <= intersect(prev, last)) v.pop_back();
        else break;
    }

    v.push_back(cur);
}

ll binsearch(ll x)
{
    int l = 0, r = v.size() - 2;
    while(l <= r)
    {
        int m = (l + r) / 2;
        if(intersect(v[m], v[m + 1]) >= x) r = m - 1;
        else l = m + 1;
    }

    return v[l].k * x + v[l].m;
}

int main()
{
    ios::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);
	
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i].x >> a[i].y >> a[i].cost;

    sort(a + 1, a + n + 1, cmp);
    ll ans = 0;
    add_line(line(0L, 0L));
    for(int i = 1; i <= n; i++)
    {
        ll curr = a[i].x * a[i].y - a[i].cost + binsearch(-a[i].y);
        add_line(line(a[i].x, curr));
        ans = max(ans, curr);
    }

    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 102000
using namespace std;

struct info
{
    int gcd;
    int cnt;

    info() {};
    info(int _g, int _c)
    {
        gcd = _g;
        cnt = _c;
    }
};

info t[MAXN * 4];
int a[MAXN], n, q;

void make_tree(int v, int l, int r)
{
    if(l == r)
    {
        t[v] = info(a[l], 1);
        return;
    }

    int m = (l + r) / 2;
    make_tree(v * 2, l, m);
    make_tree(v * 2 + 1, m + 1, r);
    int curr_gcd = __gcd(t[v * 2].gcd, t[v * 2 + 1].gcd), curr_cnt = 0;
    if(t[v * 2].gcd == curr_gcd) curr_cnt += t[v * 2].cnt;
    if(t[v * 2 + 1].gcd == curr_gcd) curr_cnt += t[v * 2 + 1].cnt;
    t[v] = info(curr_gcd, curr_cnt);
}

int RMQ_gcd(int v, int l, int r, int ql, int qr)
{
    if(qr < l || ql > r) return 0;
    if(ql <= l && r <= qr) return t[v].gcd;
    int m = (l + r) / 2;
    int L = RMQ_gcd(v * 2, l, m, ql, qr);
    int R = RMQ_gcd(v * 2 + 1, m + 1, r, ql, qr);
    return __gcd(L, R);
}

int RMQ(int v, int l, int r, int ql, int qr, int target)
{
    if(qr < l || ql > r) return 0;
    if(ql <= l && r <= qr) return t[v].gcd == target ? t[v].cnt : 0;
    int m = (l + r) / 2;
    int L = RMQ(v * 2, l, m, ql, qr, target);
    int R = RMQ(v * 2 + 1, m + 1, r, ql, qr, target);
    return L + R;
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    make_tree(1, 1, n);
    cin >> q;
    while(q--)
    {
        int l, r;
        cin >> l >> r;
        int v = r - l + 1;
        cout << v - RMQ(1, 1, n, l, r, RMQ_gcd(1, 1, n, l, r)) << endl;
    }

    return 0;
}
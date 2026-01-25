#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 500000
using namespace std;

long long a[MAXN], t[MAXN * 4], lazy[MAXN * 4], n, m;

void make_tree(int v, int l, int r)
{
    lazy[v] = 0;
    if (l == r)
    {
        t[v] = a[l];
        return;
    }
    int m = (l + r) / 2;
    make_tree(v * 2, l, m);
    make_tree(v * 2 + 1, m + 1, r);
    t[v] = min(t[v * 2], t[v * 2 + 1]);
}

void push_lazy(int v, int l, int r)
{
    if (lazy[v] != 0)
    {
        t[v] += lazy[v];
        if (l != r)
        {
            lazy[v * 2] += lazy[v];
            lazy[v * 2 + 1] += lazy[v];
        }
        lazy[v] = 0;
    }
}

long long RMQ(int v, int l, int r, int ql, int qr)
{
    push_lazy(v, l, r);
    if (qr < l || ql > r) return LLONG_MAX;
    if (ql <= l && r <= qr) return t[v];
    int mid = (l + r) / 2;
    return min(RMQ(v * 2, l, mid, ql, qr), RMQ(v * 2 + 1, mid + 1, r, ql, qr));
}

void update(int v, int l, int r, int ql, int qr, long long u) 
{
    push_lazy(v, l, r);
    if (qr < l || ql > r) return;
    if (ql <= l && r <= qr)
    {
        lazy[v] += u;
        push_lazy(v, l, r);
        return;
    }
    int mid = (l + r) / 2;
    update(v * 2, l, mid, ql, qr, u);
    update(v * 2 + 1, mid + 1, r, ql, qr, u);
    t[v] = min(t[v * 2], t[v * 2 + 1]);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    make_tree(1, 0, n - 1);

    cin >> m;
    string line;
    while (getline(cin, line))
    {
        if(line.empty()) continue;

        stringstream ss(line);
        vector<long long> v;
        long long x;
        while(ss >> x) v.push_back(x);

        if (v.size() == 2)
        {
            if (v[0] <= v[1])
                cout << RMQ(1, 0, n - 1, v[0], v[1]) << endl;
            else
                cout << min(RMQ(1, 0, n - 1, v[0], n - 1), RMQ(1, 0, n - 1, 0, v[1])) << endl;
        }
        else
        {
            if (v[0] <= v[1])
                update(1, 0, n - 1, v[0], v[1], v[2]);
            else
            {
                update(1, 0, n - 1, v[0], n - 1, v[2]);
                update(1, 0, n - 1, 0, v[1], v[2]);
            }
        }
    }

    return 0;
}

/*
4
1 2 3 4
4
3 0
3 0 -1
0 1
2 1
*/
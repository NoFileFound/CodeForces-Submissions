#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 131075 // 2 << 17
using namespace std;

int t[MAXN * 4], a[MAXN], n, m;

void make_tree(int v, int l, int r, bool op)
{
    if(l == r)
    {
        t[v] = a[r];
        return;
    }

    int m = (l + r) / 2;
    make_tree(v * 2, l, m, !op);
    make_tree(v * 2 + 1, m + 1, r, !op);
    if(!op)
        t[v] = t[v * 2] | t[v * 2 + 1];
    else
        t[v] = t[v * 2] ^ t[v * 2 + 1];
}

void update(int v, int l, int r, int idx, int delta, bool op)
{
    if(l == r)
    {
        t[v] = delta;
        return;
    }

    int m = (l + r) / 2;
    if(idx <= m) update(v * 2, l, m, idx, delta, !op);
    else update(v * 2 + 1, m + 1, r, idx, delta, !op);
    if(!op)
        t[v] = t[v * 2] | t[v * 2 + 1];
    else
        t[v] = t[v * 2] ^ t[v * 2 + 1];
}

int main()
{
    cin >> n >> m;
    bool op = (n % 2 == 0);
    n = 1 << n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    make_tree(1, 1, n, op);
    while(m--)
    {
        int idx, x;
        cin >> idx >> x;
        update(1, 1, n, idx, x, op);
        cout << t[1] << endl;
    }

    return 0;
}
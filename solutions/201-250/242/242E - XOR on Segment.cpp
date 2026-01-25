#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 500500
#define BITMAX 25
using namespace std;

int lazy[MAXN * 4], t[MAXN * 4][BITMAX], a[MAXN], n, m;

void make_tree(int v, int l, int r)
{
    lazy[v] = 0;
    if(l == r)
    {
        for(int b = 0; b < BITMAX; b++)
            t[v][b] = (a[l] >> b) & 1;
        return;
    }
    int m = (l + r) / 2;
    make_tree(v * 2, l, m);
    make_tree(v * 2 + 1, m + 1, r);
    for(int b = 0; b < BITMAX; b++)
        t[v][b] = t[v * 2][b] + t[v * 2 + 1][b];
}

void push_lazy(int v, int l, int r)
{
    if(lazy[v] != 0)
    {
        for(int b = 0; b < BITMAX; b++)
            if ((lazy[v] >> b) & 1)
                t[v][b] = (r - l + 1) - t[v][b];

        if(l != r)
        {
            lazy[v * 2] ^= lazy[v];
            lazy[v * 2 + 1] ^= lazy[v];
        }

        lazy[v] = 0;
    }
}

void update(int v, int l, int r, int ql, int qr, int mask)
{
    push_lazy(v, l, r);
    if(qr < l || ql > r) return;
    if(ql <= l && r <= qr)
    {
        lazy[v] ^= mask;
        push_lazy(v, l, r);
        return;
    }

    int m = (l + r) / 2;
    update(v * 2, l, m, ql, qr, mask);
    update(v * 2 + 1, m + 1, r, ql, qr, mask);
    for(int b = 0; b < BITMAX; b++)
        t[v][b] = t[v * 2][b] + t[v * 2 + 1][b];
}

long long RMQ(int v, int l, int r, int ql, int qr)
{
    push_lazy(v, l, r);
    if(qr < l || ql > r) return 0;
    if(ql <= l && r <= qr)
    {
        long long sum = 0;
        for (int b = 0; b < BITMAX; b++)
            sum += (long long)t[v][b] * (1 << b);
        return sum;
    }
    int m = (l + r) / 2;
    return RMQ(v * 2, l, m, ql, qr) + RMQ(v * 2 + 1, m + 1, r, ql, qr);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    make_tree(1, 1, n);

    cin >> m;
    while (m--)
    {
        int type, l, r, x;
        cin >> type >> l >> r;
        if (type == 2)
        {
            cin >> x;
            if (l <= r)
                update(1, 1, n, l, r, x);
            else
            {
                update(1, 1, n, l, n, x);
                update(1, 1, n, 1, r, x);
            }
        }
        else
        {
            cout << (l <= r ? RMQ(1, 1, n, l, r) : RMQ(1, 1, n, l, n) + RMQ(1, 1, n, 1, r)) << endl;
        }
    }

    return 0;
}

/*
5
4 10 3 13 7
8
1 2 4
2 1 3 3
1 2 4
1 3 3
2 2 5 5
1 1 5
2 1 2 10
1 2 3

6
4 7 4 0 7 3
5
2 2 3 8
1 1 5
2 3 5 1
2 4 5 6
1 2 3
*/
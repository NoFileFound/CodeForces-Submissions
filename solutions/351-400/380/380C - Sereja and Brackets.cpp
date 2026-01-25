#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

struct info
{
    int open, closed, match;
    info() {};
    info(int _open, int _closed, int _match)
    {
        open = _open;
        closed = _closed;
        match = _match;
    }
};

int m;
info t[4 * 1000000];
string s;

void make_tree(int v, int l, int r)
{
    if(l == r)
    {
        if(s[l] == '(') t[v] = info(1, 0, 0);
        else t[v] = info(0, 1, 0);
        return;
    }

    int m = (l + r) / 2, x;
    make_tree(v * 2, l, m);
    make_tree(v * 2 + 1, m + 1, r);
    x = min(t[v * 2].open, t[v * 2 + 1].closed);
    t[v] = info(t[v * 2].open + t[v * 2 + 1].open - x, t[v * 2].closed + t[v * 2 + 1].closed - x, t[v * 2].match + t[v * 2 + 1].match + x);
}

info query(int v, int l, int r, int ql, int qr)
{
    if(ql > r || qr < l) return info(0, 0, 0);
    if(ql <= l && r <= qr) return t[v];
    int m = (l + r) / 2, x;
    info leftp = query(v * 2, l, m, ql, qr), rightp = query(v * 2 + 1, m + 1, r, ql, qr);
    x = min(leftp.open, rightp.closed);
    return info(leftp.open + rightp.open - x, leftp.closed + rightp.closed - x, leftp.match + rightp.match + x);
}

int main()
{
    cin >> s;
    make_tree(1, 0, s.size() - 1);
    cin >> m;
    while(m--)
    {
        int l, r;
        cin >> l >> r;
        cout << query(1, 0, s.size() - 1, l - 1, r - 1).match * 2 << endl;
    }

    return 0;
}

/*
())(())(())(
7
1 1
2 3
1 2
1 12
8 12
5 11
2 10
*/
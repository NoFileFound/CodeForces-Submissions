#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int p[120], sz[120], a[120], b[120], n;

void precomput(int n)
{
    for(int i = 0; i < n; i++)
    {
        p[i] = i;
        sz[i] = 1;
    }
}

int find_root(int x)
{
    return (x == p[x] ? x : p[x] = find_root(p[x]));
}

void addedge(int x, int y)
{
    x = find_root(x);
    y = find_root(y);
    if(x != y)
    {
        if(sz[x] < sz[y]) swap(x, y);
        p[y] = x;
        sz[x] += sz[y];
    }
}

int main()
{
    cin >> n;
    precomput(n);
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= n; i++)
        cin >> b[i];

    for(int i = 1; i <= n; i++)
    {
        if(i - b[i] >= 1) addedge(i, i - b[i]);
        if(i + b[i] <= n) addedge(i, i + b[i]);
    }

    for(int i = 1; i <= n; i++)
    {
        if(find_root(i) != find_root(a[i]))
        {
            cout << "NO" << endl;
            return 0;
        }
    }

    cout << "YES" << endl;
    return 0;
}
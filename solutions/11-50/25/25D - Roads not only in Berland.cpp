#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int p[1200], sz[1200], n;
vector<pair<int, int>> v;
vector<int> comps;

void precomput(int n)
{
    for(int i = 1; i <= n; i++)
    {
        p[i] = i;
        sz[i] = 1;
    }
}

int find_root(int x)
{
    return (x == p[x] ? x : p[x] = find_root(p[x]));
}

bool addedge(int x, int y)
{
    x = find_root(x);
    y = find_root(y);
    if(x == y) return false;
    if(sz[x] < sz[y]) swap(x, y);
    p[y] = x;
    sz[x] += sz[y];
    return true;
}

int main()
{
    cin >> n;
    precomput(n);
    for(int i = 1; i <= n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        if(!addedge(x, y))
        {
            v.push_back({x, y});
        }
    }

    for(int i = 1; i <= n; i++)
    {
        if(find_root(i) == i) comps.push_back(i);
    }

    cout << comps.size() - 1 << endl;
    for(int i = 0; i < comps.size() - 1; i++)
        cout << v[i].first << ' ' << v[i].second << ' ' << comps[i] << ' ' << comps[i + 1] << endl;

    return 0;
}
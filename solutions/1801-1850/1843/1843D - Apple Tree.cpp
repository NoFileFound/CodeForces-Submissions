#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 200069
using namespace std;

vector<int> v[MAXN];
long long sz[MAXN], n, q;

void read()
{
    cin >> n;
    for(int i = 1; i <= n; i++) v[i].clear();
    memset(sz, 0, sizeof sz);
    for(int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
}

void DFS(int s, int par)
{
    sz[s] = 0;
    bool child = 1;
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i];
        if(nb != par)
        {
            DFS(nb, s);
            sz[s] += sz[nb];
            child = false;
        }
    }

    if(child) sz[s] = 1;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        read();
        DFS(1, -1);
        cin >> q;
        while(q--)
        {
            int x, y;
            cin >> x >> y;
            cout << 1LL * sz[x] * sz[y] << endl;
        }
    }

    return 0;
}
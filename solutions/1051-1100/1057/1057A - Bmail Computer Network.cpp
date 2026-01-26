#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 200005
using namespace std;

int n, p[MAXN];
vector<int> v[MAXN];

void read32()
{
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i].push_back(x);
        v[x].push_back(i);
    }
}

void DFS(int s, int par)
{
    p[s] = par;
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i];
        if(nb != par)
        {
            DFS(nb, s);
        }
    }
}

int main()
{
    read32();
    DFS(1, -1);
    vector<int> path;

    int k = p[n];
    path.push_back(n);
    while(k != -1)
    {
        path.push_back(k);
        k = p[k];
    }

    sort(path.begin(), path.end());
    for(int i = 0; i < path.size(); i++)
        cout << path[i] << ' ';

    return 0;
}
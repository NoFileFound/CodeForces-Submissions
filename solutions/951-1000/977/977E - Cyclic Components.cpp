#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

vector<int> v[200069];
int n, m, ver;
bool used[200069], cycle;

void read32()
{
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
}

void DFS(int s)
{
    used[s] = true;
    ver++;
    int n = v[s].size();
    if(n != 2) cycle = false;
    for(int i = 0; i < n; i++)
    {
        int nb = v[s][i];
        if(!used[nb]) DFS(nb);
    }
}

int main()
{
    int ans = 0;
    read32();
    for(int i = 1; i <= n; i++)
    {
        if(!used[i])
        {
            ver = 0;
            cycle = true;
            DFS(i);
            if(cycle && ver >= 3) ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
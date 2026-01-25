#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 200005
using namespace std;

int n, color[MAXN], ans = 0;
vector<int> v[MAXN];

void read32()
{
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x].push_back(i);
    }

    for(int i = 1; i <= n; i++)
        cin >> color[i];
}

void DFS(int s, int par)
{
    if(color[s] != par) ans++;
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i];
        DFS(nb, color[s]);
    }
}

int main()
{
    read32();
    DFS(1, -1);
    cout << ans << endl;
    return 0;
}

/*
7
1 1 2 3 1 4
3 3 1 1 1 2 3
*/
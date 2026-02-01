#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 200069
using namespace std;

int n, a[MAXN];
vector<pair<int, int>> v[MAXN];

void read()
{
    cin >> n;
    memset(a, 0, sizeof a);
    a[1] = 1;
    for(int i = 1; i <= n; i++) v[i].clear();
    for(int i = 2; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back({y, i});
        v[y].push_back({x, i});
    }
}

void DFS(int s, int par, int prev = -1)
{
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i].first;
        int idx = v[s][i].second;
        if(nb != par)
        {
            if(idx > prev) a[nb] = a[s];
            else a[nb] = a[s] + 1;
            DFS(nb, s, idx);
        }
    }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        read();
        DFS(1, -1);
        cout << *max_element(a + 1, a + n + 1) << endl;
    }

    return 0;
}

/*
2
6
4 5
1 3
1 2
3 4
1 6
7
5 6
2 4
2 7
1 3
1 2
4 5
*/
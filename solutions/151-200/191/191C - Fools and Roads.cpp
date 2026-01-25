#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 200069
using namespace std;

struct info
{
    int u, idx;
    info(int _u, int _idx)
    {
        u = _u;
        idx = _idx;
    }
};

int p[MAXN], sz[MAXN], level[MAXN], heavy[MAXN], head[MAXN], pos[MAXN], pref[MAXN], child[MAXN], n, m, timer = 0;
vector<info> v[MAXN];

int DFS(int s, int par)
{
    p[s] = par;
    sz[s] = 1;
    int mxsz = 0;
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i].u;
        int idx = v[s][i].idx;
        if(nb != par)
        {
            level[nb] = level[s] + 1;
            child[idx] = nb;
            int cur = DFS(nb, s);
            sz[s] += cur;
            if(mxsz < cur)
            {
                mxsz = cur;
                heavy[s] = nb;
            }
        }
    }

    return sz[s];
}

void decompose(int s, int h)
{
    head[s] = h;
    pos[s] = ++timer;
    if(heavy[s] != -1) decompose(heavy[s], h);
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i].u;
        if(nb != p[s] && nb != heavy[s]) decompose(nb, nb);
    }
}

void addedge(int i, int j)
{
    while(head[i] != head[j])
    {
        if(level[head[i]] < level[head[j]])
            swap(i, j);

        pref[pos[head[i]]]++;
        pref[pos[i] + 1]--;
        i = p[head[i]];
    }

    if(level[i] > level[j]) swap(i, j);
    pref[pos[i] + 1]++;
    pref[pos[j] + 1]--;
}

int main()
{
    memset(heavy, -1, sizeof heavy);
    cin >> n;
    for(int i = 1; i <= n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back({y, i});
        v[y].push_back({x, i});
    }

    level[1] = 0;
    DFS(1, -1);
    decompose(1, 1);
    cin >> m;
    while(m--)
    {
        int x, y;
        cin >> x >> y;
        addedge(x, y);
    }

    for(int i = 1; i <= n; i++)
        pref[i] += pref[i - 1];

    for(int i = 1; i <= n - 1; i++)
        cout << pref[pos[child[i]]] << ' ';
	
	return 0;
}

/*
5
1 2
1 3
2 4
2 5
2
1 4
3 5
*/
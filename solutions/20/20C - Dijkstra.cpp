#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 105000
#define INF 1000000000000000000
using namespace std;

typedef long long ll;

struct edge
{
    ll to, cap, prev;
    ll dist, u; // for dijkstra
    edge() {};
    edge(ll _to, ll _cap, ll _prev)
    {
        to = _to;
        cap = _cap;
        prev = _prev;
        dist = 0;
        u = -1;
    }

    edge(ll _u, ll _dist)
    {
        u = _u;
        dist = _dist;
    }

    bool operator < (const edge& e) const
    {
        return dist > e.dist;
    }
};

edge E[MAXN * 2];
ll sz = 0, head[MAXN], n, m, parent[MAXN], dist[MAXN];

void insert_edge(ll from, ll to, ll cap)
{
    E[sz] = edge(to, cap, head[from]);
    head[from] = sz++;
}

void read()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        head[i] = -1;
        dist[i] = INF;
        parent[i] = -1;
    }

    for(int i = 1; i <= m; i++)
    {
        ll x, y, cap;
        cin >> x >> y >> cap;
        insert_edge(x, y, cap);
        insert_edge(y, x, cap);
    }
}

void dijkstra(ll s)
{
    priority_queue<edge> pq;
    dist[s] = 0;
    pq.push(edge(s, 0));
    while(!pq.empty())
    {
        edge cur = pq.top();
        pq.pop();
        ll u = cur.u, d = cur.dist;
        if(d != dist[u]) continue;
        for(int i = head[u]; i != -1; i = E[i].prev)
        {
            ll v = E[i].to, w = E[i].cap;
            if(dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                parent[v] = u;
                pq.push(edge(v, dist[v]));
            }
        }
    }
}

void solve(ll s)
{
    if(dist[s] == INF)
    {
        cout << -1 << endl;
        return ;
    }

    vector<int> path;
    while(s != -1)
    {
        path.push_back(s);
        s = parent[s];
    }

    reverse(path.begin(), path.end());
    for(int i = 0; i < path.size(); i++)
        cout << path[i] << ' ';

    cout << endl;
}

int main()
{
    read();
    dijkstra(1);
    solve(n);
    return 0;
}
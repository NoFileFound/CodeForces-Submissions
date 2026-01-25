#include <bits/stdc++.h>
#define endl '\n'
#define INF 100000000000000000
using namespace std;

struct Fenwick
{
    vector<long long> tree;

    Fenwick(long long n)
    {
        tree.assign(n + 1, INF);
    }

    void update(int i, long long v, long long n)
    {
        for(; i <= n; i += i & -i)
            tree[i] = min(tree[i], v);
    }

    long long RMQ(long long i)
    {
        long long r = INF;
        for(; i > 0; i -= i & -i)
            r = min(r, tree[i]);

        return r;
    }
};

struct info
{
    int l, r, idx;
};

bool cmp(info a, info b)
{
    return a.l > b.l;
}

int n, m, a[500005];

int main()
{
    vector<info> queries;
    vector<long long> ans;
    unordered_map<long long, int> last;
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    ans.resize(m);
    Fenwick tree(n);
    for(int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        queries.push_back({x, y, i});
    }

    sort(queries.begin(), queries.end(), cmp);
    int p = n;
    for(int i = 0; i < queries.size(); i++)
    {
        info cur = queries[i];
        while(p >= cur.l)
        {
            if(last.count(a[p]))
            {
                int j = last[a[p]];
                tree.update(j, j - p, n);
            }

            last[a[p]] = p;
            p--;
        }

        ans[cur.idx] = tree.RMQ(cur.r);
    }

    for(int i = 0; i < m; i++)
        cout << (ans[i] >= INF ? -1 : ans[i]) << endl;

    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, k, a[100069], stmax[100069][31], stmin[100069][31];

void make_sparse()
{
    for(int i = 1; i <= n; i++)
        stmax[i][0] = stmin[i][0] = a[i];

    for(int j = 1; (1 << j) <= n; j++)
    {
        for(int i = 1; i + (1 << j) - 1 <= n; i++)
        {
            stmin[i][j] = min(stmin[i][j - 1], stmin[i + (1 << (j - 1))][j - 1]);
            stmax[i][j] = max(stmax[i][j - 1], stmax[i + (1 << (j - 1))][j - 1]);
        }
    }
}

int RMQ(int l, int r)
{
    int j = 31 - __builtin_clz(r - l + 1);
    return min(stmin[l][j], stmin[r - (1 << j) + 1][j]);
}

int RMQ2(int l, int r)
{
    int j = 31 - __builtin_clz(r - l + 1);
    return max(stmax[l][j], stmax[r - (1 << j) + 1][j]);
}

int main()
{
    int mx = 0;
    vector<pair<int, int>> ans;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    make_sparse();
    for(int l = 1, r = 1; l <= n; l++)
    {
        while(r <= n && RMQ2(l, r) - RMQ(l, r) <= k) r++;
        int cur = r - l;
        if(mx <= cur)
        {
            if(cur != mx) ans.clear();
            mx = cur;
            ans.push_back({l, r - 1});
        }
    }

    cout << mx << ' ' << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i].first << ' ' << ans[i].second << endl;

    return 0;
}
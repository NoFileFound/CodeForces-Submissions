#include <bits/stdc++.h>
#define endl '\n'
#define INF 1000000000
using namespace std;
typedef long long ll;

ll n1, n2, n3, n4, a[150069], b[150069], c[150069], d[150069], m1, m2, m3, dp1[150069], dp2[150069], dp3[150069], dp4[150069];
vector<int> v1[150069], v2[150069], v3[150069];

void read()
{
    cin >> n1 >> n2 >> n3 >> n4;
    for(int i = 1; i <= n1; i++)
        cin >> a[i];

    for(int i = 1; i <= n2; i++)
        cin >> b[i];

    for(int i = 1; i <= n3; i++)
        cin >> c[i];

    for(int i = 1; i <= n4; i++)
        cin >> d[i];

    cin >> m1;
    for(int i = 1; i <= m1; i++)
    {
        int x, y;
        cin >> x >> y;
        v1[x].push_back(y);
    }

    cin >> m2;
    for(int i = 1; i <= m2; i++)
    {
        int x, y;
        cin >> x >> y;
        v2[x].push_back(y);
    }

    cin >> m3;
    for(int i = 1; i <= m3; i++)
    {
        int x, y;
        cin >> x >> y;
        v3[x].push_back(y);
    }
}

void solve_step_dp(int n, int m, ll cost[], ll dp[], ll dp_next[], vector<int> v[])
{
    multiset<ll> ms;
    for(int i = 1; i <= m; i++)
        ms.insert(dp_next[i]);

    for(int i = 1; i <= n; i++)
    {
        vector<ll> rem;
        for(int j = 0; j < v[i].size(); j++)
        {
            int nb = v[i][j];
            auto it = ms.find(dp_next[nb]);
            if(it != ms.end())
            {
                rem.push_back(dp_next[nb]);
                ms.erase(it);
            }
        }

        dp[i] = (ms.empty() ? INF : cost[i] + *ms.begin());
        for(int i = 0; i < rem.size(); i++)
            ms.insert(rem[i]);
    }
}

int main()
{
    read();
    for(int i = 1; i <= n4; i++)
        dp4[i] = d[i];

    solve_step_dp(n3, n4, c, dp3, dp4, v3);
    solve_step_dp(n2, n3, b, dp2, dp3, v2);
    solve_step_dp(n1, n2, a, dp1, dp2, v1);
    ll ans = INF;
    for(int i = 1; i <= n1; i++)
        ans = min(ans, dp1[i]);

    cout << (ans >= INF ? -1 : ans) << endl;
    return 0;
}

/*
4 3 2 1
1 2 3 4
5 6 7
8 9
10
2
1 2
1 1
2
3 1
3 2
1
1 1
*/

/*
1 1 1 1
1
1
1
1
1
1 1
0
0
*/
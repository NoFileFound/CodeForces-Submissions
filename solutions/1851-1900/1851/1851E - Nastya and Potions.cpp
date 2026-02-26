#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

ll n, k, cost[200069], p[200069], m, used[200069], dp[200069];
vector<int> v[200069];

ll DFS(int s)
{
    if(used[s]) return dp[s];
    used[s] = 1;
    if(p[s]) return dp[s] = 0;
    if(v[s].empty()) return dp[s] = cost[s];
    ll price = 0;
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i];
        price += DFS(nb);
    }

    dp[s] = min(cost[s], price);
    return dp[s];
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
        {
            dp[i] = 0;
            used[i] = false;
            p[i] = 0;
            v[i].clear();
        }

        for(int i = 1; i <= n; i++)
            cin >> cost[i];

        for(int i = 1; i <= k; i++)
        {
            int x;
            cin >> x;
            p[x] = 1;
        }

        for(int i = 1; i <= n; i++)
        {
            cin >> m;
            while(m--)
            {
                int x;
                cin >> x;
                v[i].push_back(x);
            }
        }

        for(int i = 1; i <= n; i++)
            if(!used[i])
                DFS(i);

        for(int i = 1; i <= n; i++)
            cout << dp[i] << ' ';

        cout << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 100069
using namespace std;

vector<int> v[MAXN];
long long n, cnt[MAXN];

void read()
{
    cin >> n;
    for(int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
}

void DFS(int s, int par, int color = 0)
{
    cnt[color]++;
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i];
        if(nb != par)
        {
            DFS(nb, s, !color);
        }
    }
}

int main()
{
    read();
    DFS(1, -1);
    cout << cnt[0] * cnt[1] - (n - 1) << endl;
    return 0;
}
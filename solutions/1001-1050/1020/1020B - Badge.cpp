#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, used[2000];
vector<int> v[2000];

void DFS(int s, int p)
{
    used[s] = 1;
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i];
        if(used[nb]) {cout << nb << ' '; return;}
        DFS(nb, s);
    }
}

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i].push_back(x);
    }

    for(int i = 1; i <= n; i++)
    {
        memset(used, 0, sizeof used);
        DFS(i, -1);
    }

    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 5000
using namespace std;

int n;
vector<int> v[MAXN], root;

void read()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if(x == -1) root.push_back(i);
        else v[x].push_back(i);
    }
}

int DFS(int s)
{
    int d = 1;
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i];
        d = max(d, 1 + DFS(nb));
    }

    return d;
}

int main()
{
    read();
    int ans = 0;
    for(int i = 0; i < root.size(); i++)
    {
        ans = max(ans, DFS(root[i]));
    }

    cout << ans << endl;
    return 0;
}
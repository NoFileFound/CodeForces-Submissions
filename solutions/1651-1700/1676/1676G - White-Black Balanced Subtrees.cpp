#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 4069
using namespace std;

int n, ans = 0;
vector<int> v[MAXN];
string s;

void read()
{
    cin >> n;
    ans = 0;
    for(int i = 1; i <= n; i++) v[i].clear();
    for(int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x].push_back(i);
    }

    cin >> s;
}

pair<int, int> DFS(int u)
{
    int cntW = 0, cntB = 0;
    if(s[u - 1] == 'W') cntW++;
    else cntB++;

    for(int i = 0; i < v[u].size(); i++)
    {
        int nb = v[u][i];
        auto info = DFS(nb);
        cntW += info.first;
        cntB += info.second;
    }

    if(cntW == cntB)
        ans++;

    return {cntW, cntB};
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        read();
        DFS(1);
        cout << ans << endl;
    }

    return 0;
}
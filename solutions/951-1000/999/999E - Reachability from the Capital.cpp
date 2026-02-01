#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m, s, used1[6000], used2[6000], cnt = 0;
vector<int> v[6000];

void read32()
{
    cin >> n >> m >> s;
    for(int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
    }
}

void DFS(int s)
{
    used1[s] = 1;
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i];
        if(!used1[nb]) DFS(nb);
    }
}

void DFS2(int s)
{
    used2[s] = 1;
    cnt++;
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i];
        if(!used2[nb]) DFS2(nb);
    }
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if(a.first != b.first)
        return a.first > b.first;

    return a.second < b.second;
}

int main()
{
    read32();
    DFS(s);
    vector<pair<int, int>> v;
    for(int i = 1; i <= n; i++)
    {
        cnt = 0;
        memset(used2, 0, sizeof used2);
        DFS2(i);
        v.push_back({cnt, i});
    }

    sort(v.begin(), v.end(), cmp);
    int ans = 0;
    for(int i = 0; i < v.size(); i++)
    {
        int nb = v[i].second;
        if(!used1[nb])
        {
            ans++;
            DFS(nb);
        }
    }

    cout << ans << endl;
    return 0;
}

/*
9 9 1
1 2
1 3
2 3
1 5
5 6
6 1
1 8
9 8
7 1
*/

/*
5 4 5
1 2
2 3
3 4
4 1
*/
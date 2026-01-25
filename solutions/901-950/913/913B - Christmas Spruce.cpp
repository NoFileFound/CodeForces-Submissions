#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 1069
using namespace std;

int n;
vector<int> v[MAXN];
bool flag = false;

void read()
{
    cin >> n;
    flag = false;
    for(int i = 1; i <= n; i++) v[i].clear();
    for(int i = 2; i <= n; i++)
    {
        int x;
        cin >> x;
        v[x].push_back(i);
    }
}

void DFS(int s)
{
    int childs = 0;
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i];
        if(v[nb].empty())
            childs++;

        DFS(nb);
    }

    if(!v[s].empty() && childs < 3) flag = true;
}

int main()
{
    read();
    DFS(1);
    cout << (flag ? "No" : "Yes") << endl;
    return 0;
}
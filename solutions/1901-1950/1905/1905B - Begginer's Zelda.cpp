#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 100069
using namespace std;

int n, leaf = 0;
vector<int> v[MAXN];

void read()
{
    cin >> n;
    leaf = 0;
    for(int i = 1; i <= n; i++) v[i].clear();
    for(int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
}

void DFS(int s, int par)
{
    int childs = 0;
    for(int i = 0; i < v[s].size(); i++)
    {
        int nb = v[s][i];
        if(nb != par)
        {
            childs++;
            DFS(nb, s);
        }
    }

    if((par != -1 && childs == 0) || (par == -1 && v[s].size() == 1)) leaf++;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        read();
        DFS(1, -1);
        cout << (leaf + 1) / 2 << endl;
    }

    return 0;
}

/*
4
4
1 2
1 3
3 4
9
3 1
3 5
3 2
5 6
6 7
7 8
7 9
6 4
7
1 2
1 3
2 4
4 5
3 6
2 7
6
1 2
1 3
1 4
4 5
2 6
*/
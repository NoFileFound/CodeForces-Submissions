#include <bits/stdc++.h>
#define endl '\n'
#define INF 1000000000
using namespace std;

int main()
{
    int n, minX = INF, maxY = 0;
    vector<pair<int, int>> vp;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
        minX = min(minX, x);
        maxY = max(maxY, y);
    }

    bool flag = false;
    for(int i = 0; i < n; i++)
    {
        if(vp[i].first == minX && vp[i].second == maxY)
        {
            flag = true;
            cout << i + 1 << endl;
            break;
        }
    }

    if(!flag)
        cout << -1 << endl;

    return 0;
}

/*
3
1 1
2 2
3 3

6
1 5
2 3
1 10
7 10
7 7
10 10
*/
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int x, y, a, b;
    vector<pair<int, int>> vp;
    cin >> x >> y >> a >> b;
    for(int i = a; i <= x; i++)
    {
        for(int j = b; j <= y; j++)
        {
            if(i > j)
                vp.push_back({i, j});
        }
    }

    cout << vp.size() << endl;
    for(int i = 0; i < vp.size(); i++)
        cout << vp[i].first << ' ' << vp[i].second << endl;

    return 0;
}
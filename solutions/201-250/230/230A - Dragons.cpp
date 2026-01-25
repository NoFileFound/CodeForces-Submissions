#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int s, n;
    vector<pair<int, int >> vp;
    cin >> s >> n;
    for(int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }

    sort(vp.begin(), vp.end());
    for(int i = 0; i < n; i++)
    {
        if(s <= vp[i].first)
        {
            cout << "NO" << endl;
            return 0;
        }

        s += vp[i].second;
    }

    cout << "YES" << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    for(int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        vp.push_back({a, b});
    }

    sort(vp.begin(), vp.end());
    int mx = vp[0].second, cnt = 0;
    for(int i = 1; i < n; i++)
    {
        if(vp[i].second < mx) cnt++;
        mx = max(mx, vp[i].second);
    }

    cout << cnt << endl;
    return 0;
}
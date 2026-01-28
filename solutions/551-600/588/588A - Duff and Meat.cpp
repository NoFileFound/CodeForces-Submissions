#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a, p, ans = 0, mn = INT_MAX;
    cin >> n;
    while(n--)
    {
        cin >> a >> p;
        mn = min(mn, p);
        ans += a * mn;
    }

    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a, b;
    cin >> a >> b >> n;
    double ans = LLONG_MAX;
    while(n--)
    {
        int x, y, v;
        cin >> x >> y >> v;
        double dx = 1LL * x - a;
        double dy = 1LL * y - b;
        double dist = sqrt(dx * dx + dy * dy);
        ans = min(ans, dist / v);
    }

    cout << fixed << setprecision(20) << ans << endl;
    return 0;
}
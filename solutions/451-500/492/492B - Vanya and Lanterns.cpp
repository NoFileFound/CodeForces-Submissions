#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, l, a[1069];
    cin >> n >> l;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    double ans = 1.0 * max(a[0], l - a[n - 1]);
    for(int i = 1; i < n; i++)
        ans = max(ans, (a[i] - a[i - 1]) / 2.0);

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}
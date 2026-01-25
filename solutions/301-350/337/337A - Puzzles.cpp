#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, m, a[55], ans = INT_MAX;
    cin >> n >> m;
    for(int i = 1; i <= m; i++)
        cin >> a[i];

    sort(a + 1, a + m + 1);
    for(int i = 1; i <= m - n + 1; i++)
        ans = min(ans, a[i + n - 1] - a[i]);

    cout << ans << endl;
    return 0;
}
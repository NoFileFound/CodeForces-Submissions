#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k, x, a[100], p[200];
    cin >> n >> k >> x;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    p[0] = a[0];
    for(int i = 1; i < n; i++)
        p[i] = p[i - 1] + a[i];

    int cnt = min(k, n - (lower_bound(a, a + n, x + 1) - a));
    cout << (cnt == n ? cnt * x : p[n - cnt - 1] + cnt * x) << endl;
    return 0;
}
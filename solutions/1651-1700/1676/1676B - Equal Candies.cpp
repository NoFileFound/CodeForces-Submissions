#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[60];

void solve()
{
    int minel = *min_element(a, a + n), ans = 0;
    for(int i = 0; i < n; i++) ans += (a[i] - minel);
    cout << ans << endl;
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 0; i < n; i++) cin >> a[i];
        solve();
    }
    return 0;
}
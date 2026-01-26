#include <bits/stdc++.h>
#define endl '\n'
#define MAXN 200100
using namespace std;
typedef long long ll;

ll n, a[MAXN];

void solve()
{
    sort(a, a + n);
    for(int i = 0; i < n - 2; i++)
        if(a[i] == a[i + 1] && a[i + 1] == a[i + 2]) {cout << a[i] << endl; return;}

    cout << -1 << endl;
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
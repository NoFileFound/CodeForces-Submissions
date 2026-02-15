#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, t, a[30000];
    cin >> n >> t;
    for(int i = 1; i <= n - 1; i++)
        cin >> a[i];

    int cur = 1;
    while(cur < t) cur += a[cur];
    cout << (cur == t ? "YES" : "NO") << endl;
    return 0;
}
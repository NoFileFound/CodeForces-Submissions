#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[200], s = 0, ans = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    for(int i = 0; i < n; i++)
    {
        if((s - a[i]) % 2 == 0) ans++;
    }

    cout << ans << endl;
    return 0;
}
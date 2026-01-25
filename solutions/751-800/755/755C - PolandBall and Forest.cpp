#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[10069], ans = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= n; i++)
    {
        if(a[a[i]] == i && i <= a[i]) ans++;
    }

    cout << ans << endl;
    return 0;
}
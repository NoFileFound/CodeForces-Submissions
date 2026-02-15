#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[33], b[33], cnt[103];
    memset(cnt, 0, sizeof cnt);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        cnt[b[i]]++;
    }

    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += cnt[a[i]];
        if(a[i] == b[i]) ans--;
    }

    cout << ans << endl;
    return 0;
}
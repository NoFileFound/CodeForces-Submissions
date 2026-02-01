#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, a[1069], cnt[1069], r1 = 0, r2 = 0;
    memset(cnt, 0, sizeof cnt);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(!cnt[a[i]]) r2++;
        cnt[a[i]]++;
        r1 = max(r1, cnt[a[i]]);
    }

    cout << r1 << ' ' << r2 << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, a[100005];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1, t1 = 0, t2 = 0, ans = 0, ans2 = 0;
    while(l <= r)
    {
        if(t1 <= t2)
        {
            t1 += a[l++];
            ans++;
        }
        else
        {
            t2 += a[r--];
            ans2++;
        }
    }

    cout << ans << ' ' << ans2 << endl;
    return 0;
}
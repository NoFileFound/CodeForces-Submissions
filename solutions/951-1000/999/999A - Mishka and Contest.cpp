#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, k, a[200], ans = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = n - 1;
    while(l <= r)
    {
        if(a[l] > k && a[r] > k) break;
        ans++;
        if(a[l] <= k) l++;
        else r--;
    }

    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k, a[200], ans = 0;
    cin >> n >> k;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            if(i >= k && a[i] != a[i - 1]) break;
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
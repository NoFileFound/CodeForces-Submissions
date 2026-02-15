#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
typedef long long ll;

ll n, a[100069], cnt[100069], dp[100069]; /// dp[i] - maximum points up to i

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    ll m = *max_element(a, a + n);
    dp[1] = cnt[1];
    for(int i = 2; i <= m; i++)
        dp[i] = max(dp[i - 1], dp[i - 2] + cnt[i] * i);

    cout << dp[m] << endl;
    return 0;
}
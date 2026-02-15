#include <bits/stdc++.h>
#define INF 1000000000
#define endl '\n'
using namespace std;

int main()
{
    int n, a, b, c, dp[4069]; /// dp[i] - maximum number of ribbon to make length exactly i
    cin >> n >> a >> b >> c;
    dp[0] = 0;
    for(int i = 1; i <= n; i++)
        dp[i] = -INF;

    for(int i = 1; i <= n; i++)
    {
        if(i >= a) dp[i] = max(dp[i], dp[i - a] + 1);
        if(i >= b) dp[i] = max(dp[i], dp[i - b] + 1);
        if(i >= c) dp[i] = max(dp[i], dp[i - c] + 1);
    }

    cout << dp[n] << endl;
    return 0;
}
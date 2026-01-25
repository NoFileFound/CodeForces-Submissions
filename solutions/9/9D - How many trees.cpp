#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    long long n, h, dp[40][40]; /// dp[i][j] - the number of different binary trees has i nodes and have height <= j.
    cin >> n >> h;
    memset(dp, 0, sizeof dp);
    for(int i = 0; i <= n; i++)
        dp[0][i] = 1;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            for(int k = 1; k<= j; k++)
                dp[j][i] += dp[k - 1][i - 1] * dp[j - k][i - 1];
        }
    }

    cout << dp[n][n] - dp[n][h - 1] << endl;
    return 0;
}
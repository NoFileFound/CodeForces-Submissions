#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

const int INF = 1000000;

int main()
{
    int n, d, dp[200];
    string s;
    cin >> n >> d >> s;
    memset(dp, INF, sizeof dp);
    dp[1] = 0;
    /// dp[i] = minimum number of jumps to reach i.
    for(int i = 2; i <= n; i++)
    {
        if(s[i - 1] == '1')
        {
            for(int j = max(1, i - d); j < i; j++)
            {
                if(dp[j] != INF) dp[i] = min(dp[i], dp[j] + 1);
            }
        }
    }

    cout << (dp[n] >= INF ? -1 : dp[n]) << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int dp[300069]; /// dp[i] - is i reachable and there is no rock.

int main()
{
    int n, k;
    string s;
    memset(dp, 0, sizeof dp);
    cin >> n >> k >> s;
    if(s[0] == '#' || s[s.size() - 1] == '#')
    {
        cout << "NO" << endl;
        return 0;
    }

    int cnt = 1;
    dp[1] = 1;
    for(int i = 2; i <= n; i++)
    {
        if(i - k - 1 >= 0) cnt -= dp[i - k - 1];
        if(cnt > 0 && s[i - 1] == '.') dp[i] = 1;
        cnt += dp[i];
    }

    cout << (dp[n] ? "YES" : "NO") << endl;
    return 0;
}
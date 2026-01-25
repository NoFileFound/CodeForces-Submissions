#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, m, a[105][105], used[105 * 105];

int main()
{
    cin >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        string s;
        cin >> s;
        for(int j = 1; j <= m; j++)
            a[i][j] = s[j - 1] - '0';
    }

    int ans = 0;
    for(int j = 1; j <= m; j++)
    {
        int mx = 0;
        for(int i = 1; i <= n; i++)
            mx = max(mx, a[i][j]);

        for(int i = 1; i <= n; i++)
        {
            if(a[i][j] == mx)
            {
                if(!used[i])
                {
                    ans++;
                    used[i] = true;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
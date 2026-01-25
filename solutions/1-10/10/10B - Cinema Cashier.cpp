#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int n, k, a[1005];
bool dp[105][105];
/// dp[i][j] - is the seat at ith row and jth column available.

int main()
{
    memset(dp, true, sizeof(dp));
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int m = (k + 1) / 2;
    for(int x = 0; x < n; x++)
    {
        int mxcost = INT_MAX, bi = -1, bj = -1;
        for(int i = 1; i <= k; i++)
        {
            for(int j = 1; j <= k - a[x] + 1; j++)
            {
                bool st = true;
                for(int l = 0; l < a[x]; l++)
                    if(st) st &= dp[i][j + l];

                if(st)
                {
                    int cost = a[x] * abs(i - m);
                    for(int l = 0; l < a[x]; l++)
                        cost += abs(j + l - m);

                    if(cost < mxcost || (cost == mxcost && (i < bi || (i == bi && j < bj))))
                    {
                        mxcost = cost;
                        bi = i;
                        bj = j;
                    }
                }
            }
        }

        if(bi == -1) cout << -1 << endl;
        else
        {
            cout << bi << ' ' << bj << ' ' << bj + a[x] - 1 << endl;
            for(int i = 0; i < a[x]; i++)
                dp[bi][bj + i] = 0;
        }
    }

    return 0;
}
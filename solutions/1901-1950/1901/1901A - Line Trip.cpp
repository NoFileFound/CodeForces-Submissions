#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, k, a[69];
    cin >> T;
    while(T--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int ans = a[0];
        for(int i = 1; i < n; i++)
            ans = max(ans, a[i] - a[i - 1]);

        cout << max(ans, 2 * (k - a[n - 1])) << endl;
    }

    return 0;
}
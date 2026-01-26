#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

long long a[200069], p[200069];

int main()
{
    int T, n, k;
    cin >> T;
    while(T--)
    {
        long long ans = 0;
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
            cin >> a[i];

        sort(a + 1, a + n + 1);
        p[0] = 0;
        for(int i = 1; i <= n; i++)
            p[i] = p[i - 1] + a[i];

        for(int i = 0; i <= k; i++)
        {
            long long l = i * 2, r = (n - (k - i));
            if(l <= r)
            {
                ans = max(ans, p[r] - p[l]);
            }
        }

        cout << ans << endl;
    }

    return 0;
}

/*
6
5 1
2 5 1 10 6
5 2
2 5 1 10 6
3 1
1 2 3
6 1
15 22 12 10 13 11
6 2
15 22 12 10 13 11
5 1
999999996 999999999 999999997 999999998 999999995
*/
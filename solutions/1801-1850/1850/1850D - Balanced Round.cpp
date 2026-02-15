#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[200069];

int main()
{
    int T, n, k;
    cin >> T;
    while(T--)
    {
        cin >> n >> k;
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int cnt = 0, ans = INT_MAX;
        sort(a, a + n);
        for(int i = 1; i < n; i++)
        {
            if(a[i] - a[i - 1] <= k) cnt++;
            else
            {
                cnt++;
                ans = min(ans, n - cnt);
                cnt = 0;
            }
        }

        cnt++;
        ans = min(ans, n - cnt);
        cnt = 0;
        cout << (ans == INT_MAX ? 0 : ans) << endl;
    }

    return 0;
}

/*
7
5 1
1 2 4 5 6
1 2
10
8 3
17 3 1 20 12 5 17 12
4 2
2 4 6 8
5 3
2 3 19 10 8
3 4
1 10 5
8 1
8 3 1 4 5 10 7 3
*/
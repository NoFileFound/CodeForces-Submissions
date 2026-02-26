#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int a[100069];

int main()
{
    int T, n;
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];

        int ans = 0, mx = 0;
        for(int i = 1; i <= n; i++)
        {
            mx = max(mx,  a[i]);
            cout << mx << ' ' << i << endl;
            if(mx == i)
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}

/*
6
3
1 2 3
5
2 1 4 3 5
6
6 1 4 2 5 3
1
1
6
3 2 1 6 5 4
5
3 1 5 2 4
*/
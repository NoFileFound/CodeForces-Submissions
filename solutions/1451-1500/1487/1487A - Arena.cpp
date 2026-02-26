#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, a[169];
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 1; i <= n; i++)
            cin >> a[i];

        int mx = *min_element(a + 1, a + n + 1), ans = 0;
        for(int i = 1; i <= n; i++)
            if(a[i] != mx) ans++;

        cout << ans << endl;
    }

    return 0;
}

/*
3
3
3 2 2
2
5 5
4
1 3 3 7
*/
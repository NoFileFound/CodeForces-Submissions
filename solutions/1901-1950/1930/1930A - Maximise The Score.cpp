#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, n, a[1000];
    cin >> T;
    while(T--)
    {
        cin >> n;
        for(int i = 0; i < n * 2; i++)
            cin >> a[i];

        int ans = 0;
        sort(a, a + (n * 2));
        for(int i = 0; i < n * 2; i += 2)
            ans += a[i];

        cout << ans << endl;
    }

    return 0;
}
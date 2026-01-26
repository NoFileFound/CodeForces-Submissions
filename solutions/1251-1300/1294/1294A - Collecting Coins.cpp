#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, a, b, c, n;
    cin >> T;
    while(T--)
    {
        cin >> a >> b >> c >> n;
        int mx = max({a, b, c});
        int r1 = mx - a + mx - b + mx - c;
        if(n - r1 < 0)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << ((n - r1) % 3 == 0 ? "YES" : "NO") << endl;
    }

    return 0;
}
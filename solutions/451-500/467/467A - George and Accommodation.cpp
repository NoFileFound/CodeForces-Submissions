#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int T, p, q, ans = 0;
    cin >> T;
    while(T--)
    {
        cin >> p >> q;
        if(p + 2 <= q) ans++;
    }

    cout << ans << endl;
    return 0;
}
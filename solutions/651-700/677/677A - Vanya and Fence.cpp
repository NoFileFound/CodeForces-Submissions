#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, h, x, ans = 0;
    cin >> n >> h;
    while(n--)
    {
        cin >> x;
        ans += (x > h ? 2 : 1);
    }

    cout << ans << endl;
    return 0;
}
#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

int main()
{
    int n, x0, l = 0, r = 1005;
    cin >> n >> x0;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        l = max(l, min(a, b));
        r = min(r, max(a, b));
    }

    cout << (l > r ? -1 : (x0 >= l && x0 <= r) ? 0 : min(abs(x0 - l), abs(x0 - r))) << endl;
    return 0;
}